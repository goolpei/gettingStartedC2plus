#include <iostream>
#include <string>

class SmartPhone {
private:
    std::string Brand;
    std::string Model;

public:

    void setBrand(std::string brand){Brand = brand;}
    void setModel(std::string model){Model = model;}

    std::string getBrand(){return Brand;}
    std::string getModel(){return Model;}
    
    SmartPhone(){
        Brand = "Unknown";
        Model = "Unknown";
    }
    SmartPhone(std::string brand, std::string model){
        Brand = brand;
        Model = model;
    }
    void powerOn(){
        std::cout << "Booting up " << getBrand() << " " << getModel() << "..." << std::endl;
        std::cout << "System ready!" << std::endl;
    }

    void displaySpecs(){
        std::cout << "--- Phone Specs ---" << std::endl;
        std::cout << "Brand: " << getBrand() << std::endl;
        std::cout << "Model: " << getModel() << std::endl;
    }
};

int main(){
    SmartPhone myPhone;

    myPhone.setBrand("Nebula");
    myPhone.setModel("X-200");

    myPhone.powerOn();
    myPhone.displaySpecs();

    return 0;
}