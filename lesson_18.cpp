#include <iostream>
#include <string>


// simple class example.
class Human {
private:
    int age;
    float growth;
    std::string name;
public:
    Human() {
        std::cout << "[Object was created!]" << std::endl;
    }

    void setName(std::string _name) {
        name = _name;
    }

    void setAge(int _age) {
        age = _age;
    }

    void setGrowth(float _growth) {
        growth = _growth;
    }

    void getInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Growth: " << growth << std::endl;
    }
};


int main() {
    Human manager;

    manager.setAge(24);
    manager.setGrowth(176.4f);
    manager.setName("Igor");

    manager.getInfo();
}