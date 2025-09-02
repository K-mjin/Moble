#include <iostream>
using namespace std;

class Student {
protected:
	char name[30];
	int id;

public:
	Student(const char* name, int id) : id(id) {
		strcpy(this->name, name);
	}

	virtual void show_info() = 0;
};

class Student_Java : Student {
public:
	Student_Java(const char* name, int id) : Student(name, id) {
	}
	/*void show_info() {
		cout << name << ", " << id << " : 자바 기반 수업" << endl;
	}*/
};

class Student_C : Student {
public:
	Student_C(const char* name, int id) : Student(name, id) {
	}
	void show_info() {
		cout << name << ", " << id << " : C/C++ 수업" << endl;
	}
};

int main() {
	Student* pS = (Student*) new Student_C("제니퍼", 1);
	pS->show_info();

	Student* pS1 = (Student*) new Student_Java("김미진", 2);
	pS1->show_info();
}