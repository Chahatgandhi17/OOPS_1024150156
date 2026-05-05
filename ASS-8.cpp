//Question 1 solution

/*
#include <iostream>
using namespace std;

template <class T>
void swapVal(T &a, T &b) {
    T t = a;
    a = b;
    b = t;
}

int main() {
    int a=2, b=3;
    swapVal(a,b);
    cout << a << " " << b;
    return 0;
}
*/











//Question 2 solution

/*
#include <iostream>
using namespace std;

template <class T>
T minVal(T a[], int n) {
    T m = a[0];
    for(int i=1;i<n;i++) {
        if(a[i] < m)
            m = a[i];
    }
    return m;
}

int main() {
    int a[5]={5,2,8,1,3};
    cout << minVal(a,5);
    return 0;
}
*/






















//Question 3 solution

/*
#include <iostream>
using namespace std;

template <class T>
void sortArr(T a[], int n) {
    for(int i=0;i<n;i++)
        for(int j=0;j<n-1;j++)
            if(a[j] > a[j+1]) {
                T t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
}

int main() {
    int a[5]={5,3,1,4,2};
    sortArr(a,5);

    for(int i=0;i<5;i++)
        cout << a[i] << " ";
    return 0;
}
*/
























//Question 4 solution

/*
#include <iostream>
using namespace std;

template <class T>
int searchVal(T a[], int n, T key) {
    for(int i=0;i<n;i++)
        if(a[i]==key)
            return i;
    return -1;
}

int main() {
    int a[5]={1,2,3,4,5};
    cout << searchVal(a,5,3);
    return 0;
}
*/




















//Question 5 solution

/*
#include <iostream>
using namespace std;

template <class T>
void process(T a) {
    cout << a << endl;
}

template <class T>
void process(T a, T b) {
    cout << a+b << endl;
}

template <class T, class U>
void process(T a, U b) {
    cout << a << " " << b << endl;
}

int main() {
    process(5);
    process(2,3);
    process(2,3.5);
    return 0;
}
*/


















//Question 6 solution (Stack)

/*
#include <iostream>
using namespace std;

template <class T>
class Stack {
    T a[5];
    int top=-1;

public:
    void push(T x) {
        a[++top]=x;
    }

    void pop() {
        if(top>=0)
            top--;
    }

    void show() {
        for(int i=0;i<=top;i++)
            cout << a[i] << " ";
    }
};

int main() {
    Stack<int> s;
    s.push(1); s.push(2);
    s.pop();
    s.show();
    return 0;
}
*/























//Question 7 solution (Queue)

/*
#include <iostream>
using namespace std;

template <class T>
class Queue {
    T a[5];
    int f=0,r=-1;

public:
    void enqueue(T x) {
        a[++r]=x;
    }

    void dequeue() {
        f++;
    }

    void show() {
        for(int i=f;i<=r;i++)
            cout << a[i] << " ";
    }
};

int main() {
    Queue<int> q;
    q.enqueue(1); q.enqueue(2);
    q.dequeue();
    q.show();
    return 0;
}
*/























//Question 8 solution

/*
#include <iostream>
using namespace std;

template <class T>
class Pair {
    T a,b;
public:
    Pair(T x,T y) {
        a=x; b=y;
    }

    void show() {
        cout << a << " " << b;
    }
};

int main() {
    Pair<int> p(2,3);
    p.show();
    return 0;
}
*/





















//Question 9 solution

/*
#include <iostream>
using namespace std;

template <class T>
class Calc {
public:
    T add(T a,T b) { return a+b; }
    T sub(T a,T b) { return a-b; }
};

int main() {
    Calc<int> c;
    cout << c.add(2,3) << endl;
    cout << c.sub(5,2);
    return 0;
}
*/























//Question 10 solution

/*
#include <iostream>
using namespace std;

template <class T>
class Array {
    T a[5];
public:
    void input() {
        for(int i=0;i<5;i++)
            cin>>a[i];
    }

    void display() {
        for(int i=0;i<5;i++)
            cout<<a[i]<<" ";
    }
};

int main() {
    Array<int> a;
    a.input();
    a.display();
    return 0;
}
*/























