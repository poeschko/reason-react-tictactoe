open Game;

external styledDiv : array string => ReactRe.reactClass =
  "div" [@@bs.scope "default"] [@@bs.module "styled-components"];

module type StyleDefinition = {
  /* We currently assume that the CSS is just a simple string. Props interpolation isn't supported. */
  let css: string;
};

module StyledDiv (StyleDef: StyleDefinition) => {
  module StyledDivMod = {
    include ReactRe.Component;
    let name = "Styled.Div";
    type props = {children: list ReactRe.reactElement};
    let render {props} =>
      ReactRe.createElement (styledDiv [|StyleDef.css|]) [|ReactRe.listToElement props.children|];
  };
  include ReactRe.CreateComponent StyledDivMod;
  let createElement ::children => wrapProps ::children {children: children};
};

module BoardDivStyle = {
  let css = {j|
    display: inline-table;
    user-select: none;
    cursor: default;
  |j};
};

module BoardDiv = {
  include StyledDiv BoardDivStyle;
};

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
        | Cross => "cross"
        | Circle => "circle"
        }
      );
    <span className=cls onClick=(fun _evt => handleClick (rid, cid))>
      (
        switch field {
        | Cross => ReactRe.stringToElement {js|✕|js}
        | Circle => ReactRe.stringToElement {js|◯|js}
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
    <BoardDiv> (renderRow_ r1 R1) (renderRow_ r2 R2) (renderRow_ r3 R3) </BoardDiv>
  };
};

include ReactRe.CreateComponent Board;

let createElement ::board ::gameState ::handleClick => wrapProps {board, gameState, handleClick};
