#include<iostream>
//Շրջել թվի բիթերը(reverse), օրինակ՝ 11110000 -> 00001111։
int reverse(int n){
	int res = 0;
	for(int i = 0; i < 32; ++i){
		res <<= 1;
		if(n & 1) res++;
		n >>= 1;
		
	
	}
	return res;
}
int main(){
	int n ;
	std::cout << "Print the number to reverse ";
	std::cin >> n;
	int result = reverse(n);
	std::cout << " Reverse number is " << result;
}

