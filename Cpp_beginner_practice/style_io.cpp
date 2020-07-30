#include <iostream>
#include <string>

using namespace std;

int main() {
	string name;

	cout << "이름 입력 : ";
	cin >> name;

	string message = "안녕하세요, " + name + "님.";
	cout << message << endl;

}
/*-----실행결과------
이름 입력 : monologue96
안녕하세요, monologue96님.
*/