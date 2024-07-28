#include <iostream>
//Գրեք C++ ֆունկցիան get_dynamic_2d_array, որը վերցնում է երկու ամբողջ թվով տողեր և սյունակներ որպես մուտքեր, դինամիկ կերպով հատկացնում է 2D զանգված (մատրիցան) ամբողջ թվերի նշված թվով տողերով և սյունակներով, սկզբնավորում է զանգվածը օգտագործողի կողմից մուտքագրված արժեքներով և վերադարձնում է ցուցիչը: դինամիկ տեղաբաշխված 2D զանգված:
int** get_dynamic_2d_array(int row, int column) {
    int** array = new int*[row];

    for (int i = 0; i < row; ++i) {
        array[i] = new int[column];
        for (int j = 0; j < column; ++j) {
            std::cout << "Enter element [" << i << "][" << j << "]: ";
            std::cin >> array[i][j];
        }
    }
    return array;
}
int main() {
    int row;
    std::cout << "Print row size: ";
    std::cin >> row;
    int column;
    std::cout << "Print column size: ";
    std::cin >> column;

    int** array = get_dynamic_2d_array(row, column);

    std::cout << "The array is:" << std::endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < row; ++i) {
        delete[] array[i];
    }
    delete[] array;
}
