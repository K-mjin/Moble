#include <iostream>
using namespace std;

class Member {
private:
	char gender[5];
	char name[30];
	char phone[30];

public:
	Member(const char* gender, const char* name, const char* phone) {
		strcpy(this->gender, gender);
		strcpy(this->name, name);
		strcpy(this->phone, phone);
	}
	char* GetInfoStr() {
		char member[100];
		strcat(member, gender);
		strcat(member, name);
		strcat(member, phone);
		return member;
	}
};

class Student : public Member {
public:
	char major[50];
	Student(const char* gender, const char* name, const char* phone, const char* major) : Member(gender, name, phone) {
		strcpy(this->major, major);
	}
	char* GetInfoStr() {
		char member[100];
		strcat(member, major);
		Member::GetInfoStr();
	}
};

class Professor : public Member {
public:
	char subject[50];
	int career;
	Professor(const char* gender, const char* name, const char* phone, const char* subject, int career) : Member(gender, name, phone) {
		strcpy(this->subject, subject);
		char c[50];
		itoa(career, c, 10);
		
	}
};