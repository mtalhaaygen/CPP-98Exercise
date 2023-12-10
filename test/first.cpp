#include <iostream>
#include <iomanip>      // std::setprecision
#include <stdint.h>
#include <string.h>

int topla(int a, int b);
int topla(int ...);
double topla(double ...);

int ust_al(double a, double b = 1)
{
	double sonuc = 1;
	while (b > 0)
	{
		sonuc *= a;
		b--;
	}
	return (sonuc);
}

int main()
{
	std::cout << "Hello C++\n";

	std::cout << ust_al(5, 3) << "\n";
	// int8_t num1; // char gibi davranıyor ikiside 1 bayt ve ekrana karakter basmak için kullanılabilir
	// int16_t num2;
	// int32_t num3;
	// int64_t num = 23456; // işlemciden bağımsız her halükarda 64 bit olan int tipi, <stdint.h> ile geliyor

	// int x = -1;
	// unsigned int y = 1;


	// if (x < y) // signed int ile unsigned int karşılaştırılmamalı, eğer karşılaştırılırsa karşılaştırma anında bir şekilde tip dönüşümü yapılıyor ve değerlerin o anki değerinin değişmesine sebep oluyor , en iyisi -Werror kullanmak
	// {
	// 	std::cout << "-1 < 1\n";
	// } else if (x == y){
	// 	std::cout << "-1 == 1\n";
	// } else {
	// 	std::cout << "-1 > 1\n";
	// }

	// unsigned short number {1453}; // farklı bir syntax
	// std::cout << number;

	unsigned int a = 3;
	unsigned int b = 5;
	//std::cout << a - b << "\n"; // ikiside unsigned olan değerle işlem yapınca sonucuda unsigned olarak tutmaya çalışıyor ve çıktı normalde -2 olması gerekirken bambaşka bir değer oluyor
	a += b;

	float f = 12345678.12345678;
	double d = 12345678.12345678;
	//std::cout << f << "\n";
	//std::cout << d << "\n";
	//std::cout << std::setprecision(16);// basamak hassasiyeti ile alakalı
	//std::cout << f << "\n";
	//std::cout << d << "\n";
	f += d;
	//todo 4 bayt dan büyük virgüllü değerleri double ile, küçük olan virgüllü değerli float ile tutmalıyız

	// ! Syntax; C/C++ için değişken tanımlama syntaxları
	// int q = 10;
	// int w = (10);
	// int y = {10};


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

	while ('0') // bunuda true kabul ediyor canım benim
	{
		std::cout << "girdi mi evet\n";
		break ;
	}


	do
	{
		std::cout << "girmee\n";
	} while (false);


	//! do-while yapısının whiledan tek farkı koşulun en son inceleniyor olması
	//todo goto ifadesi ile kodun ilerleyen bir kısmına atlama sağlanabiliyor, goto ile tanımlanan nokta ile goto arasındaki tüm işlemler atlanıyor

	goto origin;

	std::cout << "atlanacak kısım\n";

	origin:
		std::cout << "işınlanılan nokta\n";
}