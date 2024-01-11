#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

class Target {
public:
    string clientTarget;

    void inputTarget() {
        cout << "������� ���� ��������������: ";
        cin >> clientTarget;
    }
};

class Cargo {
public:
    string CargoInfo;

    void inputCargoInfo() {
        cout << "������� ����������� �����: ";
        cin >> CargoInfo;
    }
};

class Truck {
public:
    double Speed;
    double Volume;
    double Length;
    string Model;

    void inputTruckDetails() {
        cout << "������� �������� ���������: ";
        cin >> Speed;
        cout << "������� ����� ���������: ";
        cin >> Volume;
        cout << "������� ������ �����: ";
        cin >> Length;
        cout << "������� ������ ���������: ";
        cin >> Model;
    }
};

class DepartureCity {
public:
    string cityName;

    void inputDepartureCity() {
        cout << "������� ����� �����������: ";
        cin >> cityName;
    }
};

class DestinationCity {
public:
    string cityName;

    void inputDestinationCity() {
        cout << "������� ����� ��������: ";
        cin >> cityName;
    }
};

class DriverLevel {
public:
    int stars;

    void inputDriverLevel() {
        cout << "����� ������� �� �������������? (1-3 �����: �����, �������, ������): ";
        cin >> stars;
    }
};

class Client {
public:
    string clientName;

    void inputClient() {
        cout << "������� ���� ��� � �������: ";
        cin >> clientName;
    }
};

class Number {
public:
    string clientNumber;

    void inputNumber() {
        cout << "��� ����� ��������: ";
        cin >> clientNumber;
    }
};

class TruckNum {
public:
	int orderedTruck;
	
	 int inputTruckNum() {
    	orderedTruck = rand();
    	return orderedTruck;
    }
};

int main() {
	setlocale(LC_ALL, "Russian");
	
	Target target; // 1 �����
	target.inputTarget();
	
	Cargo cargo; // 2 �����
	cargo.inputCargoInfo();
	
    Truck myTruck; //3 �����
    myTruck.inputTruckDetails();

    DepartureCity departure; //4 �����
    departure.inputDepartureCity();

    DestinationCity destination; //5 �����
    destination.inputDestinationCity();

    DriverLevel driver; //6 �����
    driver.inputDriverLevel();
    
    Client client; //7 �����
    client.inputClient();
    
    Number number; //8 �����
    number.inputNumber();
    
    TruckNum num; //9 �����
    num.inputTruckNum();
    
    cout << num.inputTruckNum() << endl;
    cout << "��� ����� ������!" << endl;

    return 0;
}

