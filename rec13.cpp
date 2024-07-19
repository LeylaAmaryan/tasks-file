#include <iostream>
//Իրականացնել ռեկուրսիվ ֆունկցիա, որը ստանում է տող և վերադարձնում տողում առաջին հանդիպած մեծատառը։
char firstUppercase(char* str){
	if(*str  == '\0'){
		return '\0';
	}
	if(*str >= 'A' && *str <= 'Z'){
	return *str;
	}
	return firstUppercase(str + 1);

}

int main(){
	const char size = 100;
	char str[size];
	std::cout << " Print string "<<std::endl;
	std::cin.getline(str, size);
	char letter = firstUppercase(str);
	if(letter == '\0'){
	std::cout << " no Uppercase letter is found "  <<std::endl;
	}else{
		std::cout << " Uppercase letter is "<< letter << std::endl;
	}
}
