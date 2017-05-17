open Game;

module TicTacToe = {
  include ReactRe.Component.Stateful;
  let name = "TicTacToe";
  type props = unit;
  type state = {board: boardType, player: playerType};
  let getInitialState _ => {
    board: ((Empty, Empty, Empty), (Empty, Empty, Empty), (Empty, Empty, Empty)),
    player: CrossPlayer
  };
  let playerToToken player =>
    switch player {
    | CrossPlayer => Cross
    | CirclePlayer => Circle
    };
  let updateField player field =>
    switch field {
    | Empty => playerToToken player
    | Cross => field
    | Circle => field
    };
  let updateRow player cid (f1, f2, f3) => {
    let updateField_ = updateField player;
    switch cid {
    | C1 => (updateField_ f1, f2, f3)
    | C2 => (f1, updateField_ f2, f3)
    | C3 => (f1, f2, updateField_ f3)
    }
  };
  let updateBoard player rid cid (r1, r2, r3) => {
    let updateRow_ = updateRow player cid;
    switch rid {
    | R1 => (updateRow_ r1, r2, r3)
    | R2 => (r1, updateRow_ r2, r3)
    | R3 => (r1, r2, updateRow_ r3)
    }
  };
  let switchPlayer player =>
    switch player {
    | CrossPlayer => CirclePlayer
    | CirclePlayer => CrossPlayer
    };
  let playTurn {state} (rid, cid) => {
    let oldBoard = state.board;
    let newBoard = updateBoard state.player rid cid oldBoard;
    Some {board: newBoard, player: newBoard == oldBoard ? state.player : switchPlayer state.player}
  };
  let render {state, updater} => <Board board=state.board handleClick=(updater playTurn) />;
};

include ReactRe.CreateComponent TicTacToe;

let createElement = wrapProps ();
