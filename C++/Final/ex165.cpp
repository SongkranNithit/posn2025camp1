#include <bits/stdc++.h>
using namespace std;
/*
    #####   #    #     ####     #####       #     #####    #####    ###      #
    #       #    #    #    #      #         #     #   #    #   #    # #    #
    #       ######    ######      #         #     #   #    #   #    ###  #  ###
    #       #    #    #    #      #         #     #   #    #   #       #    # #
    #####   #    #    #    #      #         #     #####    #####     #      ###

                    Write now, Understand later.                                                                    
                                                                                */
bool opera(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}
long long plusminus(const string &s, int &i);
long long timesdivide(const string &s, int &i);
long long numorbrac(const string &s, int &i);
long long strtoint(const string &s, int &i);

// ---------- แปลง string เป็นตัวเลข ----------
long long strtoint(const string &s, int &i) {
    long long num = 0;
    bool neg = false;
    if (s[i] == '-') {  // ถ้าเจอเครื่องหมายลบ
        neg = true;
        i++;
    }
    while (i < (int)s.size() && isdigit(s[i])) {
        num = num * 10 + (s[i] - '0');
        i++;
    }
    return neg ? -num : num;
}

// ---------- Factor: ตัวเลข หรือ วงเล็บ ----------
long long numorbrac(const string &s, int &i) {
    while (i < (int)s.size() && isspace(s[i])) i++;

    if (s[i] == '(' || s[i] == '[') {
        char open = s[i++];
        long long val = plusminus(s, i);
        if (open == '(') i++; // ข้าม ')'
        else i++;             // ข้าม ']'
        return val;
    } else {
        return strtoint(s, i);
    }
}

// ---------- Term: คูณ / หาร ----------
long long timesdivide(const string &s, int &i) {
    long long value = numorbrac(s, i);
    while (i < (int)s.size()) {
        if (s[i] == '*') {
            i++;
            value *= numorbrac(s, i);
        } else if (s[i] == '/') {
            i++;
            long long divisor = numorbrac(s, i);
            if (divisor == 0) divisor = 1; // ป้องกันหาร 0
            value = floor((long double)value / divisor);
        } else break;
    }
    return value;
}

// ---------- Expression: บวก / ลบ ----------
long long plusminus(const string &s, int &i) {
    long long value = timesdivide(s, i);
    while (i < (int)s.size()) {
        if (s[i] == '+') {
            i++;
            value += timesdivide(s, i);
        } else if (s[i] == '-') {
            i++;
            value -= timesdivide(s, i);
        } else break;
    }
    return value;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string expr;
    getline(cin, expr);

    stack<char> brac;
    for (char c : expr) {
        if (c == '(' || c == '[') brac.push(c);
        else if (c == ')' || c == ']') {
            if (brac.empty()) {
                cout << "Bracket Error: " << c;
                return 0;
            }
            char top = brac.top(); brac.pop();
            if ((c == ')' && top != '(') || (c == ']' && top != '[')) {
                cout << "Bracket Error: " << c;
                return 0;
            }
        }
    }
    if (!brac.empty()) {
        if (brac.top() == '(') cout << "Bracket Error: )";
        else cout << "Bracket Error: ]";
        return 0;
    }


    bool lastop = false;
    bool firstc = true;
    for (int i = 0; i < (int)expr.size(); i++) {
        char c = expr[i];
        if (isspace(c)) continue;

        if (isdigit(c) || c == '(' || c == '[' || c == ')' || c == ']') {
            lastop = false;
            firstc = false;
            continue;
        }

        if (opera(c)) {
            if (c == '-' && (firstc || (i > 0 && (expr[i-1] == '(' || expr[i-1] == '[' || opera(expr[i-1]))))) {
                firstc = false;
                lastop = false;
                continue;
            }
            if (lastop) {
                cout << "Unknown Operator: " << c;
                return 0;
            }
            lastop = true;
            firstc = false;
            continue;
        }

        cout << "Unknown Operator: " << c;
        return 0;
    }

    int index = 0;
    cout << plusminus(expr, index);
    return 0;
}