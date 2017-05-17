type fieldType =
  | Cross
  | Circle
  | Empty;

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

type playerType =
  | CrossPlayer
  | CirclePlayer;

type gameStateType =
  | Playing
  | Won playerType
  | Tie;
