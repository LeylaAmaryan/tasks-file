#include <iostream>
//Ստուգել թվի 1 արժեքով բիթերի քանակը կենտ է, թե զույգ
bool  bit_count(int num){
	int count = 0;
	while(num > 0){
		count += num & 1;
	num >>= 1;
	}
	return count % 2 == 0;
	

}
int main(){
	int num;
	std::cout <<" Print the number " <<std::endl;
	std::cin >> num;

	if(bit_count(num)){
		std::cout << " count of 1  in  bit is even "<<std::endl;
	}else{
		std::cout << " count of 1 in bit is  odd " << std::endl;
		}
}
