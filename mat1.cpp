#include <iostream>
//Մուտքագրել քառակուսային մատրից և տպել էկրանին նրա տարրերը։
int main(){
int n = 3;
int matrix[n][n];
std::cout << "Print matrix elements "<<std::endl;
for(int i = 0; i < n; ++i)
for(int j = 0; j < n; ++j){
	std::cin >> matrix[i][j];
}
for(int i = 0; i < n; ++i)
for(int j = 0; j < n; ++j){
	std::cout << matrix[i][j] << " " ;
}


}
