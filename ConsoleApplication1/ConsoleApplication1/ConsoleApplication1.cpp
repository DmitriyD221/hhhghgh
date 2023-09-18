#include <iostream>
using namespace std;

class Human {
public:
    double height = 1.8; // meters
    int arms_count = 2;
    string hair_color = "brown";
    string name = "Jacob";
    string skin_color = "white";

    void EatSomething() {
        cout << "Hotdog?\n";
    }
    void Car() {
        cout << "You set in your car.\n";
    }
    void Awake() {
        cout << "You are awake now.\n";
    }
    void GrabYourPhone() {
        cout << "You turned on the phone.\n";
    }
    void DrinkSomething() {
        cout << "Water?\n";
    }
};

class Room {
public:
    double ceilingsHeight = 3.5; // meters
    int seats_count = 5;
    int windows_count = 1;
    string walls_color = "white";
    string room_type = "kitchen";

    void Furniture1() {
        cout << "Oven\n";
    }
    void Socket() {
        cout << "You can charge something here.\n";
    }
    void Furniture3() {
        cout << "Wooden Chairs\n";
    }
    void Furniture4() {
        cout << "Shelves\n";
    }
    void Furniture5() {
        cout << "Washing Machine\n";
    }
};

class Phone {
public:
    int memory = 256; // megabytes
    double phone_height = 5.78; // inches
    double phone_width = 2.81; // inches
    string phone_color = "matte_black";
    string phone_brand = "iphone";

    void Recharging() {
        cout << "You put the phone on charge.\n";
    }
    void Chatting() {
        cout << "You started chatting with your friend.\n";
    }
    void Discharge() {
        cout << "Your battery percentage is low, it needs recharging.\n";
    }
    void FriendsCall() {
        cout << "Your friend called you and suggested going for a walk.\n";
    }
    void PhoneApp4() {
        cout << "Calendar\n";
    }
};

class Car {
public:
    int car_price = 25000; // dollars
    int wheels_count = 4;
    double car_length = 4.8; // meters
    string car_color = "white";
    string car_type = "coupe";

    void StartTheEngine() {
        cout << "You started your car's engine.\n";
    }
    void Road() {
        cout << "You drove onto the road and reached the forest where your friend had invited you.\n";
    }
    void TyresSeason() {
        cout << "Summer\n";
    }
    void CarAccidents() {
        cout << "None\n";
    }
    void CarBrand() {
        cout << "Chevrolet\n";
    }
};

class Forest {
public:
    double trees_count = 6.2; // millions
    int mountains_count = 2;
    double forest_size = 65.2; // sq. kilometers
    string forest_season = "fall";
    string region = "Appalachia"; // region in the US

    void LookAround() {
        cout << "You see a pretty big forest with high old trees.\n";
    }
    void Walk() {
        cout << "You are walking with your friend.\n";
    }
    void BestSeasonToVisit() {
        cout << "Fall\n";
    }
    void AppalachiaRegionPopulation() {
        cout << "26.3 million people\n";
    }
    void AppalachiaRegionSize() {
        cout << "1.909 million square kilometers\n";
    }
};

int main()
{
    Human h;
    Room r;
    Phone p;
    Car c;
    Forest f;

    h.Awake();
    h.GrabYourPhone();
    p.Chatting();
    p.Discharge();
    r.Socket();
    p.Recharging();
    p.FriendsCall();
    h.Car();
    c.StartTheEngine();
    c.Road();
    f.LookAround();
    f.Walk();

}
