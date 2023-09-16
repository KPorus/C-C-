function processData(input) {
  //Enter your code here
  let lines = input.split("\n");

  // Process each line
  for (let i = 0; i < lines.length; i++) {
    let line = lines[i];

    // Split the line by semicolons if needed
    let values = line.split(";");
    if (values.length === 3) {
      let parts = values[0];
      let type = values[1];
      let word = values[2];

      if (parts == "S") {
        let words = word.split(/(?=[A-Z])/);
        if (type == "C") {
          words = words.map(
            (word) =>
              word.substring(0, 1).toUpperCase() +
              word.substring(1).toLowerCase()
          );

          console.log(words.join(" "));
        }
      }
    }
  }
}

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
  _input += input;
});

process.stdin.on("end", function () {
  processData(_input);
});
