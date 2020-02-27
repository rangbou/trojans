#include <iostream>
#include <fstream>
#include <sstream> 
using namespace std; 

//number 1
class Person{
	string Name;
public:
	int Result; 
	public:
	string Print_Name(void){
		cout << Name << "! ";
	}
	void Set_Name(string x){
		Name = x;
	}
	int Is_Infected(void){
		if ((Result == 999) || (Result == 666)){
			return 1;
		}
		else {
			return 0;
		}
	}
};

int main(){
	Person Shahizombi;
	Person Shahivamp;
	Person Shahicoron;
	Person arr[3] = {Shahizombi, Shahivamp, Shahicoron};

	int r1, r2, r3, flag,run = 1;
	string an;

	arr[0].Set_Name("Shahizombi");
	arr[1].Set_Name("Shahivamp");
	arr[2].Set_Name("Shahicoron");

while(run>0){
	cout << "Please Enter Result for Shahizombi, Shahivamp, Shahicoron respectively: \n";
	cin >> r1 >> r2 >> r3;

	arr[0].Result = r1;
	arr[1].Result = r2;
	arr[2].Result = r3;

	for(int i=0;i<3;i++){
		if(arr[i].Is_Infected() == 1){
			arr[i].Print_Name();
			cout << "Your test result is " << arr[i].Result << " You are infected! \n";
			flag = 1;
		}
	}

	if(flag == 0){
		cout << "Something went wrong! Do you want to repeat the test? \n";
		cin >> an;
		if(an == "no"){
			run = 0;
		}
		if(an == "yes"){
			run = 1;
		}
	}
	else{
		run = 0;
	}
}
	return 0;
}