#include <iostream>
#include <iomanip>
#include <conio.h>
#include <unistd.h>

using namespace std;
int main()
{
    int vara, Q, p, time, dev;
    dev = 1;
    char from, to, A;
    string Stopage, start, End, pros, s, P, l, i, sp;
    sp = " ";
    time = 0;
    pros = "processing.";
    s = ".";
    Stopage = "       1.Jatrabari\n       2.Gulistan\n       3.Press_club\n       4.Shahbagh\n       5.Elephant_road\n       6.kolabagan\n       7.MohammadPur\n       8.Shamoli\n       9.Mirpur1\n";
    P = "dev";
    while (dev < 3)
    {
        system("cls");
        system(" color 8E");
        i = "_526..\n";

        dev++;
        l = "eloper";
        P = P + l;
        P = P + i;
        cout << setw(60) << "WELLCOME TO TRANSSILVA BUS !\n\n\n";
        cout << setw(20) << "BUS STOPAGES: " << endl
             << setw(40) << Stopage << setw(120) << "developer_526..\n"
             << "select your location:";
        cin >> from;
        while (time != 1)
        {
            system("cls");
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n"
                 << setw(15) << pros;
            time++;
            pros = pros + s;
            sleep(1);
        }
        time = 0;
        pros = "processing.";
        system("cls");
        cout << "BUS STOPAGES:\n"
             << Stopage << setw(120) << P << endl
             << " Enter destination:";
        cin >> to;
        while (time != 1)
        {
            system("cls");
            cout << "\n\n\n"
                 << setw(50) << pros;
            time++;
            pros = pros + s;
            sleep(1);
        }
        time = 0;
        pros = "processing.";
        system("cls");
        switch (from)
        {
        case '1':
            start = "Jatrabari";
            switch (to)
            {
            case '1':
                vara = 0;
                End = "jatrabari";
                break;
            case '2':
                vara = 10;
                End = "Gulistan";
                break;
            case '3':
                vara = 15;
                End = "PressClub";
                break;
            case '4':
                vara = 20;
                End = "Shahbagh";
                break;
            case '5':
                vara = 25;
                End = "Elephant Road";
                break;
            case '6':
                vara = 30;
                End = "Kolabagan";
                break;
            case '7':
                vara = 35;
                End = "MohammadPur";
                break;
            case '8':
                vara = 40;
                End = "Shamoli";
                break;
            case '9':
                vara = 45;
                End = "Mirpur 1";
                break;
            default:
                cout << setw(50) << "Wrong input !";
                return 0;
                break;
            }
            break;

        case '2':
            start = "Gulistan";
            switch (to)
            {
            case '1':
                vara = 10;
                ;
                End = "jatrabari";
                break;
            case '2':
                vara = 0;
                ;
                End = "Gulistan";
                break;
            case '3':
                vara = 10;
                End = "PressClub";
                break;
            case '4':
                vara = 15;
                End = "Shahbagh";
                break;
            case '5':
                vara = 20;
                End = "Elephant Road";
                break;
            case '6':
                vara = 25;
                End = "Kolabagan";
                break;
            case '7':
                vara = 30;
                End = "MohammadPur";
                break;
            case '8':
                vara = 35;
                End = "Shamoli";
                break;
            case '9':
                vara = 40;
                End = "Mirpur 1";
            default:
                cout << setw(50) << "Wrong input !";
                return 0;
                break;
                break;
            }
            break;

        case '3':
            start = "Press Club";
            switch (to)
            {
            case '1':
                vara = 15;
                End = "jatrabari";
                break;
            case '2':
                vara = 10;
                End = "Gulistan";
                break;
            case '3':
                vara = 0;
                End = "PressClub";
                break;
            case '4':
                vara = 10;
                End = "Shahbagh";
                break;
            case '5':
                vara = 15;
                End = "Elephant Road";
                break;
            case '6':
                vara = 20;
                End = "Kolabagan";
                break;
            case '7':
                vara = 25;
                End = "MohammadPur";
                break;
            case '8':
                vara = 30;
                End = "Shamoli";
                break;
            case '9':
                vara = 35;
                End = "Mirpur 1";
                break;
            default:
                cout << setw(50) << "Wrong input !";
                return 0;
                break;
            }
            break;
        case '4':
            start = "Shahbag ";
            switch (to)
            {
            case '1':
                vara = 20;
                End = "jatrabari";
                break;
            case '2':
                vara = 15;
                End = "Gulistan";
                break;
            case '3':
                vara = 10;
                End = "PressClub";
                break;
            case '4':
                vara = 0;
                End = "Shahbagh";
                break;
            case '5':
                vara = 10;
                End = "Elephant Road";
                break;
            case '6':
                vara = 15;
                End = "Kolabagan";
                break;
            case '7':
                vara = 20;
                End = "MohammadPur";
                break;
            case '8':
                vara = 25;
                End = "Shamoli";
                break;
            case '9':
                vara = 30;
                End = "Mirpur 1";
                break;
            default:
                cout << setw(50) << "Wrong input !";
                return 0;
                break;
            }
            break;
        case '5':
            start = "Elephant Road";
            switch (to)
            {
            case '1':
                vara = 25;
                End = "jatrabari";
                break;
            case '2':
                vara = 20;
                End = "Gulistan";
                break;
            case '3':
                vara = 15;
                End = "PressClub";
                break;
            case '4':
                vara = 10;
                End = "Shahbagh";
                break;
            case '5':
                vara = 0;
                End = "Elephant Road";
                break;
            case '6':
                vara = 10;
                End = "Kolabagan";
                break;
            case '7':
                vara = 15;
                End = "MohammadPur";
                break;
            case '8':
                vara = 20;
                End = "Shamoli";
                break;
            case '9':
                vara = 25;
                End = "Mirpur 1";
                break;
            default:
                cout << setw(50) << "Wrong input !";
                return 0;
                break;
            }
            break;
        case '6':
            start = "Kolabagan";
            switch (to)
            {
            case '1':
                vara = 30;
                End = "jatrabari";
                break;
            case '2':
                vara = 25;
                End = "Gulistan";
                break;
            case '3':
                vara = 20;
                End = "PressClub";
                break;
            case '4':
                vara = 15;
                End = "Shahbagh";
                break;
            case '5':
                vara = 10;
                End = "Elephant Road";
                break;
            case '6':
                vara = 0;
                End = "Kolabagan";
                break;
            case '7':
                vara = 10;
                End = "MohammadPur";
                break;
            case '8':
                vara = 15;
                End = "Shamoli";
                break;
            case '9':
                vara = 20;
                End = "Mirpur 1";
                break;
            default:
                cout << setw(50) << "Wrong input !";
                return 0;
                break;
            }
            break;
        case '7':
            start = "MohammadPur";
            switch (to)
            {
            case '1':
                vara = 35;
                End = "jatrabari";
                break;
            case '2':
                vara = 30;
                End = "Gulistan";
                break;
            case '3':
                vara = 25;
                End = "PressClub";
                break;
            case '4':
                vara = 20;
                End = "Shahbagh";
                break;
            case '5':
                vara = 15;
                End = "Elephant Road";
                break;
            case '6':
                vara = 10;
                End = "Kolabagan";
                break;
            case '7':
                vara = 0;
                End = "MohammadPur";
                break;
            case '8':
                vara = 10;
                End = "Shamoli";
                break;
            case '9':
                vara = 15;
                End = "Mirpur 1";
                break;
            default:
                cout << setw(50) << "Wrong input !";
                return 0;
                break;
            }
            break;
        case '8':
            start = "Shamoli";
            switch (to)
            {
            case '1':
                vara = 40;
                End = "jatrabari";
                break;
            case '2':
                vara = 35;
                End = "Gulistan";
                break;
            case '3':
                vara = 30;
                End = "PressClub";
                break;
            case '4':
                vara = 25;
                End = "Shahbagh";
                break;
            case '5':
                vara = 20;
                End = "Elephant Road";
                break;
            case '6':
                vara = 15;
                End = "Kolabagan";
                break;
            case '7':
                vara = 10;
                End = "MohammadPur";
                break;
            case '8':
                vara = 0;
                End = "Shamoli";
                break;
            case '9':
                vara = 10;
                End = "Mirpur 1";
                break;
            default:
                cout << setw(50) << "Wrong input !";
                return 0;
                break;
            }
            break;
        case '9':
            start = "Mirpur 1";
            switch (to)
            {
            case '1':
                vara = 45;
                End = "jatrabari";
                break;
            case '2':
                vara = 40;
                End = "Gulistan";
                break;
            case '3':
                vara = 35;
                End = "PressClub";
                break;
            case '4':
                vara = 30;
                End = "Shahbag";
                break;
            case '5':
                vara = 25;
                End = "Elephant Road";
                break;
            case '6':
                vara = 20;
                End = "Kolabagan";
                break;
            case '7':
                vara = 15;
                End = "Mohammad Pur";
                break;
            case '8':
                vara = 10;
                End = "Shamoli";
                break;
            case '9':
                vara = 0;
                End = "Mirpur1";
                break;
            default:
                cout << setw(50) << "Wrong input !";
                return 0;
                break;
            }
            break;
        default:
            cout << setw(50) << "Wrong input !";
            return 0;
            break;
        }
        cout << "\n\n\n"
             << setw(50) << " Ticket_Qantity: ";
        cin >> Q;
        char st;
        cout << "student ?\n if so press 1";
        st = getch();
        if (st == '1')
        {
            vara = vara / 2;
            sp = "student pass added !";
        }
        system("cls");
        system(" color 8f");

        while (time != 4)
        {
            system("cls");
            cout << "\n\n\n"
                 << setw(50) << pros;
            time++;
            pros = pros + s;
            sleep(1);
        }

        if (Q < 6 && Q != 0)
        {
            p = vara * Q;

            system("cls");
            cout << "\n\n\n";
            cout << setw(60) << "| _________________________  |" << endl;
            cout << setw(60) << "|    -TRANSSILVA LIMITED-    |" << endl;
            cout << setw(60) << "|  ------------------------  |" << endl;
            cout << endl;

            cout << setw(60) << "|   -_-_-_-_-_-_-_-_-_-_-_-  |" << endl;
            cout << setw(41) << "  From-->  " << start << "     " << endl;
            cout << setw(60) << "|  ------------------------  |" << endl;
            cout << setw(39) << "  To---->" << End << "      " << endl;
            cout << setw(60) << "|  _-_-_-_-_-_-_-_-_-_-_-_-  |" << endl;
            cout << endl;
            cout << setw(38) << "| ----- " << Q << " TICKETS  --------  |" << endl;
            cout << setw(47) << "    Ticket price:" << vara << "*" << Q << "=" << p << " Tk" << endl;
            cout << setw(60) << "| thank you, enjoy the ride  |" << endl;
            cout << setw(60) << "| _________________________  |" << endl;
            cout << setw(60) << sp << endl;
            cout << setw(120) << P;
        }
        else if (Q > 5)
        {
            system("cls");
            system(" color 8c");
            cout << " ERROR \n TOO MANY TICKET SELECTED \n please close the app and try again";
            cout << setw(200) << P;
        }
        A = getch();
        if (A == 13)
        {
            break;
        }
    }
}
