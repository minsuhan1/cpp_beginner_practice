/*
�ε鳫���� C/C++ 54��(Ŭ����=����ü?) ����1
*/

#include <iostream>

using namespace std;

// ��������������: private, protected, public

struct TV {
private:	// struct: �������������ڸ� ������� ������ ����Ʈ�� public
	bool powerOn;
	int channel;
	int volume;

public:
	void on() {
		powerOn = true;
		cout << "TV�� �׽��ϴ�." << endl;
	}

	void off() {
		powerOn = false;
		cout << "TV�� �����ϴ�." << endl;
	}

	void setChannel(int cnl) {
		if (cnl >= 1 && cnl <= 999) {
			channel = cnl;
			cout << "ä���� " << cnl << "(��)�� �ٲ���ϴ�." << endl;
		}
	}

	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			cout << "������ " << vol << "(��)�� �ٲ���ϴ�." << endl;
		}
	}
};

class TV_2 {
	// class: �������������ڸ� ������� ������ ����Ʈ�� private
	bool powerOn;
	int channel;
	int volume;

public:
	void on() {
		powerOn = true;
		cout << "TV_2�� �׽��ϴ�." << endl;
	}

	void off() {
		powerOn = false;
		cout << "TV_2�� �����ϴ�." << endl;
	}

	void setChannel(int cnl) {
		if (cnl >= 1 && cnl <= 999) {
			channel = cnl;
			cout << "ä���� " << cnl << "(��)�� �ٲ���ϴ�." << endl;
		}
	}

	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			cout << "������ " << vol << "(��)�� �ٲ���ϴ�." << endl;
		}
	}
};

int main() {
	cout << ">> TV" << endl;
	TV lg;
	lg.on();
	lg.setChannel(10);
	lg.setVolume(50);
	lg.setVolume(-73);	// if�� ���� ������� ����.
	cout << ">> TV2" << endl;
	TV_2 lg_2;
	lg_2.on();
	lg_2.setChannel(10);
	lg_2.setVolume(50);
	lg_2.setVolume(-73);	// if�� ���� ������� ����.
}

/*---------������---------
>> TV
TV�� �׽��ϴ�.
ä���� 10(��)�� �ٲ���ϴ�.
������ 50(��)�� �ٲ���ϴ�.
>> TV2
TV_2�� �׽��ϴ�.
ä���� 10(��)�� �ٲ���ϴ�.
������ 50(��)�� �ٲ���ϴ�.
*/