#include <iostream>
//Գրել void set(int n, int i) ֆունկցիան, որը տրված n թվի i-րդ բիթը կդարձնի 1։
void set(int &n, int i){

	n |= 1 << i;
	


}
int main(){
	int n;
	int i ;
	std::cout << " Print a number "<<std::endl;
	std::cin >> n;
	std::cout << " Print bit index to modyfie " << std::endl;
	std::cin >> i;
	set(n, i);
	std::cout << n;


}
