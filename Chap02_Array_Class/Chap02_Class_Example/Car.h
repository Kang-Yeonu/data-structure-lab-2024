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
	Car(int s, const char* n, int g) // �Ű������� �ִ� ������
		: speed(s), gear(g) {  // ������� �ʱ�ȭ
		strcpy_s(name, n); //������ �Լ� ��ü
	}
	void changeGear(int g = 4) {   //��� �Լ� inline ����
		gear = g;
	}
	void speedUp() {
		speed += 5;
	}
	void display() {
		printf("[%s] : ���=%d�� �ӵ�=%dkmph\n", name, gear, speed); //��� ����
	}
	void whereAmI() {
		printf("��ü �ּ�=%x\n", this);
	}

	};