#include <iostream>
//Իրականացնել ռեկուրսիվ ֆունկցիա, որը հաշվում է երկու թվերի ամենամեծ ընդհանուր բաժանարարը։ 
int gcd(int a, int b){
	if(b == 0)
		return a;
	return gcd(b, a % b);

}
int main(){
	int  num;
	int num1;
	std::cout << "Print two numbers " <<std::endl;
	std::cin >> num;
	std::cin >> num1;
	
	 
	std::cout << gcd(num, num1)  << " is the greatest common divisor"<<std::endl;
}
