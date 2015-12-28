#include <windows.h>
#include <iostream>

using namespace std;

class A{
	int test;
public:
	void sayHello(){
		cout << "Hello World" << endl;
	}
	/*F94721CC5F8BB84E3B7A1A4D2CDEF69ACD27FE19B6ACE8BE6A701023503AD31316C67793*/
};

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, int nCmdShow ){
	MessageBox(NULL, TEXT("Hello ACME World"), TEXT("Press OK"), MB_OK);
	A test;
	test.sayHello();
	char in;
	cin >> in;
	return 0;
}
