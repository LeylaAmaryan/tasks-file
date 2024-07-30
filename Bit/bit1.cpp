#include<iostream>
//Իրականացնել ֆունկցիա, որը ստանում է թիվ և վերադարձնում է 1,եթե թիվը զույգ է։
//Տրված թվի երկուական համակարգի ներկայացման մեջ հաշվել 1-երի քանակը։


int number(int num){
	int count = 0;
	if((num % 2) == 0) {
		std::cout << 1 << "The number is even " << std::endl;
	}else{
		std::cout << 0 << "Number is odd " << std::endl;
	}
	while(num > 0){
		if(num % 2 == 1){
			count++;
		}
		num/= 2;
	}
	return count;

}
int main(){
	int n ;
	std::cout << "Print a number "<<std::endl;
	std::cin >> n;
	int count = number(n);
	std::cout <<" 1  number occurs " << count <<  " in binary " << std::endl;
}
