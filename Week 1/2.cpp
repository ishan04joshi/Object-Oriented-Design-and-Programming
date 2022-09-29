#include <iostream>
using namespace std;
int main(){
    int i;
    for(i=1000;i<=2000;i++){
        if(i%5==0&&i%8==0){
            cout<<i<<" is divisible by 8 and is multiple of 5"<<endl;
        }
    }
    return 0;
}