#include <iostream>
#include<cstring>
using namespace std;

class Person {
	char* name;
	int age;

public:
	Person() {
		int len = strlen("이름 없음");
		name = new char[len + 1];
		strcpy(name, "이름 없음");
		age = 0;
	}
	Person(const char* myname, int myage) {
		int len = myage;
		this->name = new char[len + 1];
		strcpy(name, myname);
		this->age = myage;
	}
	~Person() {
		delete[] name;
	}
	void ShowPersonInfo() {
		cout << "이름 : " << name << " 나이 : " << age << endl;
	}
};
void testPerson() {
	Person p;
	p.ShowPersonInfo();

	Person p1("김미진", 23);
	p1.ShowPersonInfo();
}

int main(void) {
	testPerson();
}