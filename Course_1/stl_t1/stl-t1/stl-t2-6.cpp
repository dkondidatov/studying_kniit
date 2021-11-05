#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "Enter array size " << endl;
    cin >> n;
    int x;
    bool check = 0;
    cout << "Enter X not equal to 0" << endl;
    while (check != true)
    {
        cin >> x;
        if (x != 0)
            check = true;
        else
            cout << "Try again" << endl;
    }
    
    vector <int> vec;
    int cur;
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] ";
        cin >> cur;
        vec.push_back(cur);
    }

    int sum = 0;
    int min = vec[0];
    int max = vec[0];
    for (int i = 0; i < n; i++)
    {
        if (vec[i] % x == 0)
        {
            sum += vec[i];
        }

        if (min > vec[i])
        {
            min = vec[i];

        }

        if (max < vec[i])
        {
            max = vec[i];

        }
    }


    for (int i = 0; i < n; i++)
    {
        if ((vec[i] % 2 == 0) && (vec[i] != 0))
        {
            vec[i] = max;
        }
    }

    cout << "Sum of elements multiples X = " << x << " is " << sum << endl;
    cout << "Minimal element is " << min << endl;

    cout << "All even elements are replaced with the maximum" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << vec[i];
    }


    return 0;
}
