#include <iostream>
/*Իրականացնել strcat() ֆունկցիային համարժեք ֆունկցիա

Ֆունկցիայի պրոտոտիպ:
char* my_strcat(char *dest, const char *src);
Ֆունկցիայի նկարագրություն: my_strcat ֆունկցիան կցում է (concatenate) src տողը dest տողի վերջում և վերադարձնում է dest հասցեն։*/

char* my_strcat(char* dest, const char* src){
	char* ptr = dest;
	while(*ptr != '\0'){
		ptr++;
	}

	while(*src != '\0'){
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return dest;

}
int main(){
	const int size = 40;
	char str1[size];
	char str2[size];
	std::cout <<"Print first string "<< std::endl;
	std::cin.getline(str1, size);
	std::cout << "Print the second string "<<std::endl;
	std::cin.getline(str2, size);
	char* resalt = my_strcat(str1, str2);
	std::cout << "Concetanetion of two strings is " << resalt <<std::endl;
	

}

