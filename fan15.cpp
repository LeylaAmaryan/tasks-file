#include <iostream>
//Ֆունկցիայի նկարագրություն: my_strcmp ֆունկցիան համեմատում է երկու տողերը լեքսիկոգրաֆիկորեն և վերադարձնում է բացասական արժեք, եթե str1-ը փոքր է, զրո, եթե հավասար են, և դրական, եթե մեծ է str2-ից
int my_strcmp(const char* str1, const char* str2){
	while (*str1  &&(*str1 == *str2)){
		str1++;
		str2++;
	}
	return *(unsigned char*)str1 - *(unsigned char*) str2;
	}
	
	int main(){
	const  int size = 100;
	char st1[size];
	char st2[size];

	std::cout <<"print two strings "<<std::endl;
	std::cin.getline(st1, size);
	std::cin.getline(st2, size);

	int res = my_strcmp(st1, st2);

       	if(res < 0){
		std::cout <<"Str1 is less than str2 "<< std::endl;
	}else if(res > 0){
		std::cout <<"str1 is greater than str 2 "<<std::endl;
	}else{
		std::cout <<"str1 is equal  to str2 "<<std::endl;
	}

	
}
