#include <iostream>
using namespace std;

class Student {
public:
	char name[30];
	int ban;
	int no;
	int kor;
	int eng;
	int math;

	int getTotal(int a, int b, int c) {
		int total = kor + eng + math;
		return total;
	}
	float getAverage(int a, int b, int c) {
		float ave = (kor + eng + math) / 3;
		return ave;
	}
};

int main() {
	/*Student stu1;
	cout << "ö���� ����, ����, ���� ���� : ";
	cin >> stu1.kor >> stu1.eng >> stu1.math;

	cout << "���� - " << stu1.getTotal(stu1.kor, stu1.eng, stu1.math) << endl;
	cout << "��� - " << stu1.getAverage(stu1.kor, stu1.eng, stu1.math) << endl;

	Student stu2;
	cout << "������ ����, ����, ���� ���� : ";
	cin >> stu2.kor >> stu2.eng >> stu2.math;

	cout << "���� - " << stu2.getTotal(stu2.kor, stu2.eng, stu2.math) << endl;
	cout << "��� - " << stu2.getAverage(stu2.kor, stu2.eng, stu2.math) << endl;*/

	Student arr[5];
	float ave = 0;

	for (int i = 0; i < 5; i++) {
		cout << "�̸��� ��, ��, �� ������ �Է��ϼ���." << endl;
		cin >> arr[i].name >> arr[i].kor >> arr[i].eng >> arr[i].math;
	}
	for (int i = 0; i < 5; i++) {
		ave += arr[i].getAverage(arr[i].kor, arr[i].eng, arr[i].math);
	}
	cout << "��ü ��� : " << ave / 5;
	 
}