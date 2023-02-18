#include <iostream>
#include <algorithm>
#include <vector>
#include "application.h"
#include "matrix.h"
#include "number.h"

using std::cin;
using std::cout;
int Application::exec(){
    bool is_exit=false;
    MatrixSquare matrix;
    while(!is_exit){
        menu();
        int num = input_number<int>();

        switch(num){
        case 1:{
            std::cout << "Enter size of matrix: \n";
            int size_matrix = input_number<int>();
            while(size_matrix <= 0){
               cout<<"numbers must be > than 0\n";
               size_matrix = input_number<int>();
            }
            std::vector<number> vector_of_matrix(size_matrix*size_matrix);
            for (int i = 0; i < size_matrix; ++i){
                for (int j = 0; j < size_matrix; ++j){
                    cout<<"Enter element matrix a["<<i<<"]["<<j<<"]:\n";
                    vector_of_matrix[i * size_matrix + j] = input_number<number>();
                }
            }
            matrix = MatrixSquare(size_matrix, vector_of_matrix);
            break;
        }
        case 2:
            cout << "Determinant matrix: " << matrix.determinant() << '\n';
            break;
        case 3:
            cout << "Transposed matrix:\n" << matrix.transposed();
            break;
        case 4:
            cout << "Rank matrix: " << matrix.rank() << '\n';
            break;
        case 5:
            cout << matrix;
            break;
        case 0:
            is_exit = true;
            break;
        default:
            cout << "numbers only between 0-5\n";
            break;
        }
    }
    return 0;
}


// input_number for diff types number
template <typename T>
T Application::input_number() {
    T number;
    while (1) {
        cin >> number;

        if (!cin) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "bad input, you must enter a string from numeric only\n";
        }
        else {
            break;
        }
    }
    return number;
}

void Application::menu(){
    cout << "Enter number instruction\n" ;
    cout << "1. input into matrix\n";
    cout << "2. get a determinant\n";
    cout << "3. get T matrix\n";
    cout << "4. get a rank of matrix\n";
    cout << "5. output matrix\n";
    cout << "0. exit\n";
}
