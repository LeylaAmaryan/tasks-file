#include<iostream>
//Իրականացնել ֆակտորիալի հաշվարկումը ռեկուրսիվ և իտերատիվ տարբերակով։
/*int fact(int n){//recursiv
	if(n > 1){
		return n * fact(n - 1);
	}
	return 1;
}

int main(){
	std::cout << fact(5) << std::endl; 
}*/






int factor(int n){
	int fact = 1;
	for(int i = 1; i <= n; ++i){
	
		 fact *= i;
	}
	return fact;

}

int main(){
	int x = 6;
	std::cout << factor(x) <<std::endl;
}
