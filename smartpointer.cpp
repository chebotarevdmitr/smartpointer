#include <iostream>
#include <memory>

using namespace std;

class MyClass
{
public:
	MyClass() {
		cout << "constructor invoked" << endl;
	}
	~MyClass() {
		cout << "destructor invoked" << endl;
	}

};

int main()
{

	/*unique_ptr<int>unPtr1 = make_unique<int>(25);
	//1comit cout << unPtr1 << endl;
	//1comit cout << *unPtr1 << endl;
	unique_ptr<int>unPtr2 = move(unPtr1);
	cout << *unPtr2 << endl;
	*/
	 
	unique_ptr<MyClass>unPtr1 = make_unique<MyClass>();


	system("pause>0");
	return 0;
}
