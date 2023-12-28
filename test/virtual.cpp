#include <iostream>

class Instrument
{
    public:
        virtual void Sound()
        {
            std::cout << "None" << std::endl;
        }
};

class Baglama : public Instrument {
    public:
        void Sound()
        {
            std::cout << "Baglama playing ..." << std::endl;
        }
};

class Zurna : public Instrument {
    public:
        void Sound()
        {
            std::cout << "Zurna playing ..." << std::endl;
        }
};


int main()
{
    Instrument *oo = new Instrument();
    Instrument *o1 = new Baglama();
    Instrument *o2 = new Zurna();

    oo->Sound();
    o1->Sound();
    o2->Sound();
}