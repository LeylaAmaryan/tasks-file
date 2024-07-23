#include <iostream>
//Իրականացնել ծրագիր, որը քառակուսային մատրիցի գլխավոր անկյունագծից վերև կհաշվի բոլոր էլեմենտների գումարը։
int matrix(int arr[][3], int n){
	int sum = 0;
	for(int i = 0; i < n; ++i)
		for(int j = i + 1; j < n; ++j){
			sum += arr[i][j];
		}
	return sum;
}
int main(){
	const int n = 3;
	int arr[n][n] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int sum = matrix(arr, n);
	std::cout << sum;
}
