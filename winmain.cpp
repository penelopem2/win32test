#include <windows.h>
#include <iostream>

using namespace std;

class A{
	int test;
public:
	void sayHello(){
		cout << "Hello World" << endl;
	}
	/*4FC793D7927CF5D4B0B48DE78DBF4807B6F3CD86E866DACC0DCCC106BED10957CC60415F3BCF88CEB68082FAFDF32B019E582F57D35A8DA48443BB82DC
8AAA603359D1AF39415CEA83DD6A43D8DC7BFE2800A25A984FF228224174*/
};

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, int nCmdShow ){
	MessageBox(NULL, TEXT("Hello ACME World"), TEXT("Press OK"), MB_OK);
	A test;
	test.sayHello();
	char in;
	cin >> in;
	return 0;
}
