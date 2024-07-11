#include <iostream>
/*Իրականացնել strlen() ֆունկցիային համարժեք ֆունկցիա
Ֆունկցիայի պրոտոտիպ:
ունկցիայի նկարագրություն: my_strlen ֆունկցիան հաշվում է և վերադարձնում է փոխանցված տողում (string) գտնվող նիշերի քանակը՝ բացառելով վերջակետային '\0' նիշը։*/

int my_strlen(const char *str);
int my_strlen(const char* str){
	int count = 0;
	while(*str != '\0'){
		
		count++;
		str++;
	}
return  count;

}
int main(){
	const int size = 30;
	char str[size];
	std::cout <<"Print a string "<<std::endl;
	std::cin.getline(str, size);
	std::cout << my_strlen(str);
}


