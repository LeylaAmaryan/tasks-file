#include <iostream>



int main(){
int val1 = 10; //task1:
int val2 = 5;
int* ptr1 = &val1;
int* ptr2 = &val2;
int sum = *ptr1 + *ptr2;
int sub = *ptr1 - *ptr2;
int mul = *ptr1 * *ptr2;
std::cout << "Sum is equal to " << sum <<std::endl;
std::cout <<"subtraction is " << sub << std::endl;
std::cout <<"multidimention is " << mul << std::endl;
	
	double da = 3.5; //task2:
	double* pt = &da;
	std::cout <<"The value is "<< *pt <<std::endl;
	std::cout <<"The adress is "<< pt <<std::endl;


	
	 char sym = 'H'; //task3:
	const char* c = &sym;
	std::cout << *c <<std::endl;

	double dbl = 4.6;//task4:
	double* const d = &dbl;
	std::cout << d <<std::endl;


	
int n; //task5:
const int size = n;
int arr[size];

std::cout <<"print array size "<<std::endl;
std::cin >> n;

std::cout <<"Print array elements "<<std::endl;
for(int i = 0; i < n; ++i){
	std::cin >> arr[i];
}
int min = arr[0];

	for(int i = 1; i < n; ++i){
	if(arr[i] < min){
		min = arr[i];
	}
}

std::cout << "Minimum element is " << min <<std::endl;


const int size1 = 5; //task6;
int arr1[size1];
std::cout <<"Print 5 elements "<<std::endl;
for(int i = 0; i < size1; ++i){
	std::cin >> arr1[i];
}
int max_index = 0;
for(int i = 0; i < size1; ++i){
	if(arr1[i] >  max_index){
		max_index = i;
	}
}
std::cout <<"the index of max element is " << max_index << std::endl;

const int size2 = 10; //task7:
int arr2[size2];

std::cout <<"Print then elements"<<std::endl;
for(int i = 0; i < size2; ++i){
	std::cin >> arr2[i];
}
int second_max = arr2[0];
int first_max = arr2[0];
for(int i = 1; i < size2; ++i){
	if(arr2[i] > first_max){
	second_max = first_max;
	first_max = arr2[i];
	}else if(arr2[i] = second_max && arr2[i] != first_max){
		second_max = arr2[i];
	}
}



std::cout <<"The second largest element is " << second_max << std::endl;



const int size3 = 7; //task 8:
int arr3[size3];
std::cout <<"Enter 7 elements " << std::endl;
for(int i = 0; i < size3; ++i){
	std::cin >> arr3[i];
}
int min1 = arr3[0];
int max = arr3[0];
int sum1 = 0;
for(int i = 1; i < size3; ++i ){
	if(arr3[i] > max){
		max = arr3[i];
	}else if(arr3[i] < min1 && arr3[i] != max){
		min1 = arr3[i];
	}
	
	sum1 = max + min1;
	
}
	std::cout <<"Maximum element is "<< max <<std::endl;
	std::cout <<"Minimum element is " << min1 << std::endl;
	std::cout <<"The sum of max and min is " <<  sum1 << std::endl;

	}	
