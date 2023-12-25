#include <iostream>
#include <iomanip>      // std::setprecision
#include <stdint.h>
#include <string.h>

// int topla(int a, int b);
// int topla(int ...);
// double topla(double ...);

// int ust_al(double a, double b = 1)
// {
// 	double sonuc = 1;
// 	while (b > 0)
// 	{
// 		sonuc *= a;
// 		b--;
// 	}
// 	return (sonuc);
// }
class MerhabaDunya {
private:
		std::string mesaj;
public:
		int selam_count;

		MerhabaDunya()
		{
				mesaj = "Merhaba, Dünya!";
		}
		~MerhabaDunya();
		void MesajiYaz()
		{
				std::cout << mesaj << std::endl;
		}

};
class First
{
private:
	int area;
public:
	int width;
	int height;
	First(/* args */);
	~First();
	void starter()
	{
		std::cout << "width : ";
		std::cin >> width;
		std::cout << "height : ";
		std::cin >> height;
	}

	void calculate ()
	{
		area = width * height;
		std::cout << area << std::endl;
	}
};


First::First(/* args */)
{
}

First::~First()
{
}


int main()
{
	std::cout << "Hello C++\n";
/*
	std::cout << ust_al(5, 3) << "\n";
	int8_t num1; 
	todo int8_t tipi char gibi davranıyor ikiside 1 bayt ve ekrana karakter basmak için kullanılabilir
	
	int16_t num2;
	int32_t num3;
	int64_t num = 23456; 
	todo int64_t işlemciden bağımsız her halükarda 64 bit olan int tipi, <stdint.h> ile geliyor

	int x = -1;
	unsigned int y = 1;


	todo signed int ile unsigned int karşılaştırılmamalı, eğer karşılaştırılırsa karşılaştırma anında bir şekilde tip dönüşümü yapılıyor ve değerlerin o anki değerinin değişmesine sebep oluyor , en iyisi -Werror kullanmak
	if (x < y) 
	{
		std::cout << "-1 < 1\n";
	} else if (x == y){
		std::cout << "-1 == 1\n";
	} else {
		std::cout << "-1 > 1\n";
	}

	unsigned short number {1453}; 
	*farklı bir syntax
	std::cout << number;

	unsigned int a = 3;
	unsigned int b = 5;
	std::cout << a - b << "\n"; 
	todo ikiside unsigned olan değerle işlem yapınca sonucuda unsigned olarak tutmaya çalışıyor ve çıktı normalde -2 olması gerekirken bambaşka bir değer oluyor
	a += b;

	float f = 12345678.12345678;
	double d = 12345678.12345678;
	std::cout << f << "\n";
	std::cout << d << "\n";
	std::cout << std::setprecision(16);
	* setprecision basamak hassasiyeti ile alakalı
	std::cout << f << "\n";
	std::cout << d << "\n";
	f += d;
	todo 4 bayt dan büyük virgüllü değerleri double ile, küçük olan virgüllü değerli float ile tutmalıyız

	* Syntax; C/C++ için değişken tanımlama syntaxları
	int q = 10;
	int w = (10);
	int y = {10};


	char islem;
	std::cin >> islem;

	switch (islem)
	{
	case '+':
		std::cout << a + b;
		break;
	case '-':
		std::cout << a - b;
		break;
	case '*':
		std::cout << a * b;
		break;
	case '/':
		std::cout << a / b;
		break;
	default:
		std::cout << "bilinmeyen bir işlem";
		break;
	}

	char str[] = "talha";

	for (size_t i = 0; i < strlen(str); i++)
		std::cout << (char)(str[i] - 32) << "\n";

	* bunuda true kabul ediyor canım benim
	while ('0') 
	{
		std::cout << "girdi mi evet\n";
		break ;
	}


	do
	{
		std::cout << "girmee\n";
	} while (false);


	* do-while yapısının whiledan tek farkı koşulun en son inceleniyor olması
	
	
	* goto ifadesi ile kodun ilerleyen bir kısmına atlama sağlanabiliyor, goto ile tanımlanan nokta ile goto arasındaki tüm işlemler atlanıyor

	goto origin;
	! goto ifadesi uzun zamandır kullanılmıyor temiz kod olarak görülmüyor

	std::cout << "atlanacak kısım\n";

	origin:
		std::cout << "işınlanılan nokta\n";

*/

	First firstObject;

	firstObject.starter();
	firstObject.calculate();

}