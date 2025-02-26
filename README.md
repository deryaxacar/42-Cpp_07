<div align="center">
  <h1>C++ Module 07</h1> <img src="https://cdn-icons-png.flaticon.com/512/6132/6132222.png" alt="C++ Logo" width="65"></br></br>
</div>

<p align="center">
Bu projede, C++’ta şablon (template) yapıları kullanarak üç farklı egzersiz (ex00, ex01, ex02) gerçekleştiriyoruz. Amaç, hem şablon fonksiyonlara hem de şablon sınıflara dair temel kavrayış edinmektir.
</p>


### İçindekiler 📚
  - [Şablon (Template) Nedir?](#template-nedir)
    - [Fonksiyon Şablonları (Function Templates)](#function-templates)
    - [Sınıf Şablonları (Class Templates)](#class-templates)
- [Ex00 -  Start with a few functions](#ex00)
- [Ex01 - Iter](#ex01)
- [Ex02 - Array](#ex02)


---

<a name="template-nedir"></a>
### Şablon (Template) Nedir?

C++'da şablonlar (`templates`), farklı veri türleriyle çalışabilen genel (`generic`) fonksiyonlar veya sınıflar yazmanızı sağlayan bir özelliktir. Şablonlar, kodunuzu daha esnek ve yeniden kullanılabilir hale getirir. Örneğin, aynı işlemi `int`, `double`, `string` gibi farklı türlerle yapmanız gerekiyorsa, her tür için ayrı fonksiyonlar yazmak yerine tek bir şablon kullanabilirsiniz.

Şablonlar iki ana kategoriye ayrılır:

- 1. Fonksiyon Şablonları (Function Templates)

- 2. Sınıf Şablonları (Class Templates)

<a name="function-templates"></a>
### Fonksiyon Şablonları (Function Templates)

Fonksiyon şablonları, farklı türlerle çalışabilen genel fonksiyonlar yazmanızı sağlar. Örneğin, iki sayıyı toplayan bir fonksiyon yazmak istiyorsunuz, ancak bu fonksiyon hem `int` hem de `double` türleriyle çalışsın. İşte bunun için fonksiyon şablonları kullanılır.

**Örnek: Fonksiyon Şablonu**

```cpp
#include <iostream>

// Fonksiyon şablonu tanımlanıyor
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    // int türü ile kullanım
    std::cout << "Toplam (int): " << add(3, 5) << std::endl;

    // double türü ile kullanım
    std::cout << "Toplam (double): " << add(3.5, 2.7) << std::endl;

    return 0;
}
```

**Çıktı:**

```zsh
Toplam (int): 8
Toplam (double): 6.2
```

**Açıklama:**
- `template <typename T>`, şablonun başladığını belirtir. `T`, bir tür parametresidir (placeholder).

- `T add(T a, T b)`, `T` türünden iki parametre alır ve `T` türünden bir değer döndürür.

- `add(3, 5)` çağrıldığında `T` otomatik olarak int olur.

- `add(3.5, 2.7)` çağrıldığında `T` otomatik olarak double olur.

---


<a name="class-templates"></a>
### Sınıf Şablonları (Class Templates)

Sınıf şablonları, farklı türlerle çalışabilen genel sınıflar yazmanızı sağlar. Örneğin, bir dizi (array) sınıfı yazmak istiyorsunuz, ancak bu sınıf hem int hem de double türleriyle çalışsın. İşte bunun için sınıf şablonları kullanılır.

**Örnek: Sınıf Şablonu**

```cpp
#include <iostream>

// Sınıf şablonu tanımlanıyor
template <typename T>
class Box {
private:
    T value;
public:
    Box(T v) : value(v) {}
    T getValue() const {
        return value;
    }
};

int main() {
    // int türü ile kullanım
    Box<int> intBox(123);
    std::cout << "intBox değeri: " << intBox.getValue() << std::endl;

    // double türü ile kullanım
    Box<double> doubleBox(45.67);
    std::cout << "doubleBox değeri: " << doubleBox.getValue() << std::endl;
    return 0;
}
```

**Çıktı:**

```zsh
intBox değeri: 123
doubleBox değeri: 45.67
```

**Açıklama:**

- `template <typename T>`, şablonun başladığını belirtir. `T`, bir tür parametresidir.

- `Box<int> intBox(123);` ile `T` türü int olur.

- `Box<double> doubleBox(45.67);` ile `T` türü double olur.

**Not:**

- **Fonksiyon Şablonları:** Farklı türlerle çalışabilen genel fonksiyonlar yazmanızı sağlar.

- **Sınıf Şablonları:** Farklı türlerle çalışabilen genel sınıflar yazmanızı sağlar.

---

<a name="ex00"></a>
### Ex00 -  Start with a few functions

Buradaki amaç, şablon fonksiyonların her tür (`int`, `string` vs.) ile nasıl çalıştırılabileceğini göstermektir.

- `swap(T &a, T &b)`: İki değişkenin değerlerini birbirleriyle takas eder.
  - ```cpp
    template<typename T>
    void swap(T &a, T &b){
        T tmp = a;
        a = b;
        b = tmp;
    }
    ```

- `min(const T &a, const T &b`): İki değer karşılaştırılır ve en küçüğü döndürülür. Değerler eşitse ikinci parametre geri döner.
  - ```cpp
    template<typename T>
    T min(const T &a, const T &b) {
        return (a < b) ? a : b;
    }
    ```

- `max(const T &a, const T &b)`: İki değer karşılaştırılır ve en büyüğü döndürülür. Değerler eşitse ikinci parametre geri döner.
  - ```cpp
    template<typename T>
    T max(const T &a, const T &b) {
        return (a > b) ? a : b;
    }
    ```

- kodu test etmek için örnek main:
  - ```cpp
    int main( void ) {
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
    }
    ```

- Beklenen Çıktı:
  - ```ssh
    a = 3, b = 2
    min(a, b) = 2
    max(a, b) = 3
    c = chaine2, d = chaine1
    min(c, d) = chaine1
    max(c, d) = chaine2
    ```

---



---

<p align="center">2025 This project was created by Derya ACAR.</p>
