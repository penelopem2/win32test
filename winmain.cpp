#include <windows.h>
#include <iostream>

using namespace std;

class A{
	int test;
public:
	void sayHello(){
		cout << "Hello World" << endl;
	}
	/*662E06A58761425AD32D640B54871C8025C9339837384F485CC94E4B2A4D1650C6F0*/
};

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, int nCmdShow ){
	MessageBox(NULL, TEXT("Hello ACME World"), TEXT("Press OK"), MB_OK);
	A test;
	test.sayHello();
	char in;
	cin >> in;
	return 0;
}
