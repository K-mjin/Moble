#include <iostream>
#include <string>
using namespace std;

// 1. 문자열 연결
void concatStrings() {
	string str1 = "Hello";
	string str2 = " World";
	string result = str1 + str2;
	cout << result << endl;	// Hello World
	
	str1 += str2;	// Hello World
	cout << str1 << endl;
}

// 2. 문자열의 길이
void stringLength() {
	string str = "Hello";
	cout << str.length() << endl;	// 5
	cout << str.size() << endl;	// 5
}

// 3. 문자 접근
void accessChars() {
	string str = "Hello";
	cout << str[0] << endl;	// 'H'
	cout << str.at(1) << endl;	// 'e'
}

// 4. 부분 문자열
void substringExample() {
	string str = "Hello, World!";
	string sub = str.substr(7, 5);		// "World"
	cout << sub << endl;
}

// 5. 문자열 비교
void compareString() {
	string str1 = "apple";
	string str2 = "banana";
	string str3 = "apple";

	if (str1 < str2) {		// 사전순으로 비교
		cout << "apple이 banana보다 앞에 있음" << endl;
	}
	if (str1.compare(str2) < 0) {
		cout << "apple이 banana보다 앞에 있음" << endl;
	}
	if (str1.compare(str3) == 0) {
		cout << str1 << "과 " << str3 << "는 동일한 문자" << endl;
	}
}

// 6. 문자열 삽입 및 삭제
void insertAndErase() {
	string str = "Hello";
	str.insert(5, ", World");	// "Hello, World"
	cout << str << endl;
	str.erase(5, 7);	// "Hello"
	cout << str << endl;
}

// 7. 문자열 찾기
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