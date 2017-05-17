open Game;

module Board = {
  include ReactRe.Component;
  let name = "Board";
  type props = {rows: (row, row, row), handleClick: (rowId, colId) => unit};
  let renderField handleClick t (cid: colId) (rid: rowId) =>
    <span className="field" onClick=(fun _evt => handleClick (rid, cid))>
      (
        switch t {
        | Cross => ReactRe.stringToElement "x"
        | Circle => ReactRe.stringToElement "o"
        | Empty => ReactRe.stringToElement " "
        }
      )
    </span>;
  let renderRow handleClick (t1, t2, t3) rid => {
    let rf = renderField handleClick;
    <div className="row"> (rf t1 C1 rid) (rf t2 C2 rid) (rf t3 C3 rid) </div>
  };
  let render {props} => {
    let (r1, r2, r3) = props.rows;
    let rr = renderRow props.handleClick;
    <div className="board"> (rr r1 R1) (rr r2 R2) (rr r3 R3) </div>
  };
};

include ReactRe.CreateComponent Board;

let createElement ::rows ::handleClick => wrapProps {rows, handleClick};
