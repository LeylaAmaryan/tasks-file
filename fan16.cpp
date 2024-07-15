#include <iostream>

//Ֆունկցիայի նկարագրություն: my_toupper ֆունկցիան փոխակերպում է փոքրատառ նիշը մեծատառ, եթե դա կիրառելի է, և վերադարձնում է փոխակերպված նիշը։
char my_toupper(char c){
	
	if(c >= 'a' && c <= 'z'){
		return c - ('a' - 'A') ;
		}
	return c;
}


int main(){
	char x = 0;
	std::cout <<"Print small letter "<<std::endl;
	std::cin >> x;
	char  upper =my_toupper(x);

	std::cout << "Uppercase letter is " << upper << std::endl;
}

