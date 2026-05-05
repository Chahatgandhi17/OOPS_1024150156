//Question 1 solution

/*
#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class\n";
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived class\n";
    }
};

int main() {
    Base b;
    Derived d;

    b.show();
    d.show();
    d.display();

    return 0;
}
*/















//Question 2 solution

/*
#include <iostream>
using namespace std;

class Base {
protected:
    int x;
};

class Derived : public Base {
public:
    void set() {
        x = 10;
    }

    void show() {
        cout << x << endl;
    }
};

int main() {
    Derived d;
    d.set();
    d.show();
    return 0;
}
*/


















//Question 3 solution

/*
#include <iostream>
using namespace std;

class Base {
public:
    int x;
};

class Derived1 : public Base {};
class Derived2 : protected Base {};
class Derived3 : private Base {};

int main() {
    Derived1 d1;
    d1.x = 5;
    cout << d1.x << endl;

    return 0;
}
*/




















//Question 4 solution

/*
#include <iostream>
using namespace std;

// single inheritance
class A {
public:
    void show() { cout << "Single\n"; }
};
class B : public A {};

// multiple inheritance
class C {
public:
    void show1() { cout << "Multiple1\n"; }
};
class D {
public:
    void show2() { cout << "Multiple2\n"; }
};
class E : public C, public D {};

// multilevel inheritance
class F {
public:
    void show3() { cout << "Level1\n"; }
};
class G : public F {};
class H : public G {};

// hierarchical inheritance
class I {
public:
    void show4() { cout << "Base\n"; }
};
class J : public I {};
class K : public I {};

int main() {
    B b;
    b.show();

    E e;
    e.show1();
    e.show2();

    H h;
    h.show3();

    J j;
    K k;
    j.show4();
    k.show4();

    return 0;
}
*/



















//Question 5 solution

/*
#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base constructor\n";
    }
    ~Base() {
        cout << "Base destructor\n";
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived constructor\n";
    }
    ~Derived() {
        cout << "Derived destructor\n";
    }
};

int main() {
    Derived d;
    return 0;
}
*/
























//Question 6 solution

/*
#include <iostream>
using namespace std;

class Book {
public:
    string title, author;
    float price;

    void set(string t, string a, float p) {
        title = t;
        author = a;
        price = p;
    }

    void show() {
        cout << title << " " << author << " " << price << endl;
    }
};

class Textbook : public Book {
public:
    string subject;

    void set2(string s) {
        subject = s;
    }

    void display() {
        show();
        cout << subject << endl;
    }
};

int main() {
    Textbook t;
    t.set("Math", "ABC", 500);
    t.set2("Algebra");
    t.display();
    return 0;
}
*/





















//Question 7 solution

/*
#include <iostream>
using namespace std;

class Speedometer {
public:
    int speed;
};

class FuelGauge {
public:
    int fuel;
};

class Thermometer {
public:
    int temp;
};

class CarDashboard : public Speedometer, public FuelGauge, public Thermometer {
public:
    void show() {
        cout << speed << " " << fuel << " " << temp << endl;
    }
};

int main() {
    CarDashboard c;
    c.speed = 80;
    c.fuel = 50;
    c.temp = 30;

    c.show();
    return 0;
}
*/
















//Question 8 solution

/*
#include <iostream>
using namespace std;

class LibraryUser {
public:
    string name;
};

class Student : public LibraryUser {
public:
    int grade;
};

class Teacher : public LibraryUser {
public:
    string dept;
};

int main() {
    Student s;
    Teacher t;

    s.name = "A";
    s.grade = 10;

    t.name = "B";
    t.dept = "CS";

    cout << s.name << " " << s.grade << endl;
    cout << t.name << " " << t.dept << endl;

    return 0;
}
*/
























//Question 9 solution

/*
#include <iostream>
using namespace std;

class Vehicle {
public:
    string make;
};

class Truck : public Vehicle {
public:
    int load;
};

class RefrigeratedTruck : public Truck {
public:
    int temp;
};

int main() {
    RefrigeratedTruck r;

    r.make = "Tata";
    r.load = 1000;
    r.temp = -5;

    cout << r.make << " " << r.load << " " << r.temp << endl;

    return 0;
}
*/


















//Question 10 solution

/*
#include <iostream>
using namespace std;

class Person {
public:
    string name;
};

class Staff : public Person {
public:
    int id;
};

class Student : public Person {
public:
    int sid;
};

class TeachingAssistant : public Staff, public Student {};

int main() {
    TeachingAssistant t;

    t.Staff::name = "Rahul";
    t.id = 1;
    t.sid = 101;

    cout << t.Staff::name << " " << t.id << " " << t.sid << endl;

    return 0;
}
*/


