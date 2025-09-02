#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void func1() {
	vector<int> container;

	for (int i = 0; i < 10; ++i)
		container.push_back(i);
	vector<int>::iterator itr = min_element(container.begin(), container.end());
	cout << *itr << endl;
}

void func2() {
	vector<int> container;

	for (int i = 0; i < 10; ++i)
		container.push_back(i);
	vector<int>::iterator itr = max_element(container.begin(), container.end());
	cout << *itr << endl;
}

void func3() {
	vector<int> container;

	for (int i = 0; i < 10; ++i)
		container.push_back(i);
	vector<int>::iterator itr = find(container.begin(), container.end(), 3);
	cout << *itr << endl;
}
void func4() {
	vector<char> vec;
	vec.push_back('e');
	vec.push_back('b');
	vec.push_back('a');
	vec.push_back('d');
	vec.push_back('c');

	vector<char>::iterator it;
	for (it = vec.begin(); it != vec.end(); ++it)
		cout << *it;
	sort(vec.begin(), vec.end());
}

int main() {

}