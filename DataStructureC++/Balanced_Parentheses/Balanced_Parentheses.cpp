
#include <iostream>
#include <stack>
using namespace std;
bool isPair(char open, char close)
{
    if (open == '(' && close == ')')
        return true;
    else if (open == '{' && close == '}')
        return true;
    else if (open == '[' && close == ']')
        return true;
    return false;

}

bool isBalanced(string exp)
{
    stack <char>s;
    for (size_t i = 0; i < s.size(); i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            s.push(exp[i]);
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (s.empty() || !isPair(s.top(), exp[i]))
                return false;
            else
                return true;

        }
    }
    return s.empty() ? true : false;

}
int main()
{
    string expression;
    cout << "Enter an Expression :";
    cin >> expression;
    if (isBalanced(expression))
        cout << "Balanced\n";
    else
        cout << "Not Balanced\n";
}

