module GitHubRibbon = {
  include ReactRe.Component;
  let name = "GitHubRibbon";
  type props = {url: string};
  let render {props} => {
    let style = ReactDOMRe.Style.make position::"absolute" top::"0" right::"0" border::"0" ();
    let imgSrc = "https://camo.githubusercontent.com/a6677b08c955af8400f44c6298f40e7d19cc5b2d/68747470733a2f2f73332e616d617a6f6e6177732e636f6d2f6769746875622f726962626f6e732f666f726b6d655f72696768745f677261795f3664366436642e706e67";
    let canonicalSrc = "https://s3.amazonaws.com/github/ribbons/forkme_right_gray_6d6d6d.png";
    <a href=props.url>
      (
        ReactDOMRe.createElement
          "img"
          props::(
            ReactDOMRe.objToDOMProps {
              "style": style,
              "src": imgSrc,
              "alt": "Fork me on GitHub",
              "data-canonical-src": canonicalSrc
            }
          )
          [||]
      )
    </a>
  };
};

include ReactRe.CreateComponent GitHubRibbon;

let createElement ::url => wrapProps {url: url};
