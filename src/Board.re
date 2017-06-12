open Game;

open Glamor;

module Board = {
  include ReactRe.Component;
  let name = "Board";
  type props = {
    board: boardType,
    gameState: gameStateType,
    handleClick: (rowIdType, colIdType) => unit
  };
  let renderField {gameState, handleClick} (rid: rowIdType) (cid: colIdType) (field: fieldType) => {
    let theCursor = gameState == Playing ? "pointer" : "default";
    let bg =
      switch gameState {
      | Playing => Nothing
      | Tie => Nothing
      | Won player => field == Filled player ? background "lightgreen" : Nothing
      };
    let hover = gameState == Playing && field == Empty ? background "lightblue" : Nothing;
    let cls =
      css [
        display "table-cell",
        width "80px",
        height "80px",
        border "1px solid gray",
        textAlign "center",
        verticalAlign "middle",
        fontSize "50px",
        fontWeight "bold",
        cursor theCursor,
        bg,
        Selector ":hover" [hover]
      ];
    <span className=cls onClick=(fun _evt => handleClick (rid, cid))>
      (
        switch field {
        | Filled Cross => ReactRe.stringToElement {js|✕|js}
        | Filled Circle => ReactRe.stringToElement {js|◯|js}
        | Empty => ReactRe.stringToElement " "
        }
      )
    </span>
  };
  let renderRow props rid (f1, f2, f3) => {
    let renderField_ = renderField props rid;
    <div className=(css [display "table-row"])>
      (renderField_ C1 f1)
      (renderField_ C2 f2)
      (renderField_ C3 f3)
    </div>
  };
  let render {props} => {
    let (r1, r2, r3) = props.board;
    let renderRow_ = renderRow props;
    <div className=(css [display "inline-table", cursor "default", userSelect "none"])>
      (renderRow_ R1 r1)
      (renderRow_ R2 r2)
      (renderRow_ R3 r3)
    </div>
  };
};

include ReactRe.CreateComponent Board;

let createElement ::board ::gameState ::handleClick => wrapProps {board, gameState, handleClick};
