
//Question 1 solution

/*
#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
    string degree;
    string hostel;
    float cgpa;

    void addDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll: ";
        cin >> roll;
        cout << "Enter degree: ";
        cin >> degree;
        cout << "Enter hostel: ";
        cin >> hostel;
        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void updateDetails() {
        cout << "Updating name: ";
        cin >> name;
    }

    void updateCGPA() {
        cout << "Enter new CGPA: ";
        cin >> cgpa;
    }

    void updateHostel() {
        cout << "Enter new hostel: ";
        cin >> hostel;
    }

    void displayDetails() {
        cout << name << " " << roll << " " << degree << " " << hostel << " " << cgpa << endl;
    }
};

int main() {
    Student s;
    s.addDetails();
    s.displayDetails();
    return 0;
}
*/








//Question 2 solution

/*
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int roll;

public:
    void setData() {
        cin >> name >> roll;
    }

    void showData() {
        cout << name << " " << roll << endl;
    }
};

int main() {
    Student s;
    s.setData();
    s.showData();
    return 0;
}
*/










//Question 3 solution

/*
#include <iostream>
using namespace std;

class Demo {
private:
    void privateFunc() {
        cout << "Private function called\n";
    }

public:
    void publicFunc() {
        privateFunc();
    }
};

int main() {
    Demo d;
    d.publicFunc();
    return 0;
}
*/











//Question 4 solution

/*
#include <iostream>
using namespace std;

class Rectangle {
    int w, h;

public:
    void getData() {
        cin >> w >> h;
    }

    void calculateArea() {
        cout << w * h << endl;
    }
};

int main() {
    Rectangle r;
    r.getData();
    r.calculateArea();
    return 0;
}
*/











//Question 5 solution

/*
#include <iostream>
using namespace std;

class Complex {
    float r, i;

public:
    void setComplex(float a, float b) {
        r = a;
        i = b;
    }

    void displayComplex() {
        cout << r << " + " << i << "i" << endl;
    }

    Complex add(Complex c) {
        Complex t;
        t.r = r + c.r;
        t.i = i + c.i;
        return t;
    }
};

int main() {
    Complex c1, c2, c3;

    c1.setComplex(1, 2);
    c2.setComplex(3, 4);

    c3 = c1.add(c2);
    c3.displayComplex();

    return 0;
}
*/












//Question 6 solution

/*
#include <iostream>
using namespace std;

int a = 50;

class Test {
public:
    static int a;

    void show() {
        int a = 10;
        cout << a << endl;
        cout << ::a << endl;
        cout << Test::a << endl;
    }
};

int Test::a = 20;

int main() {
    Test t;
    t.show();
    return 0;
}
*/














//Question 7 solution

/*
#include <iostream>
using namespace std;

namespace A {
    int x = 5;
    void show() {
        cout << x << endl;
    }
}

namespace B {
    int x = 10;
    void show() {
        cout << x << endl;
    }
}

int main() {
    A::show();
    B::show();
    return 0;
}
*/














