#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main()
{
    string p = "53+82-*";
    p += ')';
    stack<int> STACK;
    int i = 0;
    int a, b;
    char symbol;

    while (p[i] != ')')
    {
        symbol = p[i];

        if (isdigit(symbol))
        {
            STACK.push(symbol - '0');
        }
        else
        {
            if (STACK.size() < 2)
            {
                cout << "Invalid input" << endl;
                return 1;
            }

            a = STACK.top();
            STACK.pop();
            b = STACK.top();
            STACK.pop();

            switch (symbol)
            {
            case '+':
                STACK.push(b + a);
                break;

            case '-':
                STACK.push(b - a);
                break;

            case '*':
                STACK.push(b * a);
                break;

            case '/':
                if (a == 0)
                {
                    cout << "Division by zero" << endl;
                    return 1;
                }
                STACK.push(b / a);
                break;
            }
        }
        i++;
    }

    if (STACK.size() != 1)
    {
        cout << "Invalid input" << endl;
        return 1;
    }

    int value = STACK.top();
    cout << value << endl;

    return 0;
}