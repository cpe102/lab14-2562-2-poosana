#include <iostream>
using namespace std;


int main(){
	//Write your code here.
	int a = 5;
	char b = 'A';
	char &c = b;
	int *x = &a;
	void *y = &b;
	void *z = &x;

	cout << "a : " <<a<<endl;
	cout << "b : " <<b<<endl;
	cout << "c : " <<c<<endl;
	cout << "d : " <<x<<endl;
	cout << "e : " <<y<<endl;
	cout << "f : " <<z<<endl;

	cout << "&a : " <<&a<<endl;
	cout << "&b : " <<&b<<endl;
	cout << "&c : " <<&c<<endl;
	cout << "&d : " <<&x<<endl;
	cout << "&e : " <<&y<<endl;
	cout << "&f : " <<&z<<endl;

	b = 'F';
	cout << "a : " <<a<<endl;
	cout << "b : " <<b<<endl;
	cout << "c : " <<c<<endl;
	cout << "x : " <<x<<endl;
	cout << "y : " <<y<<endl;
	cout << "z : " <<z<<endl;

	b='w';
	cout << "a : " <<a<<endl;
	cout << "b : " <<b<<endl;
	cout << "c : " <<c<<endl;
	cout << "x : " <<x<<endl;
	cout << "y : " <<y<<endl;
	cout << "z : " <<z<<endl;

	a=6;
	cout << "a : " <<a<<endl;
	cout << "b : " <<b<<endl;
	cout << "c : " <<c<<endl;
	cout << "x : " <<x<<endl;
	cout << "y : " <<y<<endl;
	cout << "z : " <<z<<endl;

	a=7;
	cout << "a : " <<a<<endl;
	cout << "b : " <<b<<endl;
	cout << "c : " <<c<<endl;
	cout << "x : " <<x<<endl;
	cout << "y : " <<y<<endl;
	cout << "z : " <<z<<endl;

	return 0;
}
