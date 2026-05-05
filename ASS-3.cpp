//Question 1 solution

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
    Demo obj;
    obj.x = 10;

    Demo *p;
    p = &obj;

    // dot operator
    obj.show();

    // arrow operator
    p->show();

    return 0;
}
*/











//Question 2 solution

/*
#include <iostream>
using namespace std;

class B;

class A {
    int x;
public:
    void set(int a) { x = a; }
    friend void swap(A &, B &);
};

class B {
    int y;
public:
    void set(int b) { y = b; }
    friend void swap(A &, B &);
};

void swap(A &a, B &b) {
    int t;
    t = a.x;
    a.x = b.y;
    b.y = t;
}

int main() {
    A a;
    B b;

    a.set(5);
    b.set(10);

    swap(a, b);

    return 0;
}
*/















//Question 3 solution

/*
#include <iostream>
using namespace std;

class B;

class A {
    int x;
public:
    void set(int a) { x = a; }
    friend int add(A, B);
};

class B {
    int y;
public:
    void set(int b) { y = b; }
    friend int add(A, B);
};

int add(A a, B b) {
    return a.x + b.y;
}

int main() {
    A a;
    B b;

    a.set(3);
    b.set(4);

    cout << add(a, b);

    return 0;
}
*/














//Question 4 solution

/*
#include <iostream>
using namespace std;

class B;

class A {
    int x;
public:
    void set(int a) { x = a; }
    friend class B;
};

class B {
public:
    void show(A a) {
        cout << a.x << endl;
    }
};

int main() {
    A a;
    B b;

    a.set(7);
    b.show(a);

    return 0;
}
*/

















//Question 5 solution

/*
#include <iostream>
using namespace std;

class Rect {
    int w, h;
public:
    void set(int a, int b) {
        w = a;
        h = b;
    }

    void area() {
        cout << w * h << endl;
    }
};

int main() {
    Rect r[3];

    r[0].set(2,3);
    r[1].set(4,5);
    r[2].set(6,7);

    for(int i=0;i<3;i++) {
        r[i].area();
    }

    return 0;
}
*/














//Question 6 solution

/*
#include <iostream>
using namespace std;

inline int cube(int x) {
    return x*x*x;
}

int main() {
    int n = 3;
    cout << cube(n);
    return 0;
}
*/
















//Question 7(a) solution

/*
#include <iostream>
using namespace std;

class Demo {
    int x;
public:
    void set(int a) { x = a; }

    Demo add(Demo d) {
        Demo t;
        t.x = x + d.x;
        return t;
    }

    void show() {
        cout << x << endl;
    }
};

int main() {
    Demo d1, d2, d3;

    d1.set(2);
    d2.set(3);

    d3 = d1.add(d2);

    d3.show();

    return 0;
}
*/



















//Question 7(b) solution

/*
#include <iostream>
using namespace std;

class Demo {
    int x;
public:
    void set(int a) { x = a; }

    void add(Demo &d) {
        x = x + d.x;
    }

    void show() {
        cout << x << endl;
    }
};

int main() {
    Demo d1, d2;

    d1.set(5);
    d2.set(6);

    d1.add(d2);

    d1.show();

    return 0;
}
*/

