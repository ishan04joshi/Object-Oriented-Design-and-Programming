#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
	string person_name;
	int age;
	void printname();
	void printage()
	{
		cout << "Age is: "<< age;
	}
};
void Person::printname()
{
	cout << "Person's name is: " << person_name;
}
int main() {
	Person per;
	per.person_name = "Alexendra";
	per.age = 34;
	per.printname();
	cout << endl;
	per.printage();
	return 0;
}