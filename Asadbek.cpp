#include <iostream>
#include <string>

using namespace std;

class Truck {
public:
    string Volume;
    string Model;

    void inputTruckDetails() {
        cout << "Введите объем грузовика(в тоннах): ";
        cin >> Volume;
        cout << "Введите модель грузовика: ";
        cin >> Model;
    }
};

class DepartureCity {
public:
    string cityName;

    void inputDepartureCity() {
        cout << "Город отправления: ";
        cin >> cityName;
    }
};

class DestinationCity {
public:
    string cityName;

    void inputDestinationCity() {
        cout << "Город доставки: ";
        cin >> cityName;
    }
};

class Bookingtime {
public:
	string time;
	void inputBookingtime(){
		cout<< "Введите время забранировки: ";
		cin>>time;
	}
};

class DriverLevel {
public:
    string stars;
    void inputDriverLevel() {
        cout << "Какой уровень вы предпочитаете? (Старт, Комфорт, Бизнес): ";
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

class HomeAdress{
public:
	string HomeAdress;
	
	void inputHomeAdress(){
		cout << "Введите адрес своего дома: ";
		cin >> HomeAdress;
	}
};


class Emailadress {
public:
	string email;
	void inputEmailadress(){
		cout<<"Введите свою електронную почту"<<endl;
		cin>>email;
	}	
};

class TimeofArrival{
public:
	string Arrival;
	void inputtimeofArrival(){
		cout<<"Введите время прибытия: "<<endl;
		cin>>Arrival;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
    Truck myTruck;
    myTruck.inputTruckDetails();

    DepartureCity departure;
    departure.inputDepartureCity();

    DestinationCity destination;
    destination.inputDestinationCity();

    DriverLevel driver;
    driver.inputDriverLevel();
    
    Client client;
    client.inputClient();
    
    Number number;
    number.inputNumber();
    
    HomeAdress Home;
    Home.inputHomeAdress();
    
    Emailadress adress;
    adress.inputEmailadress();
    
    TimeofArrival Time;
    Time.inputtimeofArrival();
    
    cout << "Ваш заказ принят!" << endl;

    return 0;
    
}




