type playerType =
  | Cross
  | Circle;

type gameStateType =
  | Playing
  | Won playerType
  | Tie;

type fieldType =
  | Empty
  | Filled playerType;

type rowType = (fieldType, fieldType, fieldType);

type boardType = (rowType, rowType, rowType);

type rowIdType =
  | R1
  | R2
  | R3;

type colIdType =
  | C1
  | C2
  | C3;
