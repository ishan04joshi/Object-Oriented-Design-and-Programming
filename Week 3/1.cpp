#include <iostream>
#include <string>
using namespace std;

class student {
public:
    string name;
    int roll_no;
};

int main() {
    student st1;

    st1.name = "tim";
    st1.roll_no = 2;

    cout << "Name: " << st1.name << endl;
    cout << "roll_no: " << st1.roll_no << endl;
}