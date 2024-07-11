#include <iostream>
/*Իրականացնել strchr() ֆունկցիային համարժեք ֆունկցիա

Ֆունկցիայի պրոտոտիպ:
char* my_strchr(const char *str, int c);
Ֆունկցիայի նկարագրություն: my_strchr ֆունկցիան փնտրում է առաջին հանդիպող նշված նիշը (character) փոխանցված տողի մեջ և վերադարձնում է այդ նիշի հասցեն (pointer), կամ NULL, եթե նիշը չի գտնվել։*/
char* my_strchr(const char* str, int c){
	while(*str != '\0'){
		if(*str == c){
		return (char*)str;
		}
		str++;
		
	}
	return NULL;

}
int main(){
	char c = 0;
	std::cout <<"Print the character "<< std::endl;
	std::cin >> c;
	std::cin.ignore();//makrum enk buferum mnacac \n;
	const int size = 30;
	char str [size];
	std::cout <<"Print a string " << std::endl;
	std::cin.getline(str, size);

	char* res = my_strchr(str, c);
	if(res){
		std::cout <<"character " <<  c  << " is found in position "<< (res-str) << std::endl;
	}else{
		std::cout << "Character "<< c << " Not found "<<std::endl;
	}
}
