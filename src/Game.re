type token =
  | Cross
  | Circle
  | Empty;

type row = (token, token, token);

type boardType = (row, row, row);

type rowId =
  | R1
  | R2
  | R3;

type colId =
  | C1
  | C2
  | C3;

type playerType =
  | CrossPlayer
  | CirclePlayer;
