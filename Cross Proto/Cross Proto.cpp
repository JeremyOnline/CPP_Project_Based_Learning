#include <iostream>

using namespace std;

int main(){
    int input;
    cout << "Enter the number of elements: ";
    cin >> input;
    int space;
    int space_2;
    space = input;
    cout << "Spasi : " << &space << endl;
    cout << "input : " << &input << endl;
    
    
    /*
       ***
       ***
       ***
    *********
    *********
       ***
       ***
       ***
       ***
       ***
       ***
    */

    // Atas
    for (int height = 1; height <= input; height++){
        

        for(int spasi_1 = 1; spasi_1 <= space; spasi_1++){
            cout << " ";
        }
        for(int column = 1; column <= input; column++){
            cout << column;
        }
        
        cout << endl;  
    }

    // Tengah
    for (int height = 1; height <= input - 1; height++){
        for(int column = 1; column <= input*3; column++){
            cout << column;
        }
        cout << endl;
    }
    
    // Bawah
    for (int height = 1; height <= input*2; height++){
        

        for(int spasi_1 = 1; spasi_1 <= space; spasi_1++){
            cout << " ";
        }
        for(int column = 1; column <= input; column++){
            cout << column;
        }
        
        cout << endl;  
    }


}

// 28/07/2025
/*
Input harus 2-3
*/