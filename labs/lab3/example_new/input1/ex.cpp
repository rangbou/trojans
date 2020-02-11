// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

int main () {
      string x;
      ifstream myfile;
      myfile.open ("example.txt");
      myfile >> x;
      myfile.close();
      cout << x << "\n";
      return 0;
}