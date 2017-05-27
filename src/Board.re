open Game;

open CSS;

module Board = {
  include ReactRe.Component;
  let name = "Board";
  type props = {
    board: boardType,
    gameState: gameStateType,
    handleClick: (rowIdType, colIdType) => unit
  };
  let renderField {gameState, handleClick} (field: fieldType) (cid: colIdType) (rid: rowIdType) => {
    let theCursor = gameState == Playing ? "pointer" : "default";
    let bg =
      switch gameState {
      | Playing => Nothing
      | Tie => Nothing
      | Won player => field == Filled player ? background "lightgreen" : Nothing
      };
    let hover = gameState == Playing && field == Empty ? background "lightblue" : Nothing;
    let cls =
      Glamor.css [
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
  let renderRow props (f1, f2, f3) rid => {
    let renderField_ = renderField props;
    <div className=(Glamor.css [display "table-row"])>
      (renderField_ f1 C1 rid)
      (renderField_ f2 C2 rid)
      (renderField_ f3 C3 rid)
    </div>
  };
  let render {props} => {
    let (r1, r2, r3) = props.board;
    let renderRow_ = renderRow props;
    <div className=(Glamor.css [display "inline-table", cursor "default", userSelect "none"])>
      (renderRow_ r1 R1)
      (renderRow_ r2 R2)
      (renderRow_ r3 R3)
    </div>
  };
};

include ReactRe.CreateComponent Board;

let createElement ::board ::gameState ::handleClick => wrapProps {board, gameState, handleClick};
