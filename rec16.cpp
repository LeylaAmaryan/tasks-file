#include <iostream>
//Գրել ռեկուրսիվ ֆունկցիա, որը ստանում է ամբողջ թվային զանգված և տպում է զանգվածի էլեմենտները էկրանին հակառակ հերթականությամբ։
void printArr(int arr[], int size, int index = 0){
	if(index == size){
		return;
	}

	printArr(arr, size, index + 1);
	std::cout << index << " " <<std::endl;
	

}

int main(){
	const int size = 5;
	int arr[size];
	printArr(arr, size);
}
