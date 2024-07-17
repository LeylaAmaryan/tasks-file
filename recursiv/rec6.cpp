#include<iostream>
//Գրել ֆունկցիա, որը գտնում է տրված զանգվածի առավելագույն արժեքը ռեկուրսիվ եղանակով։
int my_max(int arr[], size_t size, int index = 0){
	
	if(index == size - 1 ){
	
		return  arr[index];
	}
	int max = my_max(arr, size, index + 1);
	if(arr[index] > max){
		return arr[index];
	}else{
		return max;
	}

}

int main(){
	const int size = 10;
	int arr[size] = {1,2,3,4,5,6,7,8,9,0};
	int max = my_max(arr,size);
	std::cout << " Maximum element is "<< max << std::endl;
}
