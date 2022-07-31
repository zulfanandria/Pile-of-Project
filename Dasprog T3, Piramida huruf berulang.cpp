#include <iostream>
using namespace std;

int main()
{

    int a, hurcil, hursar, angka, p, i, j, k, n, m, o, r;
    cout << "Masukkan angka : ";
    cin >> n;
    a = 0;       /*baris ke-*/


    for (size_t i = 0; i < n; i++) /*pengulangan baris*/
    {
        a++;
        for (size_t j = 1; j < n - i; j++) /*pengulanan tanda " - "*/
        {
            cout << " -";
        }
        cout << " ";

        /* Input kiri dan tengah*/
        for (size_t k = 1; k < a + 1; k++)
        {
            int in_k;
            if (k > 62)
            {
                r = a / 62;
                if (r > 1)
                {
                    in_k = k % 62;
                    if (in_k == 0)
                    {
                        in_k = 62;
                    }
                }
                else
                {
                    in_k = k % 62;
                }
            }
            else
            {
                in_k = k;
            }
            if (in_k <= 26)
            {
                cout << char(96 + in_k) << " ";

            }
            else if (in_k <= 52)
            {
                cout << char(64 + in_k - 26) << " ";

            }
            else if (in_k <= 62)
            {
                cout << char(47 + in_k - 52) << " ";

            }
        }

        /*Input kanan*/
        for (size_t m = a; m > 1; m--)
        {
            int in_m;
            if (m > 63)
            {
                if (r > 1)
                {
                    in_m = m % 62;
                    if (in_m == 0)
                    {
                        in_m = 62;
                    }
                }
                else
                {
                    in_m = m % 62;
                }
            }
            else
            {
                in_m = m;
            }
            hurcil = in_m + 96;
            hursar = in_m + 64 - 26;
            angka = in_m + 47 - 52;
            if (hurcil == 97)
            {
                hurcil = 58;
            }

            if (in_m <= 27)
            {
                hurcil--;
                cout << char(hurcil) << " ";
            }
            else if (in_m <= 53)
            {
                hursar--;
                cout << char(hursar) << " ";
            }
            else if (in_m <= 63)
            {
                angka--;
                cout << char(angka) << " ";
            }
        }

        for (size_t l = 1; l < n - i; l++) /*pengulangan tanda " - "*/
        {
            cout << "- ";
        }
        cout << endl;
    }
    return 0;
}