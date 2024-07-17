#include<iostream>

//Գրել ֆունկցիա, որը որպես արգումենտ ստանում է num ամբողջ տիպի փոփոխականը եւ տպում է num-ից մինչեւ 0 արժեքները։ Ֆունկցիան իրականացնել ռեկուրսիվ և իտերատիվ տարբերակով։
/*void foo(int num){
	if(num < 0)
		return;
		std::cout << num << std::endl;
	foo(num - 1);
	
		}

int main(){
	
	 foo(10);
	
}*/


void foo1(int num1){
	for (int i = num1; i >= 0; --i)
		std::cout << i;
	
}
int main(){
	int c = 10;
	foo1(c);
}
