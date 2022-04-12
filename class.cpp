#include <iostream>
using namespace std;

class Cat {
public:
    void cat_speek() {
        cout << "??~~" <<endl;
    }
};

class Dog {
public:
    void dog_speek() {
        cout << "??~~" <<endl;
    }

};

class Zoo {
private:
    Cat cat;
    Dog dog;
public:
    void speek(){
        cat.cat_speek();
        dog.dog_speek();
    }
};