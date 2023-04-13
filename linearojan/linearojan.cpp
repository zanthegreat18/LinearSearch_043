#include <iostream>
using namespace std;

int arr[20];
int n;
int i;

void input()
{
    while (true)
    {
        cout << "enter the number of elements in the array: ";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\nMaksimum panjang array adalah 20" << endl;
    }

    cout << "\n===================" << endl;
    cout << "\nEnter Array Element" << endl;
    cout << "\n===================" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];

    }
}

void LinearSearch()
{
    char ch;
    int comparison;

    do
    {
        cout << "\nEnter the element you want to search: ";
        int item;

        comparison = 0;
        for (i = 0; i < n; i++)
        {
            comparison++;
            if (arr[i] == item)
            {
                cout << "\n" << item << " found at position " << (i + 1) << endl;
                break;
            }
        }

        if (i == n)
            cout << "\n" << item << " not found in the array\n";
        cout << "\Number of comparison: " << comparison << endl;

        cout << "\nComparison search (y/n): ";
        cin >> ch >> ch;
    } while ((ch == 'y') || (ch == 'y'));

} 

int main()
{
    input();
    LinearSearch();
}


    

    

    

    
        

    
