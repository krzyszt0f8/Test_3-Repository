#include <iostream>
using namespace std;

main()
{
    int ctr = 0;

    int pre_num = 0;

    while(ctr < 3)
    {
        int num;
        cin >> num;

        cout << num << endl;

        if (num == 42 && pre_num != 42)
        {
            ctr++;
        }

        pre_num = num;
    }

    return 0;
}