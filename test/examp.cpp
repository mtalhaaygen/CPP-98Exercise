#include <iostream>
using namespace std;

//* class type-casting
// class CDummy {
//     float i,j;
// };

// class CAddition {
// 	int x,y;
//   public:
// 	CAddition (int a, int b) { x=a; y=b; }
// 	int result() { return x+y;}
// };

// int main () {
//   CDummy d;
//   CAddition * padd;
//   padd = (CAddition*) &d;
//   cout << padd->result();
//   return 0;
// }

//* abstrac class
class Silah
{
protected:
	int pro;
public:
	virtual void test() = 0;
	int *get_pro_ref() {
		return (&pro);
	}
	void display() {
		cout << "PRO : " << pro << endl;
	}
	Silah(/* args */) {};
	~Silah() {};
};

class Tufek : public Silah
{
private:
	int gizli;
public:
	int a;
	void test(){
		cout << "deneme" << endl;
	};
	int *get_ref() {
		return (&gizli);
	}
	int get_private() {
		return (gizli);
	}
};


int main()
{
	//* Absctrac sınıflardan nesne oluşturulamaz
	// Silah s1;

	Tufek t1;

	cout << t1.get_private() << endl; // değer atanmadan rastgele değeri gösterdik
	cout << t1.get_ref() << endl; // adresini gösterir

	*(t1.get_ref()) = 1453; // private değişkeni değiştirdik

	cout << t1.get_private() << endl; // değer atayıp yeni değeri gösterdik

	*(t1.get_pro_ref()) = 2024;
	t1.display();

}