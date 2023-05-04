// #include <bits/stdc++.h>
// #include <termios.h>
// #include <unistd.h>
// // #include <conio.h> // for _getch() function
// using namespace std;

// int getch() {
//   struct termios old_t, new_t;
//   int ch;
//   tcgetattr(STDIN_FILENO, &old_t);
//   new_t = old_t;
//   new_t.c_lflag &= ~(ICANON | ECHO);
//   tcsetattr(STDIN_FILENO, TCSANOW, &new_t);
//   ch = getchar();
//   tcsetattr(STDIN_FILENO, TCSANOW, &old_t);
//   return ch;
// }
// int main() {
//   std::string input;
//   while (true) {
//     char c = getch();
//     if (c == 1) { // ctrl + 1
//       std::cout << "Ctrl+1 was pressed. Moving cursor to the start of the line." << std::endl;
//     } else if (c == 5) { //ctrl + 9
//       std::cout << "Ctrl+9 was pressed. Moving cursor to the end of the line." << std::endl;
//     } else 
//     {
//       std::cout << "You entered: " << c << std::endl;
//     }
//   }
//   return 0;
// }
#include <unistd.h>
#include <iostream>

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cerr << "Usage: cd <directory>" << std::endl;
    return 1;
  }
  
  int result = chdir(argv[1]);
  if (result != 0) {
    std::cerr << "Error: failed to change directory to " << argv[1] << std::endl;
    return 1;
  }
  
  return 0;
}
