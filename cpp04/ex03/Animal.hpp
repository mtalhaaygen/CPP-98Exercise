/**
 * @file Animal.hpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-01-31
 * 
 * Interfaceler C++98'de mevcut değildir (C++20'de bile). Ancak pure abstract sınıflara genellikle interfaceler denir. Bu nedenle, bu son alıştırmada, bu modülü aldığınızdan emin olmak için interfaceleri uygulamaya çalışalım.
 * 
 * Aşağıdaki AMateria sınıfının tanımını tamamlayın ve gerekli üye işlevlerini uygulayın.
class AMateria
{
	protected:
		[...]
	public:
		AMateria(std::string const & type);
		[...]
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
 * 
 * Materias'ın Ice ve Cure beton sınıflarını uygulayın. Türlerini ayarlamak için adlarını küçük harflerle kullanın (Ice için "ice", Cure için "cure"). Elbette üye işlevleri clone() aynı türden yeni bir örnek döndürecektir (yani, bir Ice Materia'yı klonlarsanız yeni bir Ice Materia elde edersiniz).
 * 
 * use(ICharacter& target) işlevi şunları yazdırmalı;

	• Ice: "* shoots an ice bolt at <name> *"
	• Cure: "* heals <name>’s wounds *"
 * <name> parametre olarak iletilen Karakterin adıdır. Açılı ayraçları (< ve >) yazdırmayın.
 *
 * Bir Materia'yı diğerine atarken türü kopyalamanın bir anlamı yoktur.
 * 
 * Aşağıdaki interface'i uygulayacak somut sınıf Character'ini yazın:
class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};
 * Karakterin 4 slotluk bir envanteri vardır, bu da en fazla 4 Materia anlamına gelir. Envanter inşaat aşamasında boştur. Buldukları ilk boş yuvaya Materia'ları yerleştirirler. Bu şu anlama gelir: slot 0'dan slot 3'e. Tam bir envantere Materia eklemeye çalışırlarsa veya mevcut olmayan bir Materia'yı kullanmaya/donatmayı kaldırmaya çalışırlarsa, hiçbir şey yapmayın (ancak yine de hatalar yasaktır). unequip() üye işlevi Materia'yı SİLMEMELİDİR!
 *
 * 
 * 
 * @copyright Copyright (c) 2024
 * 
 */