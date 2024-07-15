#include <iostream>


//Ֆունկցիայի նկարագրություն: my_isalnum ֆունկցիան ստուգում է, արդյոք նիշը տառ է կամ թիվ (ալֆաներային) և վերադարձնում է 1, եթե այո, կամ 0, եթե ոչ։
int my_isalnum(char c){
	if((c >= 'a' &&  c <= 'z') ||(c >= 'A' && c <= 'Z')){
		return 1;
	}else if (c >= '0' && c <= '9'){
		return 1;
	}
	return 0;
}
int main(){
	char sym ;
	std::cout << "Print number or letter " << std::endl;
	std::cin >> sym;
	
       	
	
	if(my_isalnum(sym)){
		std::cout <<"The symbol is alphanumeric." <<std::endl;
	}else {
		std::cout <<"The symbol is not alphanumeric."<< std::endl;
	}

}
