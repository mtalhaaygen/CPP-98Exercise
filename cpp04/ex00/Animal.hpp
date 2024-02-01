#ifndef ANIMAL_HPP
#define ANIMAL_HPP

/**
 * @file Animal.hpp
 * @author talha
 * @brief 
 * @version 0.1
 * @date 2024-01-31
 * 
 * 
 * Her alıştırma için yapabileceğiniz en eksiksiz testleri sunmalısınız. 
 * Her sınıfın yapıcıları ve yıkıcıları belirli mesajları görüntülemelidir. 
 * Tüm dersler için aynı mesajı kullanmayın.
 * 
 * Animal adında basit bir temel sınıf uygulayarak başlayın. Protected bir özelliği vardır:
 * => std::string type;
 * 
 * Animal'dan miras alan bir Dog sınıfı uygulayın.
 * Animal'dan miras alan bir Cat sınıfı uygulayın.
 * Bu iki türetilmiş sınıf, type alanlarını adlarına göre ayarlamalıdır. Daha sonra, Köpeğin typeı "Köpek" olarak başlatılacak ve Kedinin typeı "Kedi" olarak başlatılacaktır. Animal sınıfının typeı boş bırakılabilir veya istediğiniz değere ayarlanabilir.
 * 
 * Her hayvan makeSound() işlevini kullanabilmelidir. Uygun bir ses çıkaracaktır (kediler havlamaz).
 * Bu kodu çalıştırmak, Hayvanların değil, Köpek ve Kedi sınıflarının belirli seslerini yazdıracaktır.
 * 
int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	// ...
return 0;
}
 *
 * Nasıl çalıştığını anladığınızdan emin olmak için WrongAnimal sınıfından miras alan bir WrongCat sınıfını uygulayın. Yukarıdaki kodda Animal ve Cat'i yanlış olanlarla değiştirirseniz, WrongCat WrongAnimal sesini çıkarmalıdır.
 * Yukarıda verilenlerden daha fazla test uygulayın ve teslim edin.
 * 
 * @copyright Copyright (c) 2024
 */

#include <iostream>

class Animal
{
	protected :
		std::string	_type;
	public :
		Animal();
		Animal(std::string type);
		Animal(Animal &another);
		Animal &operator=(const Animal &another);
		virtual ~Animal();
		virtual void	makeSound(void) const;
		std::string		getType(void) const;
};

#endif
