#include <iostream>
#include <string>

using namespace std;

int main() {
  // Flush after every cout / std:cerr
  cout << unitbuf;
  cerr << unitbuf;

  // Uncomment this block to pass the first stage
  cout << "$ ";

  string input;
  getline(cin, input);
  if (input == "exit 0") exit(0);  
  cout << input << ": command not found" << endl;
  main();
}