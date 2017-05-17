const path = require('path');

module.exports = {
  entry: {
    bundle: './lib/js/src/entry.js'
  },
  output: {
    path: path.join(__dirname, "bundledOutputs"),
    filename: '[name].js',
  },
};
