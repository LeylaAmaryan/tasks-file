#include <iostream>
int main(){
	/*const int size = 5;// task 9:
	int arr1[size];
	int arr2[size];
	std::cout << "Print 5 elements of first array "<<std::endl;
	for(int i = 0; i < size; ++i ){
		std::cin >> arr1[i];
	}
	std::cout << "Print 5 elements for the second array "<< std::endl;
	for(int i = 0; i < size; ++i){
		std::cin >> arr2[i];
	}

		for(int i = 0; i < size; ++i){
			std::cout <<"The  product of "<< i <<" is "<< arr1[i] * arr2[i] << std::endl;
		
	}
	
	const int size = 7;
	int arr[size];
	int num;
	std::cout << "Print 7 elements " << std::endl;
	for(int i = 0; i < size; ++i){
		std::cin >> arr[i];
	}
	std::cout <<"Print the number to check " << std::endl;
	std::cin >> num;
	bool found = 0;
	for(int i = 0; i < size; ++i){
	if(arr[i] == num){
		found = 1;
		break;
		}
	}
	if (found){
		std::cout << "Yes " << std::endl;
	}else{
		std::cout <<"No " << std::endl;
	}*/
	   const int size = 7;
	   char ch[size];
	   std::cout <<"Print 7 character "<<std::endl;
	   for(int i = 0; i < size; ++i){
		   std::cin >>*(ch + i);
	   }
	   std::cout <<"The numeric character are " << std::endl;
	   for(int i = 0; i < size; ++i){
	   if(*(ch + i) >= '0' && *(ch + i) <= '9'){
		   std::cout << *(ch + i) << ' ';
	   }
	
}
}
