#include <iostream>
#include <fstream>
#include <sstream> 
using namespace std; 


//declare class Number
class Number{
	int value;
public:
	void set_value(int x){
		value = x;
	}
	int get_value(void){
		return value;
	}
};

//declare class NumberSet
class NumberSet{
public:
	Number num[10]; 
	int check_inpendence(NumberSet numa){ 
		int flag = 1; //flag for no matches
		for (int i=0;i<10;i++){ //nested loop to compare each element
			for (int j=0;j<10;j++){
				if (flag == 1){ //if no matches then try to find matches
					if ((num[i].get_value()) == (numa.num[j].get_value())){ //is there a match?
						flag = 0; //flag = 0 means that there is a match! therefore subsets are independent
					}
					else { //return 1 means subsets are not independent 
						return 1;
					}
				}
				else { //subsets are independent ; return 0 = independent 
					return 0;
				}
			}
		}
	}
};
 
int main () {
	ifstream myfile("input.txt"); //initialize the file name
	
	int a,b,c,d,e,f,g,h,i,j; //initialize variables
	string checker;
	int arr[10] = {a,b,c,d,e,f,g,h,i,j}; //array to hold input values

	NumberSet valset[20];

	for(int x=0;x<20;x++){
	myfile >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5] >> arr[6] >> arr[7] >> arr[8] >> arr[9];

	for(int z=0;z<10;z++){ //set values into Number num in valset 
		valset[x].num[z].set_value(arr[z]);
	}
	}
	//check independence and write into file
	ofstream outputfile("output.txt");
	for(int w=0;w<20;w++){
		for(int v=0;v<20;v++){
			if (w != v){
				if (valset[w].check_inpendence(valset[v]) == 0){
					checker = "output Y";
				}
				else {
					checker = "output N";
				}
			}
		}
		outputfile << "valset[" << w << "]: " << checker << "\n";
	}

	outputfile.close();
    myfile.close();
    return 0;
}

