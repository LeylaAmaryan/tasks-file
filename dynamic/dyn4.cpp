#include <iostream>
//Write a function that reverses a dynamically allocated array.
void reverse_dynamic_array(int* array, int size){
	
	int start = 0; 
	int end	= size -1;
	while(start < end){
		int tmp = array[start];
		array[start] = array[end];
		array[end] = tmp;
		start++;
		end--;
	}
}

int main(){
	int size = 5;
	int* arr = new int[size] {1,2,3,4,5};
	
	std::cout << "Array element is " ;
	for(int i = 0; i < size; ++i){
		std::cout << arr[i] << " ";
			
		}
	reverse_dynamic_array(arr, size);

	std::cout <<"Revers array is ";
	for(int i = 0; i < size; ++i){
		std::cout << arr[i] << " ";
	}
	delete[] arr;
	

}

