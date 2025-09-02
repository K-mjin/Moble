#include <iostream>
using namespace std;

class Member {
private:
	char name[30];
	char phone[30];
	int MontlyFee;
	int id;

public:
	Member(const char* name, const char* phone, int id) {
		strcpy(this->name, name);
		strcpy(this->phone, phone);
		this->id = id;
	}
	/*void setFee(int MontlyFee) {
		this->MontlyFee = MontlyFee;
	}*/
	void showMamberShip() {
		cout << name << ", " << phone <<  endl;
	}
};

class SwimMember : public Member {
public:
	char swimId[30];
	SwimMember(const char* name, const char* phone, int id) : Member(name, phone, id) {
		char swim_id[30];
		itoa(id, swim_id, 10);
		strcpy(this->swimId, "swim_");
		strcat(swimId, swim_id);
	}
	void showMamberShip() {
		cout << swimId << ", ";
		Member::showMamberShip();
	}
	void swim() {
		cout << "������ �մϴ�." << endl;
	}
};

class GolfMember : public Member {
public:
	char golfId[30];
	GolfMember(const char* name, const char* phone, int id) : Member(name, phone, id) {
		char golf_id[30];
		itoa(id, golf_id, 10);
		strcpy(this->golfId, "golf_");
		strcat(golfId, golf_id);
	}
	void showMamberShip() {
		cout << golfId << ", ";
		Member::showMamberShip();
	}
	void golf() {
		cout << "������ �մϴ�." << endl;
	}
};

void AddMember() {
	SwimMember s1("�����", "010-8227-8650", 1);
	s1.showMamberShip();
	s1.swim();

	GolfMember g1("�����", "010-2222-2222", 1);
	g1.showMamberShip();
	g1.golf();
}

int main() {
	AddMember();
}