#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

class Target {
public:
    string clientTarget;

    void inputTarget() {
        cout << "Введите цель грузоперевозки: ";
        cin >> clientTarget;
    }
};

class Cargo {
public:
    string CargoInfo;

    void inputCargoInfo() {
        cout << "Введите особенности груза: ";
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
        cout << "Введите скорость грузовика: ";
        cin >> Speed;
        cout << "Введите объем грузовика: ";
        cin >> Volume;
        cout << "Введите длинну груза: ";
        cin >> Length;
        cout << "Введите модель грузовика: ";
        cin >> Model;
    }
};

class DepartureCity {
public:
    string cityName;

    void inputDepartureCity() {
        cout << "Введите город отправления: ";
        cin >> cityName;
    }
};

class DestinationCity {
public:
    string cityName;

    void inputDestinationCity() {
        cout << "Введите город доставки: ";
        cin >> cityName;
    }
};

class DriverLevel {
public:
    int stars;

    void inputDriverLevel() {
        cout << "Какой уровень вы предпочитаете? (1-3 звезд: Старт, Комфорт, Бизнес): ";
        cin >> stars;
    }
};

class Client {
public:
    string clientName;

    void inputClient() {
        cout << "Введите ваше Имя и Фамилию: ";
        cin >> clientName;
    }
};

class Number {
public:
    string clientNumber;

    void inputNumber() {
        cout << "Ваш номер телефона: ";
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
	
	Target target; // 1 класс
	target.inputTarget();
	
	Cargo cargo; // 2 класс
	cargo.inputCargoInfo();
	
    Truck myTruck; //3 класс
    myTruck.inputTruckDetails();

    DepartureCity departure; //4 класс
    departure.inputDepartureCity();

    DestinationCity destination; //5 класс
    destination.inputDestinationCity();

    DriverLevel driver; //6 класс
    driver.inputDriverLevel();
    
    Client client; //7 класс
    client.inputClient();
    
    Number number; //8 класс
    number.inputNumber();
    
    TruckNum num; //9 класс
    num.inputTruckNum();
    
    cout << num.inputTruckNum() << endl;
    cout << "Ваш заказ принят!" << endl;

    return 0;
}

