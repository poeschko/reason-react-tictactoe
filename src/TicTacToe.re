open Game;

open Glamor;

module TicTacToe = {
  include ReactRe.Component.Stateful;
  let name = "TicTacToe";
  type props = unit;
  type state = {board: boardType, player: playerType, gameState: gameStateType};
  let initialState = {
    board: ((Empty, Empty, Empty), (Empty, Empty, Empty), (Empty, Empty, Empty)),
    player: Cross,
    gameState: Playing
  };
  let getInitialState _ => initialState;
  let updateField player field =>
    switch field {
    | Empty => Filled player
    | Filled _ => field
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
    | Cross => Circle
    | Circle => Cross
    };
  let isFull f (f1, f2, f3) => f == f1 && f1 == f2 && f2 == f3;
  let hasWon player (r1, r2, r3) => {
    let f = Filled player;
    let isFull_ = isFull f;
    let (f11, f12, f13) = r1;
    let (f21, f22, f23) = r2;
    let (f31, f32, f33) = r3;
    isFull_ r1 ||
    isFull_ r2 ||
    isFull_ r3 ||
    isFull_ (f11, f21, f31) ||
    isFull_ (f12, f22, f32) ||
    isFull_ (f13, f23, f33) || isFull_ (f11, f22, f33) || isFull_ (f31, f22, f13)
  };
  let fieldsHaveEmptyField (f1, f2, f3) => f1 == Empty || f2 == Empty || f3 == Empty;
  let rowsHaveEmptyField (r1, r2, r3) =>
    fieldsHaveEmptyField r1 || fieldsHaveEmptyField r2 || fieldsHaveEmptyField r3;
  let playTurn {state} (rid, cid) =>
    if (state.gameState == Playing) {
      let oldBoard = state.board;
      let newBoard = updateBoard state.player rid cid oldBoard;
      Some {
        board: newBoard,
        player: newBoard == oldBoard ? state.player : switchPlayer state.player,
        gameState:
          hasWon state.player newBoard ?
            Won state.player : rowsHaveEmptyField newBoard ? Playing : Tie
      }
    } else {
      None
    };
  let restart _ _ => Some initialState;
  let render {state, updater} =>
    <div className=(css [textAlign "center"])>
      <h1> (ReactRe.stringToElement "Tic Tac Toe") </h1>
      <GitHubRibbon url="https://github.com/poeschko/reason-react-tictactoe" />
      <Board board=state.board gameState=state.gameState handleClick=(updater playTurn) />
      <p>
        (
          switch state.gameState {
          | Playing => ReactRe.nullElement
          | Won Cross => ReactRe.stringToElement "Cross has won!"
          | Won Circle => ReactRe.stringToElement "Circle has won!"
          | Tie => ReactRe.stringToElement "Tie!"
          }
        )
      </p>
      <div>
        (
          switch state.gameState {
          | Playing => ReactRe.nullElement
          | _ => <button onClick=(updater restart)> (ReactRe.stringToElement "Restart") </button>
          }
        )
      </div>
    </div>;
};

include ReactRe.CreateComponent TicTacToe;

let createElement = wrapProps ();
