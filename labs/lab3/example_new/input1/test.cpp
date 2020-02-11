#include <iostream>
#include <fstream>
#include <sstream> 
using namespace std;

int main () {
      ifstream myfile("input.txt"); //initialize the file name
      string input;
      string values_str[20];

      for (int i = 0; i <20; i++){ //read in input values
      getline(myfile, input);
      values_str[i] = input; //store into values array for analyzation 
      };

      myfile.close();
      return 0;
};

int check_inpendence(NumberSet numb){
		int flag = 1;
		for (int i=0;i<10;i++){
			for (int j=0;j<10;j++){
				if (flag == 1){
					if (numa[i] == numb[j]){
						flag = 0;
					}
				}
				else {
					return 0;
				}
			}
		}
	}