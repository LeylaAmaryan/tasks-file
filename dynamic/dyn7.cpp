#include <iostream>
//Dynamic Array of Primes
//Write a C++ function get_primes_array that takes an integer n as input, dynamically allocates an array of integers of size n, calculates the first n prime numbers, fills the array with these prime numbers, and returns a pointer to the dynamically allocated array.
bool is_prime(int num){
	if(num <= 1) 
		return false;
	if(num % 2 == 0)
		return false;
	if(num == 2)
		return true;
	
	for(int i = 3; i * i <= num; i +=2){
		if(num % i == 0)
			return false;
		}
		return true;
	
}
int* get_primes_array(int n){
	int* arr = new int[n];
		int count = 0; 
		int num = 2;
		while(count < n){
			if(is_prime(num)){
				arr[count] = num;
				count++;

			}
		num++;
		}
		return arr;
}

int main(){
	 int  n;
	 std::cout << "how meny  prime numbers you wont  " << std::endl;
	 std::cin >> n;
	 int* arr = get_primes_array(n);
	 
	 std::cout << " first " << n << " Prime numbers are " << std::endl;
	 for(int i = 0; i < n; ++i){
		 std::cout << arr[i] << " ";
	 }
	 delete[] arr;
return 0;

}

