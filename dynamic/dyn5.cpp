#include<iostream>
//Concatenate Two Strings
/* Write a C++ function concat_dynamic_strings that takes two C-strings as input, dynamically allocates memory for a new C-string that concatenates the two input strings, and returns a pointer to the newly allocated concatenated string.*/

char* concat_dynamic_strings(char*  str1, char* str2, int size){
	int length1 = 0;
	while(str1[length1] != '\0'){
		length1++;
	}
	int length2 = 0;
	while(str2[length2] != '\0'){
		length2++;
	}
	int  newlength = length1 + length2 + 1;
	char* newStr = new char[newlength];
	for(int i = 0; i < length1; ++i){
		newStr[i] = str1[i];
	}
	for(int i = 0; i < length2; ++i){
		newStr[length1 + i] = str2[i];
	}
	newStr[newlength - 1] ='\0';
	return newStr;


}

int main(){
	 int size = 10;
	char str1[size];
	std::cout <<"Print first string "<< std::endl;
	std::cin.getline(str1, size);
       
	char str2[size];	
       std::cout << "Print second string "<< std::endl;
       std::cin.getline(str2,size);

       char* string = concat_dynamic_strings(str1, str2, size);
       std::cout << string << std::endl;
       
delete[] string;

return 0;
}
