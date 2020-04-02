#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> array, int n)
{
    for (int i=0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n, k, aux;
    
    cin >> n >> k;
    
    vector<int> pequis;
    vector<int> pequis_per_worker;
    
    for (int i=0; i < n; i++)
    {
        cin >> aux;
        pequis.push_back(aux);
        pequis_per_worker.push_back(0);
    }

    for (int i=0; i < k; i++)
    {

        for (int j=0; j < n; j++)
        {
            pequis_per_worker[j] += pequis[j];
        }

        pequis.insert(pequis.begin(), pequis.at(n-1));
        pequis.pop_back();
    }


    for (int i=0; i < n; i++)
    {
        cout << pequis_per_worker.at(i) << ' ';
    }
    cout << endl;

    return 0;
}
