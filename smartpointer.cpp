#include <iostream>
#include <memory>

using namespace std;

int main()
{
	unique_ptr<int>unPtr1 = make_unique<int>(25);
	//cout << unPtr1 << endl;
	//cout << *unPtr1 << endl;
	unique_ptr<int>unPtr2 = move(unPtr1);

	system("pause>0");
	return 0;
}
