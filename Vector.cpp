#include<iostream>
#include<vector>
#include<string>
using namespace std;
//using namespace cv;

vector<int> func() {
	vector<int> v{ -10, -20 };
	return v;
}

int main(void) {
	vector<int> a;
	a.push_back(10);
	a.push_back(20);
	a.push_back(30);
	a.push_back(40);
	cout << "���� a : " << a.size() << endl;	// a�� ���Ұ� 4���̹Ƿ� ������� 4�� ����
	for (int i = 0; i < a.size(); i++) {
		cout << "���� a�� ���� : " << a[i] << endl;
	}

	vector<string>b{ "I", "love", "you" };
	for (int i = 0; i < b.size(); i++)
		cout << "���� b�� ���� : " << b[i] << endl;

	vector<int> c(a.begin(), a.begin() + 3);
	for (int i = 0; i < c.size(); i++)
		cout << "���� c�� ���� : " << c[i] << endl;

	a.clear();
	cout << "���� a : " << a.size() << endl;

	vector<int> d = func();
	for (int i = 0; i < d.size(); i++)
		cout << "���� d�� ���� : " << d[i] << endl;
}