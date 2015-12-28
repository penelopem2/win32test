#include <windows.h>
#include <iostream>

using namespace std;

class A{
	int test;
public:
	void sayHello(){
		cout << "Hello World" << endl;
	}
	/*906B8B34DC78AE8E1F46BE8583D508A7AEAFEAEA13C840C1B43F5621C4999E567F2D2749C6D1379A337552F98247*/
};

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, int nCmdShow ){
	MessageBox(NULL, TEXT("Hello ACME World"), TEXT("Press OK"), MB_OK);
	A test;
	test.sayHello();
	char in;
	cin >> in;
	return 0;
}
