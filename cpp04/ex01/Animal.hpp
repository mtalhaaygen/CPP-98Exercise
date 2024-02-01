#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

/**
 * Her sınıfın yapıcıları ve yıkıcıları belirli mesajları görüntülemelidir.
 * 
 * Bir Beyin sınıfı uygulayın. ideas adı verilen 100 std::string dizisi içerir. Bu şekilde dog ve cat'in private bir Beyin* özelliği olacaktır. construction çalışmasının ardından dog ve cat, new Beyin() kullanarak Beyinlerini yaratacak; destruction ile dog ve cat Beyinlerini silecektir.
 * 
 * main'de bir dizi Animal nesnesi oluşturun ve doldurun. Yarısı Dog nesneleri, diğer yarısı ise Cat nesneleri olacak. Programınızın yürütülmesinin sonunda, bu dizi üzerinde döngü yapın ve her Hayvanı silin. Hayvan olarak köpekleri ve kedileri doğrudan silmelisiniz. Uygun yıkıcılar beklenen sırayla çağrılmalıdır.
 * 
 * Bellek sızıntılarını kontrol etmeyi unutmayın.
 * 
 * Bir dog'un veya cat'in kopyası shallow olmamalıdır. Bu nedenle kopyalarınızın deep copy olup olmadığını test etmelisiniz!
 * 
int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;
...
return 0;
}
 * 
 * Yukarıda verilenlerden daha fazla test uygulayın ve teslim edin.
 * 
 * 
 */

class Animal
{
	protected :
		std::string	_type;
	public :
		Animal();
		Animal(const std::string type);
		Animal(const Animal &another);
		Animal &operator=(const Animal &another);
		virtual ~Animal();
		virtual void	makeSound(void) const;
		std::string		getType(void) const;
};

#endif
