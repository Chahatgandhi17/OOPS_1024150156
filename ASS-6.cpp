//Question 1 solution

/*
#include <iostream>
using namespace std;

class Book {
public:
    string title, author;
    int isbn;
};

class Library {
    Book b[10];
    int count = 0;

public:
    bool addNewBook(string &title, string &author, int &isbn) {
        if(count < 10) {
            b[count].title = title;
            b[count].author = author;
            b[count].isbn = isbn;
            count++;
            return true;
        }
        return false;
    }

    bool removeBooks(int &isbn);

    void displayDetails() {
        for(int i=0;i<count;i++) {
            cout << b[i].title << " " << b[i].author << " " << b[i].isbn << endl;
        }
    }
};

bool Library::removeBooks(int &isbn) {
    for(int i=0;i<count;i++) {
        if(b[i].isbn == isbn) {
            for(int j=i;j<count-1;j++) {
                b[j] = b[j+1];
            }
            count--;
            return true;
        }
    }
    return false;
}

int main() {
    Library l;

    string t="A", a="B";
    int id=1;

    l.addNewBook(t,a,id);
    l.displayDetails();

    l.removeBooks(id);
    l.displayDetails();

    return 0;
}
*/






















//Question 2 solution

/*
#include <iostream>
using namespace std;

class Book {
public:
    string title, author;
    int isbn;

    Book() {
        title = "";
        author = "";
        isbn = 0;
    }

    Book(string t, string a, int i) {
        this->title = t;
        this->author = a;
        this->isbn = i;
    }

    Book(Book &b) {
        this->title = b.title;
        this->author = b.author;
        this->isbn = b.isbn;
    }
};

class Library {
    Book b[5];
    int count = 0;

public:
    bool addNewBook(Book obj) {
        if(count < 5) {
            b[count] = obj;
            count++;
            return true;
        }
        return false;
    }

    bool removeBooks(int id) {
        for(int i=0;i<count;i++) {
            if(b[i].isbn == id) {
                count--;
                return true;
            }
        }
        return false;
    }

    void displayDetails() {
        for(int i=0;i<count;i++) {
            cout << b[i].title << " " << b[i].author << " " << b[i].isbn << endl;
        }
    }
};

int main() {
    Library l;

    Book b1("A","B",1);
    Book b2("C","D",2);

    l.addNewBook(b1);
    l.addNewBook(b2);

    l.displayDetails();

    return 0;
}
*/
























//Question 3 solution

/*
#include <iostream>
using namespace std;

class Account {
    const long acc;
    long tid;
    string type;
    double bal;

public:
    Account(long a): acc(a) {
        bal = 0;
    }

    long depositAmount(const long to, const long from, const double amt) {
        bal += amt;
        tid++;
        type = "credit";
        return tid;
    }

    long creditAmount(const long to, const long from, const double amt) {
        bal -= amt;
        tid++;
        type = "debit";
        return tid;
    }

    void displayDetails() const {
        cout << acc << " " << bal << " " << type << endl;
    }
};

int main() {
    Account a1(1), a2(2);

    a1.depositAmount(1,2,100);
    a1.creditAmount(1,2,50);

    a1.displayDetails();

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

    a.set(2);
    b.set(3);

    cout << add(a,b);

    return 0;
}
*/



























//Question 5 solution

/*
#include <iostream>
using namespace std;

class Complex {
    int r, i;

public:
    Complex(int a, int b) {
        r = a;
        i = b;
    }

    Complex(Complex &c) {
        r = c.r;
        i = c.i;
    }

    void display() {
        cout << r << " + " << i << "i" << endl;
    }

    friend void sum(Complex, Complex);
};

void sum(Complex c1, Complex c2) {
    cout << (c1.r + c2.r) << " + " << (c1.i + c2.i) << "i";
}

int main() {
    Complex c1(1,2), c2(3,4);

    sum(c1,c2);

    return 0;
}
*/























