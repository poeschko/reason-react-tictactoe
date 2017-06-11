# Tic-tac-toe with Reason + React

A simple tic-tac-toe implementation using [Reason](https://facebook.github.io/reason/) and [Reason-React](https://github.com/reasonml/reason-react), built on top of the boilerplate from [chenglou/reason-react-example](https://github.com/chenglou/reason-react-example), using [bs-glamor](https://github.com/poeschko/bs-glamor) for styling.

[Live Demo](https://poeschko.github.io/reason-react-tictactoe/)

## Setup

    npm install

    # start Bucklescript compiler in watch mode in one tab:
    npm start
    # start Webpack in watch mode in another tab:
    npm run build

Then open [src/index.html](./src/index.html) to play a round of tic-tac-toe against yourself.

Take a look at [ReasonVienna/dev-setup](https://github.com/ReasonVienna/dev-setup) for a very reasonable description of how to set up your development environment.

## Deploying to GitHub Pages

    git checkout master
    npm run docs
    git commit -am "update docs"
    git push
