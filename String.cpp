#include <iostream>
#include <string>
using namespace std;

// 1. ���ڿ� ����
void concatStrings() {
	string str1 = "Hello";
	string str2 = " World";
	string result = str1 + str2;
	cout << result << endl;	// Hello World
	
	str1 += str2;	// Hello World
	cout << str1 << endl;
}

// 2. ���ڿ��� ����
void stringLength() {
	string str = "Hello";
	cout << str.length() << endl;	// 5
	cout << str.size() << endl;	// 5
}

// 3. ���� ����
void accessChars() {
	string str = "Hello";
	cout << str[0] << endl;	// 'H'
	cout << str.at(1) << endl;	// 'e'
}

// 4. �κ� ���ڿ�
void substringExample() {
	string str = "Hello, World!";
	string sub = str.substr(7, 5);		// "World"
	cout << sub << endl;
}

// 5. ���ڿ� ��
void compareString() {
	string str1 = "apple";
	string str2 = "banana";
	string str3 = "apple";

	if (str1 < str2) {		// ���������� ��
		cout << "apple�� banana���� �տ� ����" << endl;
	}
	if (str1.compare(str2) < 0) {
		cout << "apple�� banana���� �տ� ����" << endl;
	}
	if (str1.compare(str3) == 0) {
		cout << str1 << "�� " << str3 << "�� ������ ����" << endl;
	}
}

// 6. ���ڿ� ���� �� ����
void insertAndErase() {
	string str = "Hello";
	str.insert(5, ", World");	// "Hello, World"
	cout << str << endl;
	str.erase(5, 7);	// "Hello"
	cout << str << endl;
}

// 7. ���ڿ� ã��
void findString() {
	string str = "Hello, Hello!";
	int pos = str.find("Hello");
	cout << pos << endl;
}

int main() {
	concatStrings();
	stringLength();
	accessChars();
	substringExample();
	compareString();
	insertAndErase();
	findString();
	return 0;
}