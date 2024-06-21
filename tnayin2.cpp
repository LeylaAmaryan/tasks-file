#include <iostream>
int main(){
	int num1;// task 1
	int num2;
	char  op;
	std::cout << "Enter two  numbers"<< std::endl;
	std::cin >> num1;
	std::cin >> num2;
	std::cout << "Enter an operand" << std::endl;
	std::cin >> op;
if(op == '+'){
	int sum = num1 + num2;
	std::cout <<"The sum of two numbers is " << sum << std::endl;
		}else if(op == '-'){
		int sub = num1 - num2;
		std::cout << "the subtraction of two  number is " << sub << std::endl;
		
		}else if(op == '*'){
			int mul = num1 * num2;
			std::cout << "multiplication of two numbers is " << mul << std::endl;
		
		}else if (op == '/'){
			if(num1 != 0 && num2 != 0 ){
			int div = num1 / num2;
			std::cout << "the division of two numbers is "<< div << std::endl;
			}else {
				std::cout << "Not valid number" << std::endl;
			
		}
		
		}

	
int  sum = 0; // task 2
for (int i = 1; i <= 100; ++i){
	sum += i;
}
	std::cout << "The sum of all numbers in the range 1-100 to the screen  is " << sum << std::endl;


int n ;// task 3
std::cout << "Pleas enter a number "<< std::endl;
std::cin >> n;
std::cout << "the square root from numbers 0 to 6  is "<< std::endl;
for(int i = 0; i <= n; ++i){
	int sqr = i * i;
	std::cout << sqr << std::endl; 
}


int arr[5] = {1,2,3,4,5};// task4
int mult = 1;
for(int i = 0; i < 5; ++i){
 mult = mult * arr[i];
}
 std::cout << "the multiplication  of the array elements is equal to " << mult << std::endl;


}

