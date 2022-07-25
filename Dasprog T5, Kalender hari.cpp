#include <iostream>

using namespace std;

int main()
{
    int tgl, bln, thn;
    cout << "Tanggal    : ";
    cin >> tgl;
    cout << "Bulan      : ";
    cin >> bln;
    cout << "Tahun      : ";
    cin >> thn;

    // Total day of each month (with 28 days of February)
    int b1 = 31, b2 = 28, b3 = 31, b4 = 30, b5 = 31, b6 = 30, b7 = 31, b8 = 31, b9 = 30, b10 = 31, b11 = 30, b12 = 31;
    
    // tbln = Total day of a year (with 28 days of February)
    int tbln = b1 + b2 + b3 + b4 + b5 + b6 + b7 + b8 + b9 + b10 + b11 + b12;
    
    // The year start from 0 C
    int tthn = thn - 1;
    int nk = 0, kthn = thn, tday = tthn * tbln;

    // Check if the year has a leap day
    for (int i = thn; i >= 0; i--)
    {
        kthn--;
        if (kthn % 400 == 0)
        {
            nk++;
        }
        if (kthn % 100 != 0 && kthn % 4 == 0)
        {
            nk++;
        }
    }
    
    // Add 1 day if the year is a leap year
    tday = tday + nk;
    
/*  // Not really necessary
    if (thn % 400 == 0){b2 = b2 + 1;}else 
*/
    
    if (thn % 100 != 0 && thn % 400 != 0 && thn % 4 == 0)
    {
        b2 = b2 + 1;
    }

    // Adding the total amount of day the input year has
    int tnum;
    if (bln == 1)
    {
        tnum = tgl;
    }
    else if (bln == 2)
    {
        tnum = tgl + b1;
    }
    else if (bln == 3)
    {
        tnum = tgl + b1 + b2;
    }
    else if (bln == 4)
    {
        tnum = tgl + b1 + b2 + b3;
    }
    else if (bln == 5)
    {
        tnum = tgl + b1 + b2 + b3 + b4;
    }
    else if (bln == 6)
    {
        tnum = tgl + b1 + b2 + b3 + b4 + b5;
    }
    else if (bln == 7)
    {
        tnum = tgl + b1 + b2 + b3 + b4 + b5 + b6;
    }
    else if (bln == 8)
    {
        tnum = tgl + b1 + b2 + b3 + b4 + b5 + b6 + b7;
    }
    else if (bln == 9)
    {
        tnum = tgl + b1 + b2 + b3 + b4 + b5 + b6 + b7 + b8;
    }
    else if (bln == 10)
    {
        tnum = tgl + b1 + b2 + b3 + b4 + b5 + b6 + b7 + b8 + b9;
    }
    else if (bln == 11)
    {
        tnum = tgl + b1 + b2 + b3 + b4 + b5 + b6 + b7 + b8 + b9 + b10;
    }
    else if (bln == 12)
    {
        tnum = tgl + b1 + b2 + b3 + b4 + b5 + b6 + b7 + b8 + b9 + b10 + b11;
    }
    
    // Because the year start from 0 C, we add the input year total day with all the day of the year before to 0 C
    tday = tday + tnum;

    // Determining the day by using modulo 
    int modulday;
    modulday = tday % 7;

    cout << endl
         << "Merupakan hari : ";

    switch (modulday)
    {
    case 0:
        cout << "Sabtu";
        break;
    case 1:
        cout << "Minggu";
        break;
    case 2:
        cout << "Senin";
        break;
    case 3:
        cout << "Selasa";
        break;
    case 4:
        cout << "Rabu";
        break;
    case 5:
        cout << "Kamis";
        break;
    case 6:
        cout << "Jumat";
        break;
    }
    return 0;
}
