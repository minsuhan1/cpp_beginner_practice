/*
두들낙서의 C/C++ 59강(정적멤버-2) 예제1
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

	// 매개변수로 받은 두 Color객체의 rgb를 각각 평균내어 섞인 새 Color 객체를 반환하는 메서드
	static Color MixColors(Color a, Color b) {	// 정적 메서드
		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
	}

	static int idCounter;	// 객체가 아니라 클래스에 관련되어 있는 정적 변수

private:
	float r;
	float g;
	float b;

	int id;
};

int Color::idCounter = 1;	// 정적 변수의 선언과 정의 분리

int main() {
	Color blue(0, 0, 1);
	Color red(1, 0, 0);

	Color purple = Color::MixColors(blue, red);	// 정적 메소드 호출

	cout << "r = " << purple.getR() << ", g = " << purple.getG() << ", b = " << purple.getB() << endl;

	cout << "blue.getId() = " << blue.getId() << endl;
	cout << "red.getId() = " << red.getId() << endl;
	cout << "purple.getId() = " << purple.getId() << endl;
}

/*-----실행결과-----
r = 0.5, g = 0, b = 0.5
blue.getId() = 1
red.getId() = 2
purple.getId() = 3
*/