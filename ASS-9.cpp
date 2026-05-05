//Question 1 solution

/*
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream f("NUM.txt");

    for(int i=1;i<=200;i++)
        f << i << " ";

    f.close();
    return 0;
}
*/














//Question 2 solution

/*
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream f("NOTES.txt");
    char ch;
    int count = 0;

    while(f.get(ch)) {
        if(isalpha(ch))
            count++;
    }

    cout << count;
    f.close();
    return 0;
}
*/























//Question 3 solution

/*
#include <iostream>
#include <fstream>
using namespace std;

class Test {
public:
    int x;
};

int main() {
    Test t;
    t.x = 10;

    ofstream f("data.dat", ios::binary);
    f.write((char*)&t, sizeof(t));
    f.close();

    ifstream f2("data.dat", ios::binary);
    Test t2;
    f2.read((char*)&t2, sizeof(t2));

    cout << t2.x;

    f2.close();
    return 0;
}
*/






















//Question 4 solution

/*
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream f1("a.txt");
    ofstream f2("b.txt");

    char ch;
    while(f1.get(ch))
        f2.put(ch);

    f1.close();
    f2.close();

    return 0;
}
*/






















//Question 5 solution

/*
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main() {
    char s[100];

    cout << "Enter string: ";
    cin >> s;

    cout << strlen(s) << endl;

    ofstream f("str.txt");
    f << s;
    f.close();

    ifstream f2("str.txt");
    char ch;

    while(f2.get(ch))
        cout << ch;

    f2.close();
    return 0;
}
*/























//Question 6(a) solution

/*
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream f("file.txt");

    for(char c='A';c<='Z';c++)
        f << c;

    f.close();

    ifstream f2("file.txt");
    f2.seekg(9);
    char ch;
    f2.get(ch);

    cout << ch;

    return 0;
}
*/


















//Question 6(b) solution

/*
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream f("file.txt", ios::in | ios::out);

    f.seekp(4);
    f.put('X');

    f.close();
    return 0;
}
*/



















//Question 6(c) solution

/*
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream f("file.txt");

    f.seekg(0, ios::end);
    cout << f.tellg();

    f.close();
    return 0;
}
*/


















//Question 6(d) solution

/*
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream f("file.txt");

    f.seekg(-1, ios::end);
    char ch;
    f.get(ch);

    cout << ch;

    f.close();
    return 0;
}
*/













//Question 6(e) solution

/*
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream f("data.txt");
    f << "Hello World\nC++ File\nTest";
    f.close();

    ifstream f2("data.txt");

    f2.seekg(10);
    cout << f2.tellg() << endl;

    char ch;
    while(f2.get(ch))
        cout << ch;

    f2.close();
    return 0;
}
*/














//Question 6(f) solution

/*
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream f("data.txt", ios::out);

    string s = "HelloWorld";
    for(int i=0;i<s.length();i++) {
        f.put(s[i]);
        cout << f.tellp() << endl;
    }
    f.close();

    fstream f2("data.txt", ios::in | ios::out);

    f2.seekp(5);
    f2 << "C++";

    f2.close();
    return 0;
}
*/

















