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
		int flag = true; //flag for no matches
		for (int i=0;i<10;i++){ //nested loop to compare each element
			for (int j=0;j<10;j++){
				if ((num[i].get_value()) == (numa.num[j].get_value())){ //is there a match?
					flag = false; //return 0 if not independent
				}
				else if((num[i].get_value()) != (numa.num[j].get_value())){ // no match!
					flag = true; //return 1 if independent
				}
				if (flag == false){ 
				return flag;
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
				if (valset[w].check_inpendence(valset[v]) == 0){ //if not independent
					checker = "N";
					break;
				}
				else {
					checker = "Y";
				}
			}
		}
		if(checker == "N"){ //break out of outer for loop if 
		break;
		}
	}

	if(checker == "N"){
		outputfile << checker << "\n";
	}
	else if(checker == "Y"){
		outputfile << checker << "\n";
	}

	outputfile.close();
    myfile.close();
    return 0;
}
