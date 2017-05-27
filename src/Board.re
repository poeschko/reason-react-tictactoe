open Game;

module Board = {
  include ReactRe.Component;
  let name = "Board";
  type props = {
    board: boardType,
    gameState: gameStateType,
    handleClick: (rowIdType, colIdType) => unit
  };
  let renderField handleClick (field: fieldType) (cid: colIdType) (rid: rowIdType) => {
    let cls =
      "field " ^ (
        switch field {
        | Empty => "empty"
        | Filled Cross => "cross"
        | Filled Circle => "circle"
        }
      );
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
  let renderRow handleClick (f1, f2, f3) rid => {
    let renderField_ = renderField handleClick;
    <div className="row">
      (renderField_ f1 C1 rid)
      (renderField_ f2 C2 rid)
      (renderField_ f3 C3 rid)
    </div>
  };
  let render {props} => {
    let (r1, r2, r3) = props.board;
    let renderRow_ = renderRow props.handleClick;
    <div className=(Glamor.css display::"inline-table" cursor::"default" userSelect::"none" [])>
      (renderRow_ r1 R1)
      (renderRow_ r2 R2)
      (renderRow_ r3 R3)
    </div>
  };
};

include ReactRe.CreateComponent Board;

let createElement ::board ::gameState ::handleClick => wrapProps {board, gameState, handleClick};
