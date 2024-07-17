#include <iostream>
//Գրել ֆունկցիա, որը հաշվում է տրված զանգվածում զույգ թվերի քանակը ռեկուրսիվ եղանակով։
int foo(int arr[], int size, int index = 0){
	if(index == size){
		return 0;
	}
	int count = (arr[index] % 2 == 0) ? 1:0;
		
	
	return count + foo (arr,size,index + 1);

}

int main(){
	const int size = 6;
	int arr[size] = {4,5,2,6,8,9};
	int even = foo(arr,size);
	std::cout << "the even elements are " << even << std::endl;
}

