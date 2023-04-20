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

	/*
	{
		shared_ptr<MyClass>shPtr1 = make_shared <MyClass>();
		cout << "Shared count:" << shPtr1.use_count() << endl;
		// та же ячейка памяти shPtr1
		{
			shared_ptr<MyClass>shPtr2 = shPtr1;
			cout << "Shared count:" << shPtr1.use_count() << endl;
		}
		cout << "Shared count:" << shPtr1.use_count() << endl;
	}
	*/

	weak_ptr<int>wePtr1;
	{
		shared_ptr<int>shPtr1 = make_shared<int>(25);

	}

	 

	system("pause>0");
	return 0;
}
