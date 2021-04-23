# A Test Project For Clang Tidy

## install clang tidy

- sudo apt-get install clang-tools
- sudo apt-get install clang-tidy

## TODO

- We might need to run clang tidy fix on individual files - as of clang 3.8 this did not work for multiple files - any overlap (like in headers) would generate duplicated fixes! - but we have clang tidy 6+ now so maybe that is fixed.
- generate the clang output files in a different folder that is cleaned. Not essential - but tidier. Not sure exactly how we specify where the compile_commands.json file is.


