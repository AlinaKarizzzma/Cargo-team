#include <iostream>
#include <string>

using namespace std;

class Truck {
public:
    string Volume;
    string Model;

    void inputTruckDetails() {
        cout << "������� ����� ���������(� ������): ";
        cin >> Volume;
        cout << "������� ������ ���������: ";
        cin >> Model;
    }
};

class DepartureCity {
public:
    string cityName;

    void inputDepartureCity() {
        cout << "����� �����������: ";
        cin >> cityName;
    }
};

class DestinationCity {
public:
    string cityName;

    void inputDestinationCity() {
        cout << "����� ��������: ";
        cin >> cityName;
    }
};

class Bookingtime {
public:
	string time;
	void inputBookingtime(){
		cout<< "������� ����� ������������: ";
		cin>>time;
	}
};

class DriverLevel {
public:
    string stars;
    void inputDriverLevel() {
        cout << "����� ������� �� �������������? (�����, �������, ������): ";
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

class HomeAdress{
public:
	string HomeAdress;
	
	void inputHomeAdress(){
		cout << "������� ����� ������ ����: ";
		cin >> HomeAdress;
	}
};


class Emailadress {
public:
	string email;
	void inputEmailadress(){
		cout<<"������� ���� ����������� �����"<<endl;
		cin>>email;
	}	
};

class TimeofArrival{
public:
	string Arrival;
	void inputtimeofArrival(){
		cout<<"������� ����� ��������: "<<endl;
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
    
    cout << "��� ����� ������!" << endl;

    return 0;
    
}




