#include<iostream>
//Գրեք C++ ֆունկցիա get_dynamic_array, որն ընդունում է n ամբողջ թիվ որպես մուտքագրում, դինամիկ կերպով հատկացնում է n չափի ամբողջ թվերի զանգված, սկզբնավորում է զանգվածը օգտագործողի կողմից մուտքագրված արժեքներով և վերադարձնում է ցուցիչը դինամիկ հատկացված զանգվածին:
int* get_dynamic_array(int n){
	int* array = new int[n];
		if(array == nullptr){
			return nullptr;
		}
	
	return array;

	

}
int main(){
	int n;
	std::cout << "Print array size "<<std::endl;
	std::cin >> n;

	int* array = get_dynamic_array(n);
	
	if(array != nullptr){
		std::cout << "Print array elements "<<std::endl;
		
	for(int i = 0; i < n; ++i){
		std::cin >> array[i];
	}
	for(int i = 0; i < n; ++i){
	std::cout << array[i];
	}
	delete[] array;
	}
	return 0;
}

