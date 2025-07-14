#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";
    // s.clear();
    cout << s.size() << endl;
    cout << s.max_size() << endl;
    cout << s.capacity() << endl;
    // s.resize(5);
    s.resize(15,'m');
    cout << s << endl;

    if(s.empty() == true) 
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not empty" << endl;
    }
    return 0;
}