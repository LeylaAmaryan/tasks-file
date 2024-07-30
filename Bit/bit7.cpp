#include <iostream>
//Իրականացնել void flip(int n, int i) ֆունկցիա, որը տրված n թվի i-րդ բիթը  կշրջի, այսինքն 1-ը կդարձնի 0, 0-ն, 1:
void flip(int &n, int i){
	int mask = 1 << i;
	
	n = n ^ mask;
	

}
int main(){
	
	
	int n;
	std::cout << " Print the number " <<std::endl;
	std::cin >> n;
	int i ;
	std::cout << " Print the index to modyfie " << std::endl;
	std::cin >> i;

	flip(n, i);
	std::cout << n;

	
}

