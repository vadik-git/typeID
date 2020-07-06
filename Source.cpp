#include<iostream>
#include"Grangpa.h"
#include<vector>
using namespace std;


void function(Grangpa&my_a) {
	vector<Daddy*> daddy(10);
    try {
		Daddy my_b = dynamic_cast<Daddy&>(my_a);
		my_b.Sleep();
		my_b.Walk();
	}
	catch (bad_cast&ex) {
		cout << ex.what() << endl;
		cout << "This object not object class Daddy" << endl;
	}
	
}
void funcTypeId(Grangpa*a) {
	try {
		if (typeid(*a) == typeid(Daddy)) {
			static_cast<Daddy*>(a)->Sleep();
			static_cast<Daddy*>(a)->Walk();
		}
	}
	catch (bad_cast&ex) {
		cout << ex.what() << endl;
		cout << "This object not object class Daddy" << endl;
	}

}
int main() {

	Daddy d;
	Grangpa a;
	function(a);
	function(d);
	funcTypeId(&d);
	funcTypeId(&a);

	system("pause");
	return 0;
}