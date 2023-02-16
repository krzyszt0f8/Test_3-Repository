#include <iostream>
using namespace std;

main()
{
    int size;
    cin >> size; 

    int ctr = 0;

    int * lab = new int [size];

    for (int i = 0; i < size; i++)
    {
        cin >> lab[i];  
    }
    
    
    for (int i = 0; ctr < 3; i++)
    {
        if (lab[i] == 42)
        {
            if(lab[i-1] == 42)
            {
                cout << lab[i] <<endl;
            }
            else
            {   
                cout << lab[i] <<endl;
                ctr++;
            }
        }
        else 
        {
            cout << lab[i] <<endl;
        }


    }
    delete [] lab;

    return 0;
}