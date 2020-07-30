/*
�ε鳫���� C/C++ 59��(�������-2) ����1
*/

#include <iostream>

using namespace std;

// 0~1 float R G B

class Color {
public:
	Color() : r(0), g(0), b(0), id(idCounter++) { }
	Color(float r, float g, float b) : r(r), g(g), b(b), id(idCounter++) { }

	float getR() { return r; }
	float getG() { return g; }
	float getB() { return b; }
	int getId() { return id; }

	// �Ű������� ���� �� Color��ü�� rgb�� ���� ��ճ��� ���� �� Color ��ü�� ��ȯ�ϴ� �޼���
	static Color MixColors(Color a, Color b) {	// ���� �޼���
		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
	}

	static int idCounter;	// ��ü�� �ƴ϶� Ŭ������ ���õǾ� �ִ� ���� ����

private:
	float r;
	float g;
	float b;

	int id;
};

int Color::idCounter = 1;	// ���� ������ ����� ���� �и�

int main() {
	Color blue(0, 0, 1);
	Color red(1, 0, 0);

	Color purple = Color::MixColors(blue, red);	// ���� �޼ҵ� ȣ��

	cout << "r = " << purple.getR() << ", g = " << purple.getG() << ", b = " << purple.getB() << endl;

	cout << "blue.getId() = " << blue.getId() << endl;
	cout << "red.getId() = " << red.getId() << endl;
	cout << "purple.getId() = " << purple.getId() << endl;
}

/*-----������-----
r = 0.5, g = 0, b = 0.5
blue.getId() = 1
red.getId() = 2
purple.getId() = 3
*/