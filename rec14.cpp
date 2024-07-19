#include <iostream>
//Իրականացնել ռեկուրսիվ ֆունկցիա, որը վերադարձնում է տրված զանգվածի փոքրագույն էլեմենտը։
int minArray(int arr[], int size){
	if(size == 1){
		return arr[0];
	}
	int min = minArray(arr + 1, size -1);
	return(arr[0] < min) ? arr[0] : min;


}
int main(){
	const int size = 10;
	int arr[size];
	std::cout << " Print 10 elements "<<std::endl;
	for(int i = 0; i < size; ++i){
		std::cin >> arr[i];
	}
	
	int min = minArray(arr, size);
	std::cout << "Minimum element is "<< min <<std::endl;
}
