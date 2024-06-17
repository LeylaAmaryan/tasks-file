#include <iostream>
int main(){
	int num;//task 1
	std::cout << "Enter the  number"<< std::endl;
	std::cin >> num;
	int sqrt = num * num;
	std::cout << "The square of your nuber is " << sqrt << std::endl;

	int age;//task 2
	std::cout << "Pleas enter your age " << std::endl;
	std::cin >> age;
	int year = 2024 - age;
	std::cout << "Your date of birth is " <<  year << std::endl;

	int x;//task 3
	 std::cout << "enter a value for x " << std::endl;
	 std::cin >> x;
	 int value = (x * x + (x - 34) / 5) % 2;
	 std::cout << "The value is " << value << std::endl;

	 int num1;//task 4
	 int num2;
	 std::cout << "Print two numbers " << std::endl;
	 std::cin >> num1;
	 std::cin >> num2;
	 int avg = (num1 + num2) / 2;
	 std::cout << "Your arithmetic average is " << avg << std::endl;

	 int number1;//task 5
	std::cout << "Pleas enter a number"<< std::endl;
	std::cin >> number1;
	if((number1 % 2) == 0){
		std::cout << "Yes" << std::endl;
	} else{
		std::cout << "No"<< std::endl;
	}

	int k ;//task 6
	std::cout << "Print some number" << std::endl;
	std::cin >> k;
	if(k > 0){
		std::cout << "the number is a positive  "<< std::endl;
	}else{
		std::cout << "the number is negativ  "<< std::endl;
	}

	int tiv = 11 ;// task 7
	if((tiv % 5) == 0){
		std::cout << "Yes"<<std::endl;
	} else{
		std::cout << "No"<< std::endl;
	}

	 int integer = 25;//task 8
	if((integer % 5) == 0){
		std::cout << "A" <<std::endl;
	}else if((integer % 7) == 0){
		std::cout << "B" << std::endl;
	}else{
		std::cout << "C"<< std::endl;
	}
	


}
