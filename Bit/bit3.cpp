#include<iostream>
//Տպել ստացված թվի երկուական համակարգի ներկայացումը։ Օգտագործելով բիթային գործողություններ։
void decimalToBinary(int num){
	if(num == 0){
		return ;
	}else{
		decimalToBinary(num / 2);
		std::cout<< num % 2 << std::endl;//last significand bit
	}
}
int main(){
	int num;
	std::cout << " Print the decimal number " << std::endl;
	std::cin >> num;
	decimalToBinary(num);
	return 0;
}

