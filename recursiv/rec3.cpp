#include <iostream>
//Գրել Ֆիբոնաչիի n-րդ թիվը հաշվող ֆունկցիա ռեկուրսիվ և իտերատիվ տարբերակով։

/*int fib(int n){//recursiv
	if(n <= 2){
	return 1;
}
	return fib(n - 1) + fib(n - 2);
	

}
int main(){
	int x ;
	std::cout << "Print the fibonachi naumber "<<std::endl;
	std::cin >> x;
	std::cout << x << " fibonachi number is " << fib(x)<< std::endl;
}*/

int fib(int n){
	if(n <= 2){

		return n;
	}
	int a = 0;
	int b = 1;
		for(int i = 2; i <= n; ++i){
			int next = a + b;
			a = b;
			b = next;
		}
		return b;
}
int main(){
	std::cout << fib(6) << std::endl;
}

