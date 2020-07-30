/*
두들낙서의 C/C++ 54강(클래스=구조체?) 예제1
*/

#include <iostream>

using namespace std;

// 접근제어지시자: private, protected, public

struct TV {
private:	// struct: 접근제어지시자를 명시하지 않으면 디폴트는 public
	bool powerOn;
	int channel;
	int volume;

public:
	void on() {
		powerOn = true;
		cout << "TV를 켰습니다." << endl;
	}

	void off() {
		powerOn = false;
		cout << "TV를 껐습니다." << endl;
	}

	void setChannel(int cnl) {
		if (cnl >= 1 && cnl <= 999) {
			channel = cnl;
			cout << "채널을 " << cnl << "(으)로 바꿨습니다." << endl;
		}
	}

	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			cout << "볼륨을 " << vol << "(으)로 바꿨습니다." << endl;
		}
	}
};

class TV_2 {
	// class: 접근제어지시자를 명시하지 않으면 디폴트는 private
	bool powerOn;
	int channel;
	int volume;

public:
	void on() {
		powerOn = true;
		cout << "TV_2를 켰습니다." << endl;
	}

	void off() {
		powerOn = false;
		cout << "TV_2를 껐습니다." << endl;
	}

	void setChannel(int cnl) {
		if (cnl >= 1 && cnl <= 999) {
			channel = cnl;
			cout << "채널을 " << cnl << "(으)로 바꿨습니다." << endl;
		}
	}

	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			cout << "볼륨을 " << vol << "(으)로 바꿨습니다." << endl;
		}
	}
};

int main() {
	cout << ">> TV" << endl;
	TV lg;
	lg.on();
	lg.setChannel(10);
	lg.setVolume(50);
	lg.setVolume(-73);	// if문 내부 실행되지 않음.
	cout << ">> TV2" << endl;
	TV_2 lg_2;
	lg_2.on();
	lg_2.setChannel(10);
	lg_2.setVolume(50);
	lg_2.setVolume(-73);	// if문 내부 실행되지 않음.
}

/*---------실행결과---------
>> TV
TV를 켰습니다.
채널을 10(으)로 바꿨습니다.
볼륨을 50(으)로 바꿨습니다.
>> TV2
TV_2를 켰습니다.
채널을 10(으)로 바꿨습니다.
볼륨을 50(으)로 바꿨습니다.
*/