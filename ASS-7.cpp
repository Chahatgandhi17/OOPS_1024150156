//Question 1 solution

/*
#include <iostream>
using namespace std;

class polygon {
public:
    int w, h;
    void set_value(int a, int b) {
        w = a;
        h = b;
    }
};

class rectangle : public polygon {
public:
    int area() {
        return w * h;
    }
};

class triangle : public polygon {
public:
    int area() {
        return w * h / 2;
    }
};

int main() {
    polygon *p;
    rectangle r;
    triangle t;

    p = &r;
    p->set_value(4,5);
    cout << r.area() << endl;

    p = &t;
    p->set_value(4,5);
    cout << t.area() << endl;

    return 0;
}
*/
























//Question 2 solution

/*
#include <iostream>
using namespace std;

class shape {
public:
    virtual void area() {}
    virtual void display() {}
};

class circle : public shape {
    int r;
public:
    circle(int x) { r = x; }
    void area() {
        cout << 3.14 * r * r << endl;
    }
    void display() {
        cout << "Circle\n";
    }
};

class rectangle : public shape {
    int l,b;
public:
    rectangle(int x,int y) { l=x; b=y; }
    void area() {
        cout << l*b << endl;
    }
    void display() {
        cout << "Rectangle\n";
    }
};

class triangle : public shape {
    int b,h;
public:
    triangle(int x,int y) { b=x; h=y; }
    void area() {
        cout << 0.5*b*h << endl;
    }
    void display() {
        cout << "Triangle\n";
    }
};

int main() {
    shape *s;

    circle c(3);
    rectangle r(4,5);
    triangle t(4,6);

    s=&c; s->display(); s->area();
    s=&r; s->display(); s->area();
    s=&t; s->display(); s->area();

    return 0;
}
*/

























//Question 3 solution

/*
#include <iostream>
using namespace std;

int area(int b,int h) {
    return 0.5*b*h;
}

int area(int a) {
    return (1.73*a*a)/4;
}

int area(int a,int b,int c) {
    return a+b+c;
}

int main() {
    cout << area(3,4) << endl;
    cout << area(5) << endl;
    cout << area(2,3,4) << endl;
    return 0;
}
*/























//Question 4 solution

/*
#include <iostream>
using namespace std;

class Student {
public:
    virtual void show() = 0;
};

class Engineering : public Student {
public:
    void show() {
        cout << "Engineering\n";
    }
};

class Medicine : public Student {
public:
    void show() {
        cout << "Medicine\n";
    }
};

class Science : public Student {
public:
    void show() {
        cout << "Science\n";
    }
};

int main() {
    Student *s[3];

    Engineering e;
    Medicine m;
    Science sc;

    s[0]=&e;
    s[1]=&m;
    s[2]=&sc;

    for(int i=0;i<3;i++)
        s[i]->show();

    return 0;
}
*/
























//Question 5 solution

/*
#include <iostream>
using namespace std;

class Time {
    int h,m,s;
public:
    Time(int a=0,int b=0,int c=0) {
        h=a; m=b; s=c;
    }

    Time operator+(Time t) {
        Time temp;
        temp.s = s + t.s;
        temp.m = m + t.m;
        temp.h = h + t.h;
        return temp;
    }

    void show() {
        cout << h << ":" << m << ":" << s << endl;
    }
};

int main() {
    Time t1(5,15,34),t2(9,53,58),t3;
    t3 = t1 + t2;
    t3.show();
    return 0;
}
*/























//Question 6 solution

/*
#include <iostream>
using namespace std;

class STRING {
    string s;
public:
    STRING(string x="") { s=x; }

    bool operator==(STRING t) {
        return s==t.s;
    }

    STRING operator+(STRING t) {
        return STRING(s+t.s);
    }

    void show() {
        cout << s << endl;
    }
};

int main() {
    STRING s1("Hi"), s2("Hello"), s3;

    s3 = s1 + s2;
    s3.show();

    cout << (s1==s2);

    return 0;
}
*/






















//Question 7 solution

/*
#include <iostream>
using namespace std;

class Matrix {
    int a[2][2];
public:
    void set() {
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                cin>>a[i][j];
    }

    friend Matrix operator*(Matrix,Matrix);
};

Matrix operator*(Matrix m1, Matrix m2) {
    Matrix m3;
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++) {
            m3.a[i][j]=0;
            for(int k=0;k<2;k++)
                m3.a[i][j]+=m1.a[i][k]*m2.a[k][j];
        }
    return m3;
}

int main() {
    Matrix m1,m2,m3;
    m1.set(); m2.set();
    m3 = m1*m2;
    return 0;
}
*/























//Question 8 solution

/*
#include <iostream>
using namespace std;

class Test {
    int a[5];
public:
    int& operator[](int i) {
        if(i<0 || i>=5) {
            cout << "Out of bound\n";
            exit(0);
        }
        return a[i];
    }
};

int main() {
    Test t;
    t[0]=10;
    cout<<t[0];
    return 0;
}
*/























//Question 9 solution

/*
#include <iostream>
using namespace std;

class Test {
public:
    void operator()(int a,int b) {
        cout << a+b << endl;
    }
};

int main() {
    Test t;
    t(2,3);
    return 0;
}
*/
























//Question 10 solution

/*
#include <iostream>
using namespace std;

class Test {
    int x;
public:
    friend istream& operator>>(istream &in, Test &t) {
        in >> t.x;
        return in;
    }

    friend ostream& operator<<(ostream &out, Test &t) {
        out << t.x;
        return out;
    }
};

int main() {
    Test t;
    cin >> t;
    cout << t;
    return 0;
}
*/




















//Question 11 solution

/*
#include <iostream>
using namespace std;

class Test {
    float x;
public:
    Test(float a) {
        x = a;
    }

    void show() {
        cout << x;
    }
};

int main() {
    Test t = 5.5;
    t.show();
    return 0;
}
*/

















//Question 12 solution

/*
#include <iostream>
using namespace std;

class Test {
    float x;
public:
    Test(float a) { x=a; }

    operator float() {
        return x;
    }
};

int main() {
    Test t(5.5);
    float f = t;
    cout << f;
    return 0;
}
*/


















//Question 13 solution

/*
#include <iostream>
using namespace std;

class Cartesian;

class Polar {
    int r, a;
public:
    Polar(int x,int y) { r=x; a=y; }
    friend class Cartesian;
};

class Cartesian {
    int x,y;
public:
    Cartesian(Polar p) {
        x = p.r;
        y = p.a;
    }

    void show() {
        cout << x << " " << y;
    }
};

int main() {
    Polar p(10,5);
    Cartesian c = p;
    c.show();
    return 0;
}
*/





















