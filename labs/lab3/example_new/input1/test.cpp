#include <iostream>
#include <fstream>
using namespace std;

int main () {
      ifstream myfile("input.txt"); //initialize the file name
      string input;
      string values[20];
      for (int i = 0; i <20; i++){ //read in input values
      getline(myfile, input);
      values[i] = input; //store into values array for analyzation 
      cout << values[i] << "\n";
      }
      myfile.close();
      return 0;
}