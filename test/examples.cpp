#include <iostream>
#include <string>

using namespace std;

namespace talha {
    int power = 9999;

    void selam() {
        cout << "ESSALAMU SELAMUN ALEYKÜM VE RAHMETULLAH" << endl;
    }
}

class Alive
{

public:
    int life_cycle;
    void breathe() {
        cout << "sUUUuuHuumm" << endl;
        cout << life_cycle << endl;
    }
    Alive(/* args */) {};
    ~Alive() {};
};


class Animal : public Alive
{
// protected: 
//     int pro_variable = 345;
private:
    /* data */
public:
    virtual void Sound() = 0;
    void tester(int life_cycle) {
        this->life_cycle = 0;
        cout << "bu cycle set edilmedi =>" << life_cycle << endl;
    }
    Animal(/* args */) {
        tester(11);
    };
    ~Animal() {}
};

class Dog: public Animal {
    public:
        void KorkutmaSesi() {
            cout << "qqqq sdsfdgfdssdfds qqqqq" << endl;
        }
        void Sound() {
            cout << "HAVhavHIIIIRRRhav" << endl;
        }
};

class Cat: public Animal {
    public:
        void CiftlesmeSesi() {
            cout << "zzz dsfgdsadsfdgfd zzzz" << endl;
        }
        void Sound() {
            cout << "Miyavvvw miyav" << endl;
        }

};

int main()
{
    Alive o1;
    o1.life_cycle = 45;

    Alive *o1ptr = &o1;
    cout << o1ptr->life_cycle << endl;

    Dog dog;
    dog.life_cycle = 0;
    // ! UPCASTİNG
    Cat cat;
    Animal *a2 = &cat; // a2 animal sınıfından bir nesneye dönüşüyor artık Cat özelliklerine ulaşamıyoruz
    // ! UPCASTİNG
    Animal *a1 = new Cat(); // a1 animal sınıfından bir nesneye dönüşüyor artık Cat özelliklerine ulaşamıyoruz
    a1->life_cycle = 0;

    a1->breathe();
    a2->breathe();
    dog.breathe();
    dog.KorkutmaSesi();

    cout << talha::power << endl;
    talha::selam();

    string name;
}
