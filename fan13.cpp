#include <iostream>
/*Ֆունկցիայի պրոտոտիպ:
char* my_strcpy(char *dest, const char *src);
Ֆունկցիայի նկարագրություն: my_strcpy ֆունկցիան պատճենում է src տողի բովանդակությունը dest տողի մեջ, ներառյալ '\0' նիշը, և վերադարձնում է dest հասցեն։*/

char* my_strcapy(char* dest, const char* src){
	char* pt = dest;
	while((*pt++ = *src++) != '\0');
	return dest;

}
int main(){
	const int size = 40;
	char str1[size];
	char str2[size];
	std::cout << "Print two strings "<<std::endl;
	std::cin.getline(str1, size);
	std::cin.getline(str2, size);
	my_strcapy(str1,str2);
	std::cout << "The result is " << str1 << std::endl;
}

