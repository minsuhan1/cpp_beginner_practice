/*
두들낙서의 C/C++ 61강(멤버 메서드 활용하기) 예제1
*/

// 벡터
// 멤버 메서드의 선언, 정의 분리하기

#include <iostream>

using namespace std;
/*
class Vector2 {
public:
	Vector2();
	Vector2(float x, float y);

	float getX() const;
	float getY() const;

	static Vector2 Sum(Vector2 a, Vector2 b) {	
		// 정적(클래스에 소속 - 어떤 벡터에 더하는지 매개변수로 설정해야 함)

		return Vector2(a.x + b.x, a.y + b.y);
	}

	Vector2 Add(Vector2 rhs) {	// 동적(특정 객체에 소속)
		return Vector2(x + rhs.x, y + rhs.y);
	}

private:
	float x;
	float y;
};

int main() {
	Vector2 a(2, 3);
	Vector2 b(-1, 4);
	Vector2 c1 = Vector2::Sum(a, b);
	Vector2 c2 = a.Add(b);

	cout << a.getX() << ", " << a.getY() << endl;
	cout << b.getX() << ", " << b.getY() << endl;
	cout << c1.getX() << ", " << c1.getY() << endl;
	cout << c2.getX() << ", " << c2.getY() << endl;
}

Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}
float Vector2::getX() const { return x; };
float Vector2::getY() const { return y; };
*/
/*-----실행결과-----
2, 3
-1, 4
1, 7
1, 7
*/