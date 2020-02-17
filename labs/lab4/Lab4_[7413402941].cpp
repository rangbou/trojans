#include <iostream>
#include <fstream>
#include <sstream> 
using namespace std; 

ifstream myfile("input.txt"); //open input and outfiles
ofstream outputfile("output.txt");

class Matrix{
public:
	int value[20][10];

	int linear_search(int FirstNum){
		//linear search complexity O(N)
		int i = 1; //set to 1 so it doesn't look at the first [0][0] element of the matrix
		int j = 0;
		int iteration = 0;
		while(i<10){ //start the linear search
			if(value[j][i] == FirstNum){ //look for FristNum in the first row
				//cout << "iteration: " << iteration << "\n";
				outputfile << iteration << "\n";
				return j; //if the number is found then return the row index
			}
			else{ //if FirstNum wasn't found
				if (i == 9){ //if reached the end of the row then 
					j++; //go to the next row
					i = 0; //start at the beginning of the new row
				}
				else{ //for to next element in the row
					i++;
				}
			}
			iteration++;
		}
	}

	void sort_row(int row_index){ //row to sort: value[row_index][i] where i < 10
		//bubble sort complexity O(N)
		int temp; //temporary variable to hold value during swap
		for(int x=0;x<10;x++){
			for(int y = 0;y<10;y++){
				//cout << value[row_index][x] << " " << value[row_index][y] << "\n"; 
				if(value[row_index][x] < value[row_index][y]){ //compare the two elements
					temp = value[row_index][y]; //if element x is less than element y then x and y will switch
					value[row_index][y] = value[row_index][x];
					value[row_index][x] = temp;
				}
			}
		}
		outputfile << value[row_index][0] << ", " << value[row_index][1] << ", " << value[row_index][2] << ", " << value[row_index][3] << ", " << value[row_index][4] << ", " << value[row_index][5] << ", " << value[row_index][6] << ", " << value[row_index][7] << ", " << value[row_index][8]<< ", " << value[row_index][9]<< "\n";
	}

	int binary_search(int FirstNum , int row_index){ 
		int start = 0;
		int index = 0;
		int iteration = 0;
		int end = 10;
		while (start < end){ 
			index = (start+end)/2; //find the middle
			if(FirstNum == value[row_index][index]){ //check to see if FirstNum is in the ith index
				//cout << "iteration: " << iteration << "\n";
				outputfile << index << "\n";
				outputfile << iteration << "\n";
				return index; //if so return index;
			}
			else if (FirstNum < value[row_index][index]){ //if the value is below the middle ith index then look at the lower half
				end = index; //the middle now becomes the end 
			}
			else{ //if FirstNum is greater the the middle ith index then you are in the right half
				start = index + 1; //move up the array and find the new middle
			}
			iteration++;
		}
	}

};

int main(){

	int arr[10];
	int FirstNum, row, index;
	Matrix input; 

	for(int x=0;x<20;x++){ //take in values one at a time from input.txt
	myfile >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5] >> arr[6] >> arr[7] >> arr[8] >> arr[9];

	for(int z=0;z<10;z++){ //store the input values into FirstNum one row at a time
		input.value[x][z] = arr[z];}
	}

	FirstNum = input.value[0][0];
	row = input.linear_search(FirstNum);
	input.sort_row(row);
	index = input.binary_search(FirstNum, row);

	//cout << row << " " << index << "\n";

	myfile.close();
	outputfile.close();
	return 0;
}
