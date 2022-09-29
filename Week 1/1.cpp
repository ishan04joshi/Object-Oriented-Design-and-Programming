#include <iostream>
using namespace std;
int main(){
    int choice,a,b;
    cout<<"MENU 1. Add 2. Subtract 3. Multiply 4. Divide 5. Modulus"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    cout<<"Enter your two numbers: ";
    cin>>a >>b;
    switch(choice){
        case 1:
         cout<<"Result : "<<a+b;
         break;
        case 2: 
            cout<<"Result : "<<a-b;
            break;
        case 3: 
            cout<<"Result : "<<a*b;
            break;
        case 4: 
            cout<<"Result : "<<a/b;
            break;
        case 5: 
            cout<<"Result : "<<a%b;
            break;
        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
    }
    return 0;
}