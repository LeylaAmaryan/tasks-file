#include <iostream>
//Գրեք C++ ֆունկցիա resize_dynamic_array, որը ցուցիչ է վերցնում ամբողջ թվերի զանգվածին, դրա ընթացիկ չափը և նոր չափը որպես մուտքեր, դինամիկ կերպով հատկացնում է նշված նոր չափի նոր զանգված, պատճենում է տարրերը հին զանգվածից նոր զանգվածին: , և վերադարձնում է ցուցիչ դինամիկորեն հատկացված նոր զանգվածին:
int* resize_dynamic_array(int* old_array, int old_size, int new_size){
	int* new_array = new int(new_size);

	if(new_array == nullptr){
		return nullptr;
	}
	
	int copy_element = (old_size < new_size) ? old_size : new_size;
	
       	for(int i = 0; i < copy_element; ++i){
		 new_array[i] = old_array[i];
		 
	 }
	 for(int i = copy_element; i < new_size; ++i){
		 new_array[i] = 0;
	 }
	 delete[] old_array;

	 return new_array;


}
int main(){
	int old_size = 5;
	int* array = new int[5]{1,2,3,4,5};
	for(int i = 0; i < old_size; ++i){
		std::cout << array[i] << " ";
		
	}
	

	int new_size = 9;
	array = resize_dynamic_array(array, old_size, new_size);

	std::cout << "resize array ";
	for(int i = 0; i < new_size; ++i){
		std::cout << array[i] << " ";
	}
	delete[] array;

	return 0;
}
