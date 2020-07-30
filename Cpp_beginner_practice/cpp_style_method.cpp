#include <iostream>

// overload(다중정의)
void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}
void swap(double &a, double &b) {
	double tmp = a;
	a = b;
	b = tmp;
}
void swap(int* (&a), int* (&b)) {
	int *tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int a = 20, b = 30;
	double da = 2.222, db = 3.333;
	int *pa = &a, *pb = &b;

	swap(a, b);
	swap(da, db);
	swap(pa, pb);

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;

	std::cout << "da : " << da << std::endl;
	std::cout << "db : " << db << std::endl;

	std::cout << "*pa : " << *pa << std::endl;
	std::cout << "*pb : " << *pb << std::endl;
}
/*-------실행결과-------
a : 30
b : 20
da : 3.333
db : 2.222
*pa : 20
*pb : 30
*/