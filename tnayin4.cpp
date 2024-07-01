#include <iostream>
int main(){/* //task1:
	const int size = 5;
	int arr[size] = {1,2,3,4,5};
	int* ptr = arr;
	for(int i = 0; i < size; ++i){
		std::cout << *(ptr + i) << " "<<std::endl;  
	}
	int sum = 0;
	for(int i = 0; i < size; ++i){
		sum += *(ptr + i);
	}
	std::cout << "Sum of elements is "<< sum << std::endl;

	int num = 8;//task2:
	int* const pt = &num;
	*pt = 6;
	int num2 = 30;
	//pt = &num2; pt is read-only variable:
	const int* point = &num2;
	// *point = 20; *point is read-only variable:
	
	
	
	std::cout << pt;
	std::cout << *pt << std::endl;
	std::cout << *point <<std::endl;


	const int size = 4;//task3:
	int arr[size] = {5,4,3,2,};
	std::cout << "Array elements before modification " << std::endl;
	for(int i = 0; i < size; ++i){
		std::cout << arr[i] <<std::endl;
	}
	arr[0] = 7;
	arr[2] = 1;

	int* pta = arr;
	*(pta + 1) = 6;
	*(pta + 3) = 9;
	std::cout << "array elements after modification " << std::endl;

	for(int i = 0; i < size; ++i){
		
		std::cout  << arr[i] << std::endl;
	}*/


	int value = 3;
	std::cout <<"variable value is " << value <<std::endl;

	int& val = value;
	val = 2;
	std::cout <<"Modification through reference  is "<< value << std::endl;

	int* p = &value;
	*p = 5;
	
	
	std::cout <<"Modification through Pointer  is "<< value << std::endl;	



}

