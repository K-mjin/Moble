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
	cout << "벡터 a : " << a.size() << endl;	// a의 원소가 4개이므로 사이즈는 4가 나옴
	for (int i = 0; i < a.size(); i++) {
		cout << "벡터 a의 원소 : " << a[i] << endl;
	}

	vector<string>b{ "I", "love", "you" };
	for (int i = 0; i < b.size(); i++)
		cout << "벡터 b의 원소 : " << b[i] << endl;

	vector<int> c(a.begin(), a.begin() + 3);
	for (int i = 0; i < c.size(); i++)
		cout << "벡터 c의 원소 : " << c[i] << endl;

	a.clear();
	cout << "벡터 a : " << a.size() << endl;

	vector<int> d = func();
	for (int i = 0; i < d.size(); i++)
		cout << "벡터 d의 원소 : " << d[i] << endl;
}