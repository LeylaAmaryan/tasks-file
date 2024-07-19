#include <iostream>
//Իրականացնել ռեկուրսիվ ֆունկցիա, որը ստանում է N թիվ և տպում էկրանին այդ թվի երկուական համակարգում ներկայացումը։
void binary(int num){
	if(num > 1)
		binary(num / 2);
	std::cout << num % 2;

}

int main(){
	int a = 0; 
	std::cout << "Print a number "<<std::endl;
	std::cin >> a;
	 binary(a);
}
