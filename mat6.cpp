#include <iostream>

//Իրականացնել ֆունկցիա, որը քառակուսային մատրիցի գլխավոր և օժանդակ անկյունագծի էլեմենտների արժեքները տեղերով կփոխի։
void matrix(int arr[][3], int n){
	for(int i = 0; i < n; ++i)
		if(i != n/2)
			std::swap(arr[i][i],arr[i][n -i -1]);
			
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j)
			std::cout << arr[i][j] << " " ;
			
				
			
	}
		


}
int main(){
	const int n = 3;
	int arr[n][n]={
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	 matrix(arr, n);
}
