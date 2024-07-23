#include <iostream>
//Իրականացնել ֆունկցիա, որը հաշվում և վերադարձնում է քառակուսային մատրիցի օժանդակ անկյունագծի տարրերի գումարը։
int matrix(int matrix[][3], int n){
	int sum = 0;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			if ((i + j) ==(n -1)){
			sum += matrix[i][j];
			}

		}
	}
	return sum;

}
int main(){
	const int n = 3;
	int arr[n][n]={
		{1,2,4},
		{4,5,6},
		{7,8,9}
	};
	int sum = matrix(arr, n);
	std::cout <<"the sum of diagonals matrix is  "<< sum << std::endl; 
}

