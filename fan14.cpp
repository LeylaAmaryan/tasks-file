#include <iostream>

/*char* my_strstr(const char *haystack, const char *needle);

Ֆունկցիայի նկարագրություն: my_strstr ֆունկցիան գտնում է առաջին հանդիպող ենթատողը (substring) needle-ը haystack տողի մեջ և վերադարձնում է այդ ենթատողի առաջին նիշի հասցեն, կամ NULL, եթե ենթատողը չի գտնվել։*/
char* my_strstr(const char* haystack, const char* needle){
	if(! haystack || !needle){
		return nullptr;
	}
	if(*needle == '\0'){
		return (char*)haystack;
	}
	for(const char* hptr = haystack; *hptr !='\0'; hptr++){
		bool found = true;
		int i = 0;
		for(; *(needle + i) != '\0' ; i++ ){
			if(*(hptr + i) != *(needle + i)){
				found = false;
				break;
			}
		}
		if(found){
			return(char*) hptr;
		}
	}
	return nullptr;
	 }
int main(){
	const int size = 100;
	char st1[size];
	char st2[size];

	std::cout <<"Print two  strings "<<std::endl;
	std::cin.getline(st1, size);
	std::cin.getline(st2, size);
	char* res = my_strstr(st1, st2);

	if(res){
		std::cout << "the substring is " << (res - st1) << std::endl; 
	}else{
		std::cout <<"Not substring is found "<<std::endl;
	}
}

