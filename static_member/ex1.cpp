/*
두들낙서의 C/C++ 58강(정적멤버-1) 예제1
*/

#include <iostream>

using namespace std;

// 0~1 float R G B

class Color {
public:
	Color() : r(0), g(0), b(0) { }
	Color(float r, float g, float b) : r(r), g(g), b(b) { }

	float getR() { return r; }
	float getG() { return g; }
	float getB() { return b; }

	// 매개변수로 받은 두 Color객체의 rgb를 각각 평균내어 섞인 새 Color 객체를 반환하는 메서드
	static Color MixColors(Color a, Color b) {	// 정적 메서드
		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
	}
	
private:
	float r;
	float g;
	float b;
};


/*
int main() {
	Color blue(0, 0, 1);
	Color red(1, 0, 0);

	Color purple = Color::MixColors(blue, red);	// 정적 메소드 호출

	cout << "r = " << purple.getR() << ", g = " << purple.getG() << ", b = " << purple.getB();
}
*/
/*-----실행결과-----
r = 0.5, g = 0, b = 0.5
*/