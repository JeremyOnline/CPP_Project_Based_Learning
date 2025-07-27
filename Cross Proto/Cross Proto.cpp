#include <iostream>

using namespace std;

int main(){
    int input;
    cout << "Enter the number of elements: ";
    cin >> input;
    int space;
    int space_2;
    space = input;
    space_2 = 2 * input;
    cout << "Spasi : " << &space << endl;
    cout << "input : " << &input << endl;
    cout << "Spasi 2 : " << &space_2 << endl;
    
    
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

    for (int height = 1; height <= 4*input; height++){
        if (height <= space)
        {
            for(int spasi_1 = 1; spasi_1 <= space; spasi_1++){
                cout << " ";
            }
            for(int column = 1; column <= space; column++){
                cout << "*";
            }
        }
        // if(height <= space_2){
        //     for(int spasi_2 = 1; spasi_2 <= space; spasi_2++){
        //         cout << "*";
        //     }
        // }
        cout << endl;  
    }
    

}