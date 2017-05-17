open Game;

module TicTacToeApp = {
  include ReactRe.Component.Stateful;
  let name = "TicTacToe";
  type props = unit;
  type state = {rows: (row, row, row), player: playerType};
  let getInitialState _ => {
    rows: ((Empty, Empty, Empty), (Empty, Empty, Empty), (Empty, Empty, Empty)),
    player: CrossPlayer
  };
  let playerToToken player =>
    switch player {
    | CrossPlayer => Cross
    | CirclePlayer => Circle
    };
  let updateCol player field =>
    switch field {
    | Empty => playerToToken player
    | Cross => field
    | Circle => field
    };
  let updateRow cid player (t1, t2, t3) => {
    let uc = updateCol player;
    switch cid {
    | C1 => (uc t1, t2, t3)
    | C2 => (t1, uc t2, t3)
    | C3 => (t1, t2, uc t3)
    }
  };
  let changePlayer player =>
    switch player {
    | CrossPlayer => CirclePlayer
    | CirclePlayer => CrossPlayer
    };
  let playTurn {state} (rid, cid) => {
    let (r1, r2, r3) = state.rows;
    let ur = updateRow cid state.player;
    let newRows =
      switch rid {
      | R1 => (ur r1, r2, r3)
      | R2 => (r1, ur r2, r3)
      | R3 => (r1, r2, ur r3)
      };
    Some {rows: newRows, player: changePlayer state.player}
  };
  let render {state, updater} => <Board rows=state.rows handleClick=(updater playTurn) />;
};

include ReactRe.CreateComponent TicTacToeApp;

let createElement = wrapProps ();
