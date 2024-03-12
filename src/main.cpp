#include <iostream>

int main (){
    std::cout << "blabla" << std::endl;

    return 0;
}


class Second {
    void printClassName() {
        std::cout << "second class" << std::endl;
    }
}
class fooClass {
public:
    // getters
    int getNumber(){
        return number;
    }
  // foo class
    private:
        int number = 1;
};
