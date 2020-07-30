/*
두들낙서의 C/C++ 62강(연산자 오버로딩) 예제1
*/

// 벡터
// 멤버 메서드의 선언, 정의 분리하기

#include <iostream>

using namespace std;

class Vector2 {
public:
	Vector2();
	Vector2(float x, float y);

	float getX() const;
	float getY() const;

	Vector2 operator+(const Vector2 rhs) const;	// 벡터+벡터
	Vector2 operator-(const Vector2 rhs) const;	// 벡터-벡터
	Vector2 operator*(const float rhs) const;	// 벡터*실수
	Vector2 operator/(const float rhs) const;	// 벡터/실수
	float operator*(const Vector2 rhs) const;	// 벡터*벡터(내적. 결과값은 실수)

private:
	float x;
	float y;
};

Vector2 operator*(const float a, const Vector2 b) {	// 매개변수 2개인 연산자 오버로딩
	return Vector2(a * b.getX(), a * b.getY());
}


int main() {
	Vector2 a(2, 3);
	Vector2 b(-1, 4);
	Vector2 c1 = a - b;	// 연산자 오버로딩이 적용됨
	Vector2 c2 = a * 1.6;
	Vector2 c3 = 1.6 * a;
	float c4 = a * b;

	cout << a.getX() << ", " << a.getY() << endl;
	cout << b.getX() << ", " << b.getY() << endl;
	cout << c1.getX() << ", " << c1.getY() << endl;
	cout << c2.getX() << ", " << c2.getY() << endl;
	cout << c3.getX() << ", " << c3.getY() << endl;
	cout << c4 << endl;
}

Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}
float Vector2::getX() const { return x; };
float Vector2::getY() const { return y; };

Vector2 Vector2::operator+(const Vector2 rhs) const {	// 연산자 오버로딩
	return Vector2(x + rhs.x, y + rhs.y);
}
Vector2 Vector2::operator-(const Vector2 rhs) const {	// 연산자 오버로딩
	return Vector2(x - rhs.x, y - rhs.y);
}
Vector2 Vector2::operator*(const float rhs) const {	// 연산자 오버로딩
	return Vector2(x * rhs, y * rhs);
}
Vector2 Vector2::operator/(const float rhs) const {	// 연산자 오버로딩
	return Vector2(x / rhs, y / rhs);
}
float Vector2::operator*(const Vector2 rhs) const {	// 연산자 오버로딩
	return x * rhs.x + y * rhs.y;
} 

/*-----실행결과-----
2, 3
-1, 4
3, -1
3.2, 4.8
3.2, 4.8
10
*/