#include <iostream>
//Ֆունկցիայի նկարագրություն: my_isspace ֆունկցիան ստուգում է, արդյոք նիշը բացատային նիշ է (բացատ, տաբ, newline և այլն) և վերադարձնում է 1, եթե այո, կամ 0, եթե ոչ։
int my_isspace(char c){
if(c == '\n' || c == ' ' || c == '\t' || c =='\f' || c == '\r' || c == '\v'){
	return 1;
}
return 0;
}

int main(){
	char sym ;
	std::cout <<"enter  a  character "<<std::endl;
	std::cin.get(sym);
	 
	if(my_isspace(sym)){
		std::cout << "The character is a  whitespace character"<<std::endl;
	}else{
		std::cout << "The character is not a whitespace character "<<std::endl;
	}
}
