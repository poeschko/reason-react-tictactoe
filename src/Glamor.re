type styleObj;

external makeCSS : styleObj => string = "css" [@@bs.module "glamor"];

external makeObj : display::string? => cursor::string? => unit => styleObj = "" [@@bs.obj];

let addKeyValueToStyles: styleObj => string => styleObj => styleObj = [%bs.raw
  {|
        function (obj, key, value) {
            var newObj = {};
            newObj[key] = value;
            return Object.assign({}, obj, newObj);
        }
    |}
];

let addSelectorToStyles styles (selectorKey, selectorStyles) =>
  addKeyValueToStyles styles selectorKey selectorStyles;

let combineStyles: styleObj => styleObj => styleObj = [%bs.raw
  {|
      function (a, b) {
        return Object.assign({}, a, b);
      }
    |}
];

let makeStyle ::display=? ::cursor=? extra => {
  let styles = makeObj ::?display ::?cursor ();
  List.fold_left addSelectorToStyles styles extra
};

let selector key ::display=? ::cursor=? extra => (key, makeStyle ::?display ::?cursor extra);

let css ::display=? ::cursor=? extra => makeCSS (makeStyle ::?display ::?cursor extra);
