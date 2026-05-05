#include <iostream>
#include <iomanip>
using namespace std;

// Q1
void helloWorld() {
    cout << "\nQ1 Output:\n";
    cout << "Hello World\n";
}

// Q2
void inputOutput() {
    cout << "\nQ2 Output:\n";

    int a;
    float b;
    char c;

    cout << "Enter integer: ";
    cin >> a;

    cout << "Enter decimal: ";
    cin >> b;

    cout << "Enter character: ";
    cin >> c;

    cout << "Integer: " << a << endl;
    cout << "Decimal: " << b << endl;
    cout << "Character: " << c << endl;
}

// Q3
void arithmetic() {
    cout << "\nQ3 Output:\n";

    float x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Add: " << x + y << endl;
    cout << "Subtract: " << x - y << endl;
    cout << "Multiply: " << x * y << endl;

    if (y != 0)
        cout << "Divide: " << x / y << endl;
    else
        cout << "Cannot divide by zero\n";
}

// Q4
void temperature() {
    cout << "\nQ4 Output:\n";

    float c, f;
    cout << "Enter Celsius: ";
    cin >> c;

    f = (9.0/5) * c + 32;

    cout << "Fahrenheit: " << f << endl;
}

// Q5
void formatting() {
    cout << "\nQ5 Output:\n";

    cout << "Using newline\nHello\nWorld\n";
    cout << "Using tab\tHello\tWorld\n";
    cout << "Backspace ABC\bD\n";
    cout << "Using endl" << endl;

    cout << setw(10) << "Text\n";
}

// Q6
void assignmentOp() {
    cout << "\nQ6 Output:\n";

    int n = 10;

    cout << "Start: " << n << endl;

    n += 5;
    cout << "After +=" << n << endl;

    n -= 3;
    cout << "After -=" << n << endl;
}

// Q7
void swapBitwise() {
    cout << "\nQ7 Output:\n";

    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After swap a=" << a << " b=" << b << endl;
}

// Q8
void libraryFine() {
    cout << "\nQ8 Output:\n";

    int d;
    cout << "Enter late days: ";
    cin >> d;

    if (d > 30) {
        cout << "Membership cancelled\n";
    }
    else if (d <= 5) {
        cout << "Fine: " << d * 0.5 << endl;
    }
    else if (d <= 10) {
        cout << "Fine: " << d * 1 << endl;
    }
    else {
        cout << "Fine: " << d * 5 << endl;
    }
}

// Q9
void calculator() {
    cout << "\nQ9 Output:\n";

    char op;
    float a, b;

    cout << "Enter operator: ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch(op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/':
            if (b != 0)
                cout << a / b;
            else
                cout << "Error";
            break;
        default:
            cout << "Invalid";
    }
    cout << endl;
}

// Q10
void evenOdd() {
    cout << "\nQ10 Output:\n";

    int n;
    cout << "Enter number: ";
    cin >> n;

    if (n % 2 == 0)
        cout << "Even\n";
    else
        cout << "Odd\n";
}

// main
int main() {

    helloWorld();
    inputOutput();
    arithmetic();
    temperature();
    formatting();
    assignmentOp();
    swapBitwise();
    libraryFine();
    calculator();
    evenOdd();

    return 0;
}
