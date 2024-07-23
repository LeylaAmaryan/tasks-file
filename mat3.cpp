#include <iostream>
//Գրել ծրագիր, որը կգտնի NxM (N քանակությամբ տող և M քանակությամբ սյուն) չափանի մատրիցի մեծագույն արժեքը և կտպի էկրանին։
int maxMatrix(int matrix[][100], int n, int m){
	int max = matrix[0][0];
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
	if(matrix[i][j] > max){
		max = matrix[i][j];
	}
	}
	}
	return max;
}
int main(){
	int n;
	int m;
	std::cout << "print matrix row  size"<<std::endl;
	std::cin >> n;
	std::cout << "print matrix column size "<<std::endl;
	std::cin >> m;
	int matrix[100][100];
	std::cout <<"Print matrix elements for row and colum "<<std::endl;
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < m; ++j){
			std::cin >> matrix[i][j];
		}
	int max = maxMatrix(matrix, n, m);
	std::cout <<"Maximum element is "<< max << std::endl;
}


