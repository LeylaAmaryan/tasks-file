#include <iostream>
// Dynamic Memory for Arrays

//Write a C++ function sum_dynamic_array that takes a pointer to a dynamically allocated array of integers and its size as inputs, calculates and returns the sum of the elements in the array.

int sum_dynamic_array(int arr[], int size){
	int sum = 0;
	
	for(int i = 0; i < size; ++i){
		sum += arr[i];
	}
	return sum;

}
int main(){
	 int size;
	 std::cout << "Print the array size "<< std::endl;
	 std::cin >> size;
	int* arr = new int[size];
	std::cout << "print "<< size <<" integers"<< std::endl;
	for(int i = 0; i < size; ++i){
		std::cin >> arr[i];
	}
	int sum = sum_dynamic_array(arr, size);
	std::cout << "Sum of elements is " << sum <<std::endl;

	delete[] arr;
	return 0;
}
