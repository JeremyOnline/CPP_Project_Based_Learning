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

    for (int height = 1; height <= 4*input; height++){
        

        for(int spasi_1 = 1; spasi_1 <= space; spasi_1++){
            cout << " ";
            if(spasi_1 = input){
                cout << "*";
            }
        }
        for(int column = 1; column <= input; column++){
            cout << column;
        }
        cout << endl;  
    }
    

}