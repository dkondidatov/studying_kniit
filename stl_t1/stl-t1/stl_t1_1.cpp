#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "Enter count of array:" << endl;
    cin >> n;
    vector <int> vec;
    int cur;
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        cout << "Enter element " << i << ": ";
        cin >> cur;
        vec.push_back(cur);
    }

    int a;
    int b;
    cout << "Enter left border and right border" << endl;
    cin >> a >> b;

    int lbrd, rbrd;
    if (a <= b)
    {
        lbrd = a;
        rbrd = b; 
    }
    else 
    {
        lbrd = b;
        rbrd = a;
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (i < lbrd || i > rbrd)
        {
            sum += vec[i];
        }
    }
    cout << endl;
    cout << sum;

    return 0;
}
