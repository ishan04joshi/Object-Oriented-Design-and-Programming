#include <iostream>
using namespace std;
class AddDistance {
    private:
        int feet;
        int inch;
    public:
        void setDistance();
        void getDistance();
        AddDistance addDistance( AddDistance d );
};
void AddDistance::setDistance() {
    cout << " feet: "; cin >> feet;
    cout << "inches: "; cin >> inch;
}
void AddDistance::getDistance() {
    cout << "feet: " << feet;
    cout << " inches: " << inch;
} 
AddDistance AddDistance::addDistance( AddDistance d ) {
    AddDistance dist;
    dist.feet = feet + d.feet;
    dist.inch = inch + d.inch;

    if(dist.inch >= 12) {
        dist.feet++;
        dist.inch -= 12;        
    }
    return dist;    
}
int main() {
    AddDistance d1, d2, d3;
    cout << "Enter length of Distance 1: " << endl;
    d1.setDistance();
    cout << "Enter length of Distance 2: " << endl;
    d2.setDistance();
    d3 = d1.addDistance(d2);
    cout << "Sum of Distance 1 and Distance 2:" << endl;
    d3.getDistance();
    return 0;
}