#include <iostream>
//Իրականացնել ֆունկցիա, որը ստանում է քառակուսային մատրից։ Ֆունկցիան մատրիցի զույգ ինդեքսով տողերի էլեմենտները փոխարինում է 0-ներով և վերադարձնում։
void matrix(int matrix[][4], int n){
	for(int i = 0; i < n; i += 2){
		for(int j = 0; i < n; ++j){
			matrix[i][j] = 0;
		
		
		}
	}
	
}
int main(){
	const int n = 4;
	int arr[n][n] = {
		{1,2,3,4},
		{5,6,7,8},
		{9, 10, 11, 12},
		{13,14,15,16}
	};

 matrix(arr, n);
 for(int i = 0; i < n; ++i){
	 for(int j = 0; j < n; ++j){
		 std::cout << "The number under even index is "<< arr[i][j] << std::endl;
	 }
 }
	 
	
}

