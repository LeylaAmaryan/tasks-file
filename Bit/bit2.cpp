#include<iostream>
//Իրականացնել ֆունկցիա,որը ստուգում է թիվը երկուսի աստիճան է թե ոչ։
int powerof_two(int num){
	if(num <= 0){
		return false;
	}
	return (num &(num - 1)) == 0;
}
int main(){
	int n ;
	std::cout << "Print  a number " << std::endl;
	std::cin >> n;
	if(powerof_two(n)){
		std::cout << "the number is power of two "<< std::endl;
	}else{
		std::cout << " The number is not power of two " << std::endl;
	}
	return 0;
}
