#include <iostream>

using namespace std;

int main()
{
    double salesperson[10][3] = {{2400, 3500, 2000},
                                 {1500, 7000, 1000},
                                 {600, 450, 2100},
                                 {790, 240, 500},
                                 {1000, 1000, 1000},
                                 {6300, 7000, 8000},
                                 {1300, 450, 700},
                                 {2700, 5500, 6000},
                                 {4700, 4800, 4900},
                                 {1200, 1300, 400}};
    double bonusrate = 0.0;
    double bonus = 0.0;
    int total = 0;
    double totalbonus = 0.0;

    cout << "Enter the rate of the bonus: ";
    cin >> bonusrate;

    for (int salesman = 0; salesman < 10; salesman += 1)
    {
        for (int month = 0; month < 3; month += 1)
        {
            total += salesperson[salesman][month];
        }
        bonus = total * bonusrate;
        totalbonus += bonus;

        cout << "Salesperson " << salesman + 1
             << ":" << endl;
        cout << "    Total Sales: $"
             << total << endl;
        cout << "    Bonus: $"
             << bonus << endl;

        total = 0;
        bonus = 0.0;
    }

    cout << "Total bonuses is $" <<
         totalbonus << endl;
    return 0;
}
