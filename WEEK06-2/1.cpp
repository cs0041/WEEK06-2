#include <iostream>

using namespace std;

int main()
{
    int numBottles, numExchange;
    cin >> numBottles >> numExchange;
    int ans = numBottles;
    if (numBottles >= numExchange)
    {
        int c = numBottles;
        while (c / numExchange > 0)
        {
            c = c / numExchange;
            ans += c;
            if ((c * numExchange) <= numBottles)
            {
                c += (numBottles - (c * numExchange));
                numBottles = c;
            }
        }

    }
    else
    {
        ans = numBottles;

    }
    cout << "Ans : " << ans << endl;
    return 0;
}
