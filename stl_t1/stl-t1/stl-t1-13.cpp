#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cout << "Enter array_1 size " << endl; 
    cin >> n;
    int m;
    cout << "Enter array_2 size " << endl;
    cin >> m;
    vector <int> vec1;
    vector <int> vec2;
    int cur;
    for (int i = 0; i < n; i++)
    {
        cout << "arr_1[" << i << "] ";
        cin >> cur;
        vec1.push_back(cur);
    }
    for (int i = 0; i < m; i++)
    {
        cout << "arr_2[" << i << "] ";
        cin >> cur;
        vec2.push_back(cur);
    }

    auto iter = vec1.begin();
    
    while (iter != vec1.end())
    {
        for (int i = 0; i < m; i++)
            if ((*iter == vec2[i]) && n != 0)
                {
                    vec1.erase(iter);
                    n--;
                    if (n != 0) 
                        iter--;
                    break;
                }
        iter++;
    }

    int x;
    cin >> x;

    iter = vec2.begin();

    for (int i = 0; i < m; i++)
    {
        if (vec2[i] % x == 0)
        {
            vec2.insert((iter + i), (rand() % 10 + 1));
            i++;
        }
    }


   /* int a;
    int b;
    cin >> a >> b;
    int y;
    cin >> y;

    for (int i = 0; i < n; i++)
    {
        if (vec2[i] >= a && vec2[i] <= b)
        {
            vec2[i] = y;
        }
    }*/

    if (vec1.size() > 0)
        sort(vec1.begin(), vec1.end());
    if (vec2.size() > 0)
        sort(vec2.begin(), vec2.end());
    vector <int> vec3;

    for (int i = 0; i < m; i++)
    {
        vec3.push_back(vec2[i]);
    }

    for (int i = 0; i < vec1.size(); i++)
    {
        vec3.push_back(vec1[i]);
    }

    sort(vec3.begin(), vec3.end());

    cout << "Merged array: " << endl;
    for (int i = 0; i < vec3.size(); i++)
    {
        cout << vec3[i];
    }
    return 0;
}
