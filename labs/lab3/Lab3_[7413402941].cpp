#include <iostream>
#include <ofstream>
#include <ifstream>
using namespace std; 

//set k and m values 
int k = 10;
int m = 20;

//declare class Number
class Number{
	int value;
public:
	set_value(int x){
		value = x;
	};
	get_value(void){
		return value;
	};
}

//declare class NumberSet
class NumberSet{
public:
	Number num_arr[k];
	check_inpendence();
}

void NumberSet::check_inpendence(NumberSet object){
//how
}

int main(){
	
}

