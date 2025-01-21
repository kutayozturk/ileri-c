# Dinamik Bellek Yönetimi

### Dört Adet Temel Fonksiyon:
- malloc()
- calloc()
- realloc()
- free()

Bir çok uygulamada yazılımlarımızın işleyeceği, üzerinde işlem yapacağı, biryerlerden okuyacağı verinin miktarı hakkında henüz tasarım ve geliştirme aşamasında fikrimiz olmayabilir.

Bir çok uygulamada yazılımlar çalışma esnasında ne kadar çok veri ile karşılaşırsa, o kadar çok işlem yapmak zorunda kalabilir.

>Daha önceden **Diziler** *(Array)* yapısını inceledik. Bu statik bir veri yapsıdır. Yani, boyutunun önceden belirlenmesi, gerekli veya gereksiz fazladan veya eksik olarak bellek talep edilmesine sebep olan bir veri yapısıdır.

Oysaki bizim, ihtiyaca göre bellek talebinde bulunan, kullandığı belleği artık ihtiyacı kalmadığında onu serbest bırakadan **Dinamik Bellek Yönetimi** ve Fonksiyonlarına ihtiyacımız olabilir.

C Programlama dili alt seviye bir programlama dili olması nedeniyle, Dinamik Bellek Yönetimine izin veren birtakım hizmetleri sağlamaktadır.


|Fonksiyon  |Açılımı  |Okunuşu  |
|-----------|---------|---------|
|malloc()   |"memory allocation" (bellek tahsisi) |mallok         |
|calloc()   |"contiguous allocation" (sürekli bellek tahsisi)         |siallok veya kallok         |
|realloc()  |"reallocation" (yeniden bellek tahsisi)          |riallok         |
|free()     |       |firi         | 

## Sözdizimi ve Kullanım Şekilleri

#### malloc() 
malloc'ta ayrılan hafıza, bütünleşik yada ardışık olmak zorunda **değildir**. Ayrıca; ayrılan hafıza bölümünde **daha önceden veri varsa o veriye dokunmaz**, öylece kalır.

#### calloc()
calloc'ta ayrılan hafıza alanı yanyana, yekpare bir şekilde ayrılır. 
**Ayrılan hafıza bölümü ardışıktır** ve tüm değerler **"0" (sıfır)** olarak atanır. Bu sadece **ilklendirir**. Yani *"initializes"* olayı gerçekleşir.

#### realloc()
realloc, daha önceden ayrılımış bir işaretçi varsa ve bunun bir şekilde boyutunun arttırılmasına veya azaltılmasına ihtiyacımız varsa, yeni boyut belirterek, yeni bir boyut talep ediyoruz.

#### free()
Daha önce malloc(), calloc(), realloc() ile üzerine tanımlanmış bir işaretçi varsa ve hali hazırda ayrılmış bir bellek adresine işaret ediyorsa ve artık o bellek adresinde bulunan verilere ihtiyaç kalmamışsa, orayı free() serbest bırakmak için kullanılan bir fonksiyondur.

>ve bütün malloc(), calloc(), realloc() fonksiyonların sonunda mutlakada ama mutlaka free() (serbest bırakma) fonksiyonu kullanılmalıdır.

```c

// malloc(9)
isaretci = (castTipi*) malloc(boyut);
isaretci = (float*) malloc(100 * sizeof(float));

// calloc()
isaretci = (castTipi*) calloc(n, boyut);
isaretci = (float*) calloc(100, sizeof(float));

// realloc()
isaretci = realloc(isaretci, yeni_boyut);

//free
free(isaretci)

```




