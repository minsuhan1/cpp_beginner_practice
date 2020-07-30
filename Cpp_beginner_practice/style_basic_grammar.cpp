#include <iostream>

using namespace std;

int main() {
	int a(10);
	int b(a + 5);

	cout << "a = " << a << endl;	// a = 10
	cout << "b = " << b << endl;	// b = 15

	//------------------------------------------
	// 범위 기반 for문

	int arr[10] = { 3,1,4,1,5,9,2,6,5,3 };

	for (int n : arr) {
		cout << n << ' ';
	}
	cout << endl;

	for (int& n : arr) {
		n++;
	}

	for (int n : arr) {
		cout << n << ' ';
	}
	cout << endl;
	//--------------------------------------------
	// 범위 기반 for문을 사용하여 이차원 배열 출력
	int arr_d[2][3] = { {1,2,3}, {4,5,6} };

	for (int(&ln)[3] : arr_d) {
		for (int& col : ln) {
			cout << col << ' ';
		}
		cout << endl;
	}


}

/*-------실행결과-------
a = 10
b = 15
3 1 4 1 5 9 2 6 5 3
4 2 5 2 6 10 3 7 6 4
1 2 3
4 5 6 
*/