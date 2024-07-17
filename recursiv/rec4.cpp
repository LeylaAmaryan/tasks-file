#include<iostream>
//Գրել ֆունկցիա, որը ստանում է զանգված եւ տպում է զանգվածի տարրերը էկրանին ռեկուրսիվ տարբերակով։
void foo(int arr[], size_t size, int index = 0){
	if(index == size)
	{
		return ;
	}
	std::cout << arr[index] << " ";
	 foo(arr, size, index + 1);
}

int main(){
	const int size = 10;
	int arr[size] = {1,2,3,4,5,6,7,8,9,10};
	foo(arr,size);
}
	
