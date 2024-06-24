#include <iostream>
int main() {
    /*const int size = 10; // task6
    int arr[size];  
    int count = 0;
    std::cout << "print 10 numbers" << std::endl;
   for(int i = 0; i < size; ++i){
	   std::cin >> arr[i];

   }
	for (int i = arr[0]; i < size; ++i) {
        if (arr[i] < 14) {
            ++count;
        }
    }

    
    std::cout << "14 < numbers are " << count << std::endl;

    
	
	const int  size = 10;//task 7;
	int arr[size];
	int sum = 0;
	int count = 0;
	std::cout <<"Enter 10 numbers" << std::endl;
	for(int i = 0; i < size; ++i){
		std::cin >>arr [i];
		if(arr[i] > 0){
		sum += arr[i];
		++count;

			
		}
		
	}
		if(count > 0){
			double avg =static_cast<double>(sum)/count;
			std::cout <<"the arithmetic mean of positive numbers is " << avg <<std::endl;
		}else{
			std::cout << "Not positiv nambers is founds"<<std::endl;
		
		}
		
	const int size = 10;//task 8
	int arr[size];
	int count = 0;
	std::cout << "print 10 integers for the array" << std::endl;
	for(int i = 0; i < size; ++i){
		std::cin >> arr[i];
		if(arr[i] > 5 && arr[i] < 10){
			++count;
			
		}
	}
		if(count > 0){
	std::cout << "count of numbers wich are  greater than 5 and less than ten  is " << count << std::endl;
	}else{
		std::cout << "No number greater than 5 and less than ten was found" <<std::endl;

	}*/
	 
	/*const int size = 10;//task 9;
       int arr[size];
       
       std::cout <<"Print 10 integers"<<std::endl;
       for(int i = 0; i < size; ++i){
	       std::cin >> arr[i];
       }
	       
	       std::cout <<"Reverse array are " << std::endl;
	   
       
	      for(int i = size -1; i >= 0; --i){
			  std::cout << arr[i] << std::endl; 
		      }*/
	
		int arr[10];//task 10 
		int sum = 0;
		std::cout << "Print 10 numbers " << std::endl;
		for(int i = 0; i < 10; ++i){
			std::cin >> arr[i];
			}
		for(int i = 0; i < 10; i += 2){
			sum += arr[i];
		}
			std::cout << "sum of elements under even index is " << sum << std::endl;
		}

       



