#include <iostream>
//Իրականացնել ֆունկցիա, որը հաշվում և վերադարձնում է քառակուսային մատրիցի գլխավոր անկյունագծի տարրերի գումարը։
int SumMat(int matrix[][3], int n){
	int sum = 0;
	for(int i = 0; i < n; ++i){
		sum += matrix[i][i];
	}
	return sum;
}
int main(){
	const int n = 3;
	int matrix[n][n] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int sum = SumMat(matrix, 3);
	std::cout << sum;
		}


