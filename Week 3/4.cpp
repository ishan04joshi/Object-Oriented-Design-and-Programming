#include <iostream>
#include <string>
using namespace std;
class Circle
{
public:
	float rad;
	void perimeter(){
        cout << "Perimeter is: "<< (2*3.14*rad) << "\n";
    }
	void area(){
		cout << "Area is: "<< (3.14*rad*rad);
	}
};

int main() {
	Circle cir;
    float r;
    cout << "Enter radius: ";
    cin >> r;
	cir.rad = r;
	cir.perimeter();
	cir.area();
	return 0;
}