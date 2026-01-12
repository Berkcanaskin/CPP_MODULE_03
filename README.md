# CPP Module 03 - Inheritance (Kalıtım)

## 📚 Proje Açıklaması

CPP Module 03, C++'da inheritance (kalıtım), polymorphism ve sınıf hiyerarşisi gibi OOP'nin en önemli konseptlerini kapsayan eğitim projesidir.

## 🎯 Modülde Bulunan Egzersizler

### Exercise 00: Aaaaand... OPEN YOUR EYES!
**Amaç:** İlk inheritance örneğini uygulamak

**Neler Öğrenildi:**
- Base class ve derived class
- Constructor inheritance
- Access modifiers (public, protected, private)
- Destructor calling order

**Örnek:**
```cpp
class ClapTrap {
protected:
    std::string name;
};

class ScavTrap : public ClapTrap {
    // ClapTrap'dan kalıtım alır
};
```

### Exercise 01: Serena, my love!
**Amaç:** Multi-level inheritance (çok seviyeli kalıtım)

**Neler Öğrenildi:**
- Nested inheritance
- Constructor chain
- Initialization order
- Parent sınıf metotlarını override etme

**Hiyerarşi:**
```
ClapTrap
    ↓
ScavTrap
    ↓
FragTrap
```

### Exercise 02: Now it's weird!
**Amaç:** Virtual inheritance ve diamond problem

**Neler Öğrenildi:**
- Diamond inheritance problem
- Virtual inheritance
- Virtual functions
- Ambiguity resolution

## 🛠️ Kullanım

```bash
cd CPP_MODULE_03/ex00
make
./claptrap
```

## 📖 Temel C++ Kavramları

### Inheritance Türleri

**Public Inheritance:**
```cpp
class Derived : public Base {
    // Base'in public üyeleri, Derived'de de public
};
```

**Protected Inheritance:**
```cpp
class Derived : protected Base {
    // Base'in public üyeleri, Derived'de protected
};
```

**Private Inheritance:**
```cpp
class Derived : private Base {
    // Base'in public üyeleri, Derived'de private
};
```

### Constructor Execution Order

```
1. Base class constructor çalışır
2. Derived class constructor çalışır

Destruction sırası tersidir.
```

### Virtual Functions (Polymorphism)

```cpp
class Base {
public:
    virtual void attack() = 0;  // Pure virtual
    virtual ~Base() {}           // Virtual destructor
};

class Derived : public Base {
public:
    void attack() override;  // C++11 override keyword
};
```

### Diamond Inheritance Problemi

```
      Base
      /  \
    D1   D2
      \  /
    Derived
```

**Çözüm: Virtual Inheritance**
```cpp
class D1 : virtual public Base {};
class D2 : virtual public Base {};
class Derived : public D1, public D2 {};
```

## 📚 Öğrenme Çıktıları

✅ Inheritance konsepti mastered  
✅ Virtual functions anlaşıldı  
✅ Diamond problem çözüldü  
✅ Constructor/Destructor order öğrenildi  
✅ Polymorphism pratiği yapıldı  

## 🔧 Makefile

```bash
make         # Derleme
make clean   # Object dosyaları sil
make fclean  # Tüm dosyaları sil
make re      # Yeniden derleme
```

## 📝 Notlar

- Virtual destructors kullanılmıştır
- override keyword C++11 kullanılmıştır
- Memory management dikkat edilerek yapılmıştır
- Pure virtual functions uygulanmıştır

## Faydalı Linkler

- [Inheritance in C++](https://en.cppreference.com/w/cpp/language/derived_class)
- [Virtual Functions](https://en.cppreference.com/w/cpp/language/virtual)
- [Diamond Problem](https://en.wikipedia.org/wiki/Multiple_inheritance#The_diamond_problem)
