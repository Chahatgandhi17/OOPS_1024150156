//Question 1 solution

/*
#include <iostream>
using namespace std;

class Rectangle {
    int l, b;

public:
    Rectangle() {
        l = 0;
        b = 0;
    }

    Rectangle(int x, int y) {
        l = x;
        b = y;
    }

    Rectangle(int x) {
        l = x;
        b = x;
    }

    void area() {
        cout << l * b << endl;
    }
};

int main() {
    Rectangle r1;
    Rectangle r2(2,3);
    Rectangle r3(4);

    r1.area();
    r2.area();
    r3.area();

    return 0;
}
*/















//Question 2 solution

/*
#include <iostream>
using namespace std;

class Rectangle {
    int l, b;

public:
    Rectangle(int x=0, int y=0) {
        l = x;
        b = y;
    }

    void area() {
        cout << l * b << endl;
    }

    ~Rectangle() {
        cout << "Object destroyed\n";
    }
};

int main() {
    Rectangle r[3] = {Rectangle(), Rectangle(2,3), Rectangle(4,4)};

    for(int i=0;i<3;i++) {
        r[i].area();
    }

    return 0;
}
*/

















//Question 3 solution

/*
#include <iostream>
using namespace std;

class Test {
public:
    Test() {
        cout << "Constructor\n";
    }

    ~Test() {
        cout << "Destructor\n";
    }
};

int main() {
    Test t;
    return 0;
}
*/















//Question 4 solution

/*
#include <iostream>
using namespace std;

class Demo {
public:
    int x;

    void show() {
        cout << x << endl;
    }
};

int main() {

    // int
    int *p = new int;
    *p = 10;
    cout << *p << endl;
    delete p;

    // float
    float *f = new float;
    *f = 2.5;
    cout << *f << endl;
    delete f;

    // array
    int *arr = new int[3];
    for(int i=0;i<3;i++) {
        arr[i] = i+1;
        cout << arr[i] << " ";
    }
    delete[] arr;
    cout << endl;

    // object
    Demo *d = new Demo;
    d->x = 7;
    d->show();
    delete d;

    // array of objects
    Demo *darr = new Demo[2];
    darr[0].x = 5;
    darr[1].x = 6;

    darr[0].show();
    darr[1].show();

    delete[] darr;

    return 0;
}
*/
