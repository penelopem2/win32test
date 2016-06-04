#include <windows.h>
#include <iostream>

using namespace std;

class A{
	int test;
public:
	void sayHello(){
		cout << "Hello World" << endl;
	}
	/*ED093092A0C6C44AFB40213FDB1219911B352900A8DF7642457D534577321013D747EE357171473F503D34AFBA4A4812C333E1501284D71A64111A9321
4BBC34827DCD27A8610E347C8460D7B99AE622C06330ED38132C42AB91EA3A*/
};

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, int nCmdShow ){
	MessageBox(NULL, TEXT("Hello ACME World"), TEXT("Press OK"), MB_OK);
	A test;
	test.sayHello();
	char in;
	cin >> in;
	return 0;
}
