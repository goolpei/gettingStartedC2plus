#include <iostream>
#include <string>

class SmartPhone {

public:

    std::string Brand;
    std::string Model;
    
    
    SmartPhone(){
        Brand = "Unknown";
        Model = "Unknown";
    }
    SmartPhone(std::string brand, std::string model){
        Brand = brand;
        Model = model;
    }
    void powerOn(){
        std::cout << "Booting up " << Brand << " " << Model << "..." << std::endl;
        std::cout << "System ready!" << std::endl;
    }

    void displaySpecs(){
        std::cout << "--- Phone Specs ---" << std::endl;
        std::cout << "Brand: " << Brand << std::endl;
        std::cout << "Model: " << Model << std::endl;
    }
};

int main(){
    SmartPhone myPhone;

    myPhone.Brand = "Nebula";
    myPhone.Model = "X-200";

    myPhone.powerOn();
    myPhone.displaySpecs();

    return 0;
}