#pragma once
#include <iostream> // input output ���� ���
#include <string> // ���ڿ�
using namespace std; // std ���̺귯�� namespace ����

// SmartHome
class SmartHome {
private:
    // ��� ������ (member variable, attribute, field) ���� ������ ����
    string owner; // ���ڿ�
    int temperature; //������
    int humidity;
    bool security; // true or false �� ����
public:
    // ������ class�� �̸��� ����, �Ű������� �ִ� ������
    SmartHome(string owner, int temperature, int humidity, bool security) {
        this->owner = owner;
        this->temperature = temperature;
        this->humidity = humidity;
        this->security = security;
    }
    
    //~SmartHome(string o, int t, int h, bool sec) �μ�
        //: temperature(t), humidity(h), security(sec) {
        //strcpy(owner, o)
    //}
    // �Ҹ���
    // ����Լ� (member functions, method)
    void setTemperature(int temperature) {
        this->temperature = temperature;
    }
    void setHumidity(int humidity) {
        this->humidity = humidity;
    }
    void setSecurity(bool security) {
        this->security = security;
    }
    // void �Լ� : return �� ��� ��
    string getOwner() {//string �Լ� �Է� x, return o//
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
        cout << ": ������" << this->owner << endl;
        cout << "�µ�: " << this->temperature << "��" << endl;
        cout << "����: " << this->humidity << "%" << endl;
        if (this->security) {
            cout << " security on" << endl;
        }
        else {
            cout << "security off" << endl;
        }
    }
};