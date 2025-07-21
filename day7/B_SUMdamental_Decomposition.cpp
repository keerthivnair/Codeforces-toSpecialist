#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        string binary_rep;
        int original_n = n;
        

        while (x>0)
        {
            int r = x % 2;
            binary_rep.push_back(r + '0');
            x = x / 2;
        }
        int len = binary_rep.length();
        if(len<=1)
        binary_rep.push_back('0');

        reverse(binary_rep.begin(), binary_rep.end());

        len = binary_rep.length();
        int zeroes = 0;
        int count = 0;
        int flag = 1;
        for (int i = len - 1; i >= 0; i--)
        {
            if (i == len - 1)
            {
                if (binary_rep[i] == '1')
                {
                    if (original_n % 2 == 0)
                    {
                        count += (original_n - 1) * 1;
                        zeroes = 1;
                    }
                    else
                    {
                        count += original_n;
                        zeroes = 0;
                    }
                }
                else
                {
                    if (original_n % 2 == 0)
                    {
                        count += original_n * 1;
                        zeroes = 0;
                    }
                    else
                    {
                        count += original_n - 1;
                        zeroes = 1;
                    }
                }
            }
            else if (i != len - 2 && i!=len-1)
            {
                if (binary_rep[i] == '1')
                {
                    count += 1 * (1 << (len - i));
                }
            }
            if(i==len - 2)
            {
                if (binary_rep[i] == '1')
                {
                    if (zeroes % 2 == 1)
                    {
                        count += zeroes * 2;
                    }
                    else
                    {
                        count += zeroes * 2 + 2;
                    }
                }
                else
                {
                    if (zeroes % 2 == 1)
                    {
                        count += zeroes * 2 + 2;
                    }
                    else
                    {
                        count += zeroes * 2;
                    }
                }
            }
        }
        if (flag)
            cout << count << '\n';
    }
    return 0;
}
