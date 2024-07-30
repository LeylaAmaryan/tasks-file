#include <iostream>
//Գրել void reset(int n, int i), որը տրված n թվի i-րդ բիթը կդարձնի 0։
void reset(int &n , int i){

	n &= ~(1 << i);
}
int main(){
	int n;
	std::cout  << " Print a number "<< std::endl;
	std::cin >> n;
	int i;
	std::cout << "Print the index you wont modyfie " << std::endl;
	std::cin >> i;

	reset(n, i);

	std::cout << n <<std::endl;

}
