#pragma once
#include <cstring>
class Car {
protected:
	int speed;
	char name[40];
public:
	int gear;
	Car() {}
	~Car() {}
	Car(int s, const char* n, int g) // 매개변수가 있는 생성자
		: speed(s), gear(g) {  // 멤버변수 초기화
		strcpy_s(name, n); //생성자 함수 몸체
	}
	void changeGear(int g = 4) {   //멤버 함수 inline 구성
		gear = g;
	}
	void speedUp() {
		speed += 5;
	}
	void display() {
		printf("[%s] : 기어=%d단 속도=%dkmph\n", name, gear, speed); //멤버 접근
	}
	void whereAmI() {
		printf("객체 주소=%x\n", this);
	}

	};