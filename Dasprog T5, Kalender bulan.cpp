#include <iostream>

using namespace std;

int main()
{
    // Memasukkan bulan dan tahun
    int bln, thn;
    cout << "Tahun      : ";
    cin >> thn;
    cout << "Bulan      : ";
    cin >> bln;

    int nkbst = 0, kthn = thn - 1, tday = kthn * 365;
    
    for (int i = kthn; i >= 0; i--)
    {
        if (i % 400 == 0)
        {
            nkbst++;
        }
        else if (i % 100 != 0 && i % 400 != 0 && i % 4 == 0)
        {
            nkbst++;
        }
    }
    
    if (bln > 2)
    {
        if (thn % 400 == 0)
        {
            nkbst++;
        }
        else if (thn % 100 != 0 && thn % 400 != 0 && thn % 4 == 0)
        {
            nkbst++;
        }
    }

    string month[12] = {"       Januari      ", "      Februari      ", "       Maret        ", "       April        ", "        Mei         ",
                        "        Juni        ", "        Juli        ", "      Agustus       ", "     September      ", "      Oktober       ",
                        "      November      ", "      Desember      "};
    cout << endl
         << month[bln - 1] << endl;

    int b1 = 31, b2 = 28, b3 = 31, b4 = 30, b5 = 31, b6 = 30, b7 = 31, b8 = 31, b9 = 30, b10 = 31, b11 = 30, b12 = 31;

    int tnum;
    
    if (bln == 1)
    {
        tnum = 0;
        bln = b1;
    }
    else if (bln == 2)
    {
        tnum = b1;
        bln = b2;
    }
    else if (bln == 3)
    {
        tnum = b1 + b2;
        bln = b3;
    }
    else if (bln == 4)
    {
        tnum = b1 + b2 + b3;
        bln = b4;
    }
    else if (bln == 5)
    {
        tnum = b1 + b2 + b3 + b4;
        bln = b5;
    }
    else if (bln == 6)
    {
        tnum = b1 + b2 + b3 + b4 + b5;
        bln = b6;
    }
    else if (bln == 7)
    {
        tnum = b1 + b2 + b3 + b4 + b5 + b6;
        bln = b7;
    }
    else if (bln == 8)
    {
        tnum = b1 + b2 + b3 + b4 + b5 + b6 + b7;
        bln = b8;
    }
    else if (bln == 9)
    {
        tnum = b1 + b2 + b3 + b4 + b5 + b6 + b7 + b8;
        bln = b9;
    }
    else if (bln == 10)
    {
        tnum = b1 + b2 + b3 + b4 + b5 + b6 + b7 + b8 + b9;
        bln = b10;
    }
    else if (bln == 11)
    {
        tnum = b1 + b2 + b3 + b4 + b5 + b6 + b7 + b8 + b9 + b10;
        bln = b11;
    }
    else if (bln == 12)
    {
        tnum = b1 + b2 + b3 + b4 + b5 + b6 + b7 + b8 + b9 + b10 + b11;
        bln = b12;
    }

    tday = tday + nkbst + tnum;

    int modulday = tday % 7;

    cout << "Su Mo Tu We Th Fr Sa" << endl;

    for (int j = modulday; j > 0; j--)
    {
        cout << "   ";
    }
    
    int tgl = 1;
    
    for (int k = 1; k <= 7; k++)
    {
        int brs = 1;
        if (tgl < 10)
        {
            cout << " ";
        }
        cout << tgl << " ";

        if (brs == 1)
        {
            int nl = modulday + k;
            if (nl == 7)
            {
                cout << endl;
            }
        }
        else if (brs > 1)
        {
            if (k == 7)
            {
                cout << endl;
            }
        }

        tgl++;
        brs++;
        if (k >= 7)
        {
            k = 0;
        }
        if (tgl - 1 == bln)
        {
            break;
        }
    }
    return 0;
}
