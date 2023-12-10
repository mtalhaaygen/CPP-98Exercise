# init process
##### `man :`
init, bütün süreçlerin atasıdır. init’in birincil görevi /etc/inittab içinde saklı betikten süreçler oluşturmaktır.

# Daemon nedir?

Arka planda çalışan program anlamına gelmektedir. Geleneksel olarak, arka plan programının adı normal bir bilgisayar programı arasında ayrım yapmak için 'd' harfi ile biter.
Bir daemon programının parent processi genellikle init processidir. Bir child processi forklayan ve hemen arkasından çıkarak initin child processi benimsemesini sağlayan veya init processinin doğrudan daemon ile başlatılması işlemi ile oluşturulur.
Daemon adı ing. şeytan anlamına geliyor, meşhur maxwell'in şeytanı deneyinden esinlenerek konulmuş.
Daemon, kripto para madenciliğinde de kullanılan bir program türü, kripto madenciliği yapmak gibi işlemler genelde daemon programlarla oluyor.
Bitcoin’in resmi yazılımı olan Bitcoin Core, bir daemon’dur. Bitcoin Core, Bitcoin düğümlerini çalıştırmak, işlemleri doğrulamak ve yeni bloklar oluşturmak için kullanılır. Bitcoin Core daemon’unu kullanarak Bitcoin madenciliği de yapabilirsiniz.

C programlamada bir daemon process oluşturmak için özel fonksiyon var;
```C
#include <unistd.h>

int daemon(int nochdir, int noclose);
```

##### `man :` 
daemon() işlevi, kendilerini kontrol terminalinden ayırmak ve çalıştırmak isteyen programlar içindir.Arka planı sistem arka plan programları olarak kullanın.

Nochdir sıfır ise, daemon() işlemin geçerli çalışma dizinini kök dizine ("/") dönüştürür; aksi takdirde geçerli çalışma dizini değişmeden kalır.

Noclose sıfırsa, daemon() standart girişi, standart çıkışı ve standart hatayı /dev/null'a yönlendirir; diğer- aksi takdirde bu dosya tanımlayıcılarında hiçbir değişiklik yapılmaz.

# Sniffing (koklama) ve Spoofing (aldatma) Nedir?

sniffing bir network ağı üzerinde yer alan veri akışını dinler ve veriyi ele geçirmeyi amaçlar.
Pasif Sniffing ve aktif Sniffing olmak üzere iki çeşidi yer alır.

Pasif Siniffing HUB cihazı olan network ağlarında kullanılır. Ağ ortamında yer alan veriler birden fazla bilgisayara transfer edilir. Bu aşamada veri paketlerini koklamak daha kolay olur.

Aktif Sniffing ise, switch cihazlarının kullanıldığı sistemlerde tercih edilir. Sadece belirli bir MAC adresine gönderilen verilerin saldırganlar tarafından MAC adresini istemci gibi gösterip Switch cihazının beynini karıştırır. Bu şekilde Switch cihazının HUB olarak çalışmasını sağlar ve tüm portlardan veri çıkar.

Spoofing (Aldatma) saldırılarında ise, güvenli olarak görünen kaynaktan paket gönderilerek alıcıyı aldatmaktır. Hedefinde yer alan sistemlerde saldırı yapabilmek için çeşitli yazılımlar kullanır. Spoofing saldırılarının üç çeşidi yer alır. Bunlar;

URL Spoofing
ARP Spoofing
IP Spoofing
Bu üç yöntem ile Spoofing saldırıları saldırganlar tarafından gerçekleştirilir.



# r komutlarının ( rlogin, rsh, rcp)

 r-komutları, bir Unix sisteminin kullanıcılarının TCP/IP bilgisayar ağı üzerinden başka bir Unix bilgisayarında oturum açmasını veya komutlar vermesini sağlamak için tasarlanmış bir bilgisayar programları paketidir.

Paket içerisindeki programlar şunlardır: ​rcp​, ​rexec​, ​rlogin​, ​rsh​, ​rstat​,​ruptime​ve ​rwho​.

zamanla ssh protokolleri r-komutlarının ve telnet'in yerini aldı

# SSH Güvenli Kanalı Nasıl Oluşturuyor?

Güvenli kanalın ve veri bütünlüğünün sağlanması için hash algoritmaları simetrik ve asimetrik şifrelemeler kullanılıyor;

## Hash

Verilerin bütünlüğünden emin olmak için kullanılır
hash algoritmaları kullanılarak bir özet bilgisi üretilir, bu bilgi veride herhangi bir değişiklik olduğunda değişecektir. Veriyi gönderen taraf bu özet bilgiyi de gönderir ve şifreli metnin şifresi çözüldükten sonra hash algoritması uygulanır ve özet bilginin aynı olması beklenir.