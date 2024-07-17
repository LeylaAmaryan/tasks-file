#include <iostream>
//Գրել ֆունկցիա, որը հաշվում է, թե քանի անգամ է տրված տարրը հանդիպում զանգվածում ռեկուրսիվ եղանակով։
int foo(int arr[], size_t size, int x, int index = 0){
	int count = 0;
	if( index == size){
		
		return 0;
	}
	if(arr[index]== x){
		count = 1;
	}
	return count + foo(arr, size, x, index + 1);
	
	
} 


int main(){
	const int size = 10;
	int arr[size] ={22,3,5,6,4,3,5,6,5,10};
	int x = 5;
	int count = foo(arr, size, x);
	std::cout << x << " occurs " << count << " time in the array "<< std::endl;
}
