/*
�ε鳫���� C/C++ 62��(������ �����ε�) ����1
*/

// ����
// ��� �޼����� ����, ���� �и��ϱ�

#include <iostream>

using namespace std;

class Vector2 {
public:
	Vector2();
	Vector2(float x, float y);

	float getX() const;
	float getY() const;

	Vector2 operator+(const Vector2 rhs) const;	// ����+����
	Vector2 operator-(const Vector2 rhs) const;	// ����-����
	Vector2 operator*(const float rhs) const;	// ����*�Ǽ�
	Vector2 operator/(const float rhs) const;	// ����/�Ǽ�
	float operator*(const Vector2 rhs) const;	// ����*����(����. ������� �Ǽ�)

private:
	float x;
	float y;
};

Vector2 operator*(const float a, const Vector2 b) {	// �Ű����� 2���� ������ �����ε�
	return Vector2(a * b.getX(), a * b.getY());
}


int main() {
	Vector2 a(2, 3);
	Vector2 b(-1, 4);
	Vector2 c1 = a - b;	// ������ �����ε��� �����
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

Vector2 Vector2::operator+(const Vector2 rhs) const {	// ������ �����ε�
	return Vector2(x + rhs.x, y + rhs.y);
}
Vector2 Vector2::operator-(const Vector2 rhs) const {	// ������ �����ε�
	return Vector2(x - rhs.x, y - rhs.y);
}
Vector2 Vector2::operator*(const float rhs) const {	// ������ �����ε�
	return Vector2(x * rhs, y * rhs);
}
Vector2 Vector2::operator/(const float rhs) const {	// ������ �����ε�
	return Vector2(x / rhs, y / rhs);
}
float Vector2::operator*(const Vector2 rhs) const {	// ������ �����ε�
	return x * rhs.x + y * rhs.y;
} 

/*-----������-----
2, 3
-1, 4
3, -1
3.2, 4.8
3.2, 4.8
10
*/