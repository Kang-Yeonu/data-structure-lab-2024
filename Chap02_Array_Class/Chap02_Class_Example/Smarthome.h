#pragma once
#include <iostream> // input output 쉽게 사용
#include <string> // 문자열
using namespace std; // std 라이브러리 namespace 선언

// SmartHome
class SmartHome {
private:
    // 멤버 변수들 (member variable, attribute, field) 시험 무적권 나옴
    string owner; // 문자열
    int temperature; //정수형
    int humidity;
    bool security; // true or false 불 형식
public:
    // 생성자 class와 이름이 같음, 매개변수가 있는 생성자
    SmartHome(string owner, int temperature, int humidity, bool security) {
        this->owner = owner;
        this->temperature = temperature;
        this->humidity = humidity;
        this->security = security;
    }
    
    //~SmartHome(string o, int t, int h, bool sec) 인수
        //: temperature(t), humidity(h), security(sec) {
        //strcpy(owner, o)
    //}
    // 소멸자
    // 멤버함수 (member functions, method)
    void setTemperature(int temperature) {
        this->temperature = temperature;
    }
    void setHumidity(int humidity) {
        this->humidity = humidity;
    }
    void setSecurity(bool security) {
        this->security = security;
    }
    // void 함수 : return 값 없어도 됨
    string getOwner() {//string 함수 입력 x, return o//
        return this->owner;
    }
    int getTemperature() {
        return this->temperature;
    }
    int getHumidity() {
        return this->humidity;
    }
    bool getSecurity() {
        return this->security;
    }
    void printStatus() {
        cout << ": 집주인" << this->owner << endl;
        cout << "온도: " << this->temperature << "도" << endl;
        cout << "습도: " << this->humidity << "%" << endl;
        if (this->security) {
            cout << " security on" << endl;
        }
        else {
            cout << "security off" << endl;
        }
    }
};