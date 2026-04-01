#include <iostream>
#include <string>

class Vehicle{
private: // encapsulation
    std::string Brand;
    std::string Model;
    std::string YearReleased;
    std::string TopSpeed;
    std::string VehicleType;

public:

    // Destructor
    virtual ~Vehicle(){}
    
    // abstraction
    virtual void run() = 0;

    // getters and setters
    void setBrand(std::string brand){Brand = brand;}
    void setModel(std::string model){Model = model;}
    void setYearReleased(std::string yearReleased){YearReleased = yearReleased;}
    void setTopSpeed(std::string topSpeed){TopSpeed = topSpeed;}
    void setVehicleType(std::string vehicleType){VehicleType = vehicleType;}

    std::string getBrand(){return Brand;}
    std::string getModel(){return Model;}
    std::string getYearReleased(){return YearReleased;}
    std::string getTopSpeed(){return TopSpeed;}
    std::string getVehicleType(){return VehicleType;}

    // constructor
    Vehicle()
        : Brand("Unknown"), Model("Unknown"), YearReleased("Unknown"), TopSpeed("Unknown"), VehicleType("Unknown"){}

    Vehicle(std::string brand, std::string model, std::string yearRelease, std::string topSpeed) 
        : Brand(brand), Model(model), YearReleased(yearRelease), TopSpeed(topSpeed){}


    void getVehicleDescription(){
        std::cout << "Brand: " << getBrand() << std::endl;
        std::cout << "Model: " << getModel() << std::endl;
        std::cout << "Year Released: " << getYearReleased() << std::endl;
        std::cout << "Top Speed: " << getTopSpeed() << " KPH" << std::endl;
        std::cout << "Vehicle Type: " << getVehicleType() << std::endl;
    }

    
};

// inheritance
class Car : public Vehicle {
public:
    Car() : Vehicle(){};
    
    Car(std::string brand, std::string model, std::string yearRelease, std::string topSpeed) 
        :  Vehicle(brand, model, yearRelease, topSpeed){
            setVehicleType("Car");
        }

    void run() override {
        std::cout << getBrand() << " " << getVehicleType() << " has its engine started." << std::endl;
        std::cout << "Ready to bring an employee to work.";
    }
};

class Truck : public Vehicle {
public:
Truck() : Vehicle(){};

Truck(std::string brand, std::string model, std::string yearRelease, std::string topSpeed) 
    :  Vehicle(brand, model, yearRelease, topSpeed){
        setVehicleType("Truck");
    }

void run() override {
    std::cout << getBrand() << " " << getVehicleType() << " has its engine started." << std::endl;
    std::cout << "Ready to carry heavy load.";
}

};

class Motorcycle : public Vehicle {

public:
Motorcycle() : Vehicle(){};

Motorcycle(std::string brand, std::string model, std::string yearRelease, std::string topSpeed) 
    :  Vehicle(brand, model, yearRelease, topSpeed){
        setVehicleType("Motorcycle");
    }

void run() override {
    std::cout << getBrand() << " " << getVehicleType() << " has its engine started." << std::endl;
    std::cout << "Ready to go on a joyride.";
}

};


class Bus : public Vehicle {

public:
    Bus() : Vehicle(){};
    
    Bus(std::string brand, std::string model, std::string yearRelease, std::string topSpeed) 
        :  Vehicle(brand, model, yearRelease, topSpeed){
            setVehicleType("Bus");
        }

    void run() override {
        std::cout << getBrand() << " " << getVehicleType() << " has its engine started." << std::endl;
        std::cout << "Ready to bring people around the city.";
    }

};




int main(){

    Vehicle* garage[3];

    garage[0] = new Car("Toyota", "AE86", "1983", "180");
    garage[1] = new Truck("Isuzu", "Giga", "2015", "120");
    garage[2] = new Bus("Hino", "Grande", "2020", "100");

    for(int i = 0; i < 3; i++){
        std::cout << "\n---- Vehicle " << i + 1 << " ----" << std::endl;
        garage[i]->getVehicleDescription();
        garage[i]->run();
        std::cout << "\n";
    }

    for(int i = 0; i < 3; i++) delete garage[i];

    return 0;
}