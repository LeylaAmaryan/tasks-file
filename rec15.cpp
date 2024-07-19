#include<iostream>
//Գրել ռեկուրսիվ ֆունկցիա, որը ստանում է ամբողջ թվային զանգված և տպում է զանգվածի էլեմենտները էկրանին։
void printArr(int arr[], int size,  int index = 0){
	

	if(index == size){
		return;
	}
		std::cout <<arr[index] << " " << std::endl;

	 printArr(arr, size, index + 1 );

}

int main(){
	const int size = 10;
	int arr[size];
	std::cout << " Print 10 array elements "<<std::endl;
	for(int i = 0; i < size; ++i){
		std::cin >> arr[i];
	}
	printArr(arr, size);
}
