#include <iostream>
#include <fstream>
using namespace std;

int main () {
      ifstream myfile;
      int x, y, z;
      myfile.open ("input.txt");
      my flie >> x >> y >>  z;
      cout << x << "," << y << "'" << z << "\n";
      myfile.close();
      return 0;
}