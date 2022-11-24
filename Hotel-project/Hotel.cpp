#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class hotel
{
private:
    int quant, choise, day;
    // string spass = "154@faf";
    //  choises
    int rchoise;
    // quantity of hotel item
    int qroom = 10, droom = 200, sroom = 500, qbread = 1000, qmilk = 5000, qroast = 4000, qbeef = 1000;
    // sell quantity of hotel item
    int sbread = 0, smilk = 0, sroast = 0, sbeef = 0, sqroom = 0, sdroom = 0, ssroom = 0;
    // price of hotel sold item
    int total_qroom = 0, total_droom = 0, total_sroom = 0, total_food = 0, total_bread = 0, total_milk = 0, total_roast = 0, total_beef = 0;
    // quant of user
    int qquant = 0, dquant = 0, squant = 0, bquant = 0, mquant = 0, rquant = 0, bequant = 0;

public:
    string name;
    string pass;
    int userChoise;
    hotel();
    void recipt();
    ~hotel();
};

hotel::hotel()
{

    system("cls");
login:
    std::cout << "\n\t\t\tWelcome to hotel Morning Star!!!!\n\n";
    std::cout << "\t\t 1.Login\n";
    std::cout << "\t\t 2.Registration\n";
    std::cout << "\t\t 3.Availability (Private)\n";
    std::cout << "\t\t 4.Quit\n";
    std::cin >> userChoise;

    if (userChoise == 2)
    {
        std::cout << "\t\tEnter your username:\t";
        std::cin >> name;
        std::cout << "\t\tSet-up your pass:\t";
        std::cin >> pass;
        fstream myFile;
        myFile.open("user-information", ios::app);

        if (myFile.is_open())
        {
            myFile << name << endl;

            myFile << pass << endl;
            system("cls");
            cout << "\t\t_________________Register successfull____________________\n";
            myFile.close();
        }
        goto login;
    }

    if (userChoise == 1)
    {
        string id, user;
        std::cout << "\t\tEnter your username:\t";
        std::cin >> name;
        std::cout << "\t\tEnter your password:\t";
        std::cin >> pass;
        ifstream myFile("user-information.txt");
        int ok;
        while (myFile >> user >> id)
        {
            if ((user == name) && (id == pass))
            {
                ok = 1;
                system("cls");
                break;
            }
            else
            {
                system("cls");
                std::cout << "\t\t______________________________________________________________________\n\n";
                std::cout << "\t\t___________________________Wrong pass or name. Try again!!!______________\n\n";
            }
        }

        myFile.close();
        if (ok == 1)
        {
        m:
            std::cout << "\n\n\n\t\t\t Please check out the Menu: \n";
            std::cout << "\t\t1)Room\n";
            std::cout << "\t\t2)Food\n";
            std::cout << "\t\t3)Exit\n";

            std::cout << "\n\t\tWhat do you want? ";
            std::cin >> choise;

            switch (choise)
            {
            case 1:
                std::cout << "\n\n\t\t What kind of room do you want? ";
                std::cout << "\n\t\t1)Queen Bed";
                std::cout << "\n\t\t2)Double Bed";
                std::cout << "\n\t\t3)Single Bed\n\t\t";
                std::cin >> rchoise;
                if (rchoise == 1)
                {
                    std::cout << "\n\t\tHow Many Queen bed room do you want?\n\t\t";
                    std::cin >> qquant;
                    if ((qroom - sqroom) >= qquant)
                    {
                        std::cout << "\n\t\t How many days you want to check in?\n\t\t";
                        std::cin >> day;
                        sqroom = sqroom + qquant;
                        total_qroom = (total_qroom + qquant * 4000) * day;
                        std::cout << "\n\t\t" << qquant << " rooms have beed alloted.\n";
                        std::cout << "\n\t\tSir you have to pay " << total_qroom << " for stay of " << day << " days.\n\t\tYou can recive your recipt\n";
                    }
                    else
                    {
                        std::cout << "\n\t\tSorry sir we don't have much room.";
                    }
                }
                if (rchoise == 2)
                {
                    std::cout << "\n\t\tHow Many Double bed room do you want?\n\t\t";
                    std::cin >> dquant;
                    if ((droom - sdroom) >= dquant)
                    {
                        std::cout << "\n\t\t How many days you want to check in?\n\t\t";
                        std::cin >> day;
                        sdroom = sdroom + dquant;
                        total_droom = (total_droom + dquant * 2000) * day;
                        std::cout << "\n\t\t" << dquant << " rooms have beed alloted.\n";
                        std::cout << "\n\t\tSir you have to pay " << total_droom << " for stay of " << day << " days.\n\t\tYou can pay for room or later\n";
                    }
                    else
                    {
                        std::cout << "\n\t\tSorry sir we don't have much room.";
                    }
                }
                if (rchoise == 3)
                {
                    std::cout << "\n\t\tHow Many Single bed room do you want?\n\t\t";
                    std::cin >> squant;
                    if ((sroom - ssroom) >= squant)
                    {
                        std::cout << "\n\t\t How many days you want to check in?\n\t\t";
                        std::cin >> day;
                        ssroom = ssroom + squant;
                        total_sroom = (total_sroom + dquant * 1000) * day;
                        std::cout << "\n\t\t" << squant << " rooms have beed alloted.\n";
                        std::cout << "\n\t\tSir you have to pay " << total_sroom << " for stay of " << day << " days.\n\t\tYou can pay for room or later\n";
                    }
                    else
                    {
                        std::cout << "\n\t\tSorry sir we don't have much room.";
                    }
                }

                if (rchoise > 4)
                {
                    system("cls");
                    goto m;
                }
                break;

            case 2:

                std::cout << "\n\t\tHere is the menu of foods:\n";
                std::cout << "\t\t1)bread\n";
                std::cout << "\t\t2)milk\n";
                std::cout << "\t\t3)roast\n";
                std::cout << "\t\t4)beef\n";

                std::cout << "\t\tWhat do you want? ";
                std::cin >> choise;

                if (choise == 1)
                {
                    std::cout << "\n\t\tHow much bread do you want sir? ";
                    std::cin >> bquant;
                    if (qbread - sbread >= bquant)
                    {
                        sbread = sbread + bquant;
                        total_bread = (total_bread + bquant * 200);
                        std::cout << "\n\t\t" << bquant << " bread ordered.";
                    }
                    else
                    {
                        std::cout << "\n\t\tOnly " << qbread - sbread << " we have.\n";
                    }
                }
                if (choise == 2)
                {
                    std::cout << "\n\t\tHow much milk sake do you want sir? ";
                    std::cin >> mquant;
                    if (qmilk - smilk >= mquant)
                    {
                        smilk = smilk + mquant;
                        total_milk = (total_milk + mquant * 150);
                        std::cout << "\n\t\t" << mquant << " milk sake ordered.";
                    }
                    else
                    {
                        std::cout << "\n\t\tOnly " << qmilk - smilk << " we have.\n";
                    }
                }
                if (choise == 3)
                {
                    std::cout << "\n\t\tHow much roast do you want sir? ";
                    std::cin >> rquant;
                    if (qroast - sroast >= rquant)
                    {
                        sroast = sroast + rquant;
                        total_roast = (total_roast + rquant * 250);
                        std::cout << "\n\t\t" << rquant << " roast ordered.";
                    }
                    else
                    {
                        std::cout << "\n\t\tOnly " << qroast - sroast << " we have.\n";
                    }
                }
                if (choise == 4)
                {
                    std::cout << "\n\t\tHow much beef do you want sir? ";
                    std::cin >> bequant;
                    if (qbeef - sbeef >= bequant)
                    {
                        sbeef = sbeef + bequant;
                        total_beef = (total_beef + bequant * 300);
                        std::cout << "\n\t\t" << bequant << " beef ordered.";
                    }
                    else
                    {
                        std::cout << "\n\t\tOnly " << qbeef - sbeef << " we have.\n";
                    }
                }
                else
                {
                    std::cout << "\n\t\tPlease select option from above.";
                }
                break;

            case 3:

                system("cls");

                std::cout << "\n\n\t\t============Here is your Recipt===========" << endl;
                if (total_qroom > 0)
                {
                    std::cout << "\n\t\tSir you have to pay " << total_qroom << " for stay of " << day << " days.\n";
                    std::cout << "\t\tSir you have to allowed " << qquant << " queen bed room.\n";
                    std::cout << "\t\tPayment successful \n";
                }
                if (total_droom > 0)
                {
                    std::cout << "\t\tSir you have to pay " << total_droom << " for stay of " << day << " days.\n";
                    std::cout << "\t\tSir you have to allowed " << dquant << " double bed room\n";
                    std::cout << "\t\tPayment successful \n";
                }
                if (total_sroom > 0)
                {
                    std::cout << "\t\tSir you have to pay " << total_sroom << " for stay of " << day << " days.\n";
                    std::cout << "\t\tSir you have to allowed " << squant << " single bed room\n";
                    std::cout << "\t\tPayment successful \n";
                }
                if (total_bread > 0)
                {
                    std::cout << "\t\tSir you have to pay " << total_bread << " for bread.\n";
                    std::cout << "\t\tSir you buy " << bquant << " bread \n";
                    std::cout << "\t\tPayment successful \n";
                }
                if (total_milk > 0)
                {
                    std::cout << "\t\tSir you have to pay " << total_milk << " for milk.\n";
                    std::cout << "\t\tSir you buy " << mquant << " ml milk\n";
                    std::cout << "\t\tPayment successful \n";
                }
                if (total_roast > 0)
                {
                    std::cout << "\t\tSir you have to pay " << total_roast << " for roast.\n";
                    std::cout << "\t\tSir you buy " << rquant << " roast \n";
                    std::cout << "\t\tPayment successful \n";
                }
                if (total_beef > 0)
                {
                    std::cout << "\t\tSir you have to pay " << total_beef << " for beef \n";
                    std::cout << "\t\tSir you buy " << bequant << " beef \n";
                    std::cout << "\t\tPayment successful \n";
                }

                std::cout << "\n\t\tExit to Main Menu\n Press 0;";
                std::cin >> choise;
                system("cls");
                if (choise == 0)
                {
                    total_beef = 0;
                    total_bread = 0;
                    total_droom = 0;
                    total_milk = 0;
                    total_roast = 0;
                    total_qroom = 0;
                    total_sroom = 0;
                    bequant = 0;
                    rquant = 0;
                    mquant = 0;
                    bquant = 0;
                    qquant = 0;
                    dquant = 0;
                    squant = 0;
                    goto login;
                }
                break;

            default:
                std::cout << "\n\t\tPlease select option from above.\n\n";
                system("cls");
            }
            goto m;
        }
        goto login;
    }

    if (userChoise == 3)
    {
        string id = "154@faf";
        std::cout << "\t\t\tWelcome to hotel Morning star Admin panel\n\n";
        std::cout << "\t\t\tPlease enter your password:\n";
        std::cin >> pass;

        int ok;
        if (id == pass)
        {
            ok = 1;
        }
        else
        {
            std::cout << "\t\tWrong pass or name. Try again.\n";
        }

        if (ok == 1)
        {
            system("cls");
        admin:
            std::cout << "\t\t1)Information regrading sales and collection(Only for manager)\n";
            std::cout << "\t\t2)Add hotel items quantity\n";
            std::cout << "\t\t3)Back to login page\n";
            std::cin >> choise;

            switch (choise)
            {
            case 1:
                std::cout << "\n\t\tDetails of sales and collections: ";
                std::cout << "\n\t\t Rooms :";
                std::cout << "\n Number Of Queen room we have: " << qroom - sqroom;
                std::cout << "\n Number of Queen room sales: " << sqroom;
                std::cout << "\n Total queen room collection according to guest staying: " << total_qroom;
                std::cout << "\n Number of double room we have: " << droom - sdroom;
                std::cout << "\n Number of double room sales: " << sdroom;
                std::cout << "\n Total double room collection according to guest staying: " << total_droom;
                std::cout << "\n Number of single room we have: " << sroom - ssroom;
                std::cout << "\n Number of single room sales: " << ssroom;
                std::cout << "\n Total single room collection according to guest staying: " << total_sroom;

                std::cout << "\n\t\t Foods :";
                std::cout << "\n Number Of bread we have: " << qbread - sbread;
                std::cout << "\n Number of bread sales: " << sbread;
                std::cout << "\n Total bread collection of par day: " << total_bread;
                std::cout << "\n Number of Milk sake we have: " << qmilk - smilk;
                std::cout << "\n Number of Milk sake sales: " << smilk;
                std::cout << "\n Total milk collection of par day: " << total_milk;
                std::cout << "\n Number of roast we have: " << qroast - sroast;
                std::cout << "\n Number of roast sales: " << sroast;
                std::cout << "\n Total roast collection of par day: " << total_roast;
                std::cout << "\n Number of beef we have: " << qbeef - sbeef;
                std::cout << "\n Number of beef sales: " << sbeef;
                std::cout << "\n Total beef collection of par day: " << total_beef;
                if (choise == 1)
                {

                    fstream hotelSaleFile;
                    hotelSaleFile.open("sales-and-collections.txt", ios::app);

                    if (hotelSaleFile.is_open())
                    {
                        hotelSaleFile << "\n Rooms quantity:" << endl;
                        hotelSaleFile << "Number Of Queen room we have: " << qroom - sqroom << endl;
                        hotelSaleFile << "Number of Queen room sales: " << sqroom << endl;
                        hotelSaleFile << "Total queen room collection according to guest staying: " << total_qroom << endl;
                        hotelSaleFile << " Number of double room we have: " << droom - sdroom << endl;
                        hotelSaleFile << "Number of double room sales: " << sdroom << endl;
                        hotelSaleFile << "Total double room collection according to guest staying: " << total_droom << endl;
                        hotelSaleFile << "Number of single room we have: " << sroom - ssroom << endl;
                        hotelSaleFile << " Number of single room sales: " << ssroom << endl;
                        hotelSaleFile << "Total single room collection according to guest staying: " << total_sroom << endl;
                        hotelSaleFile << "Foods :" << endl;
                        hotelSaleFile << "Number Of bread we have: " << qbread - sbread << endl;
                        hotelSaleFile << "Number of bread sales: " << sbread << endl;
                        hotelSaleFile << "Total bread collection of par day: " << total_bread << endl;
                        hotelSaleFile << "Number of Milk sake we have: " << qmilk - smilk << endl;
                        hotelSaleFile << "Number of Milk sake sales: " << smilk << endl;
                        hotelSaleFile << "Total milk collection of par day: " << total_milk << endl;
                        hotelSaleFile << "Total bread collection of par day: " << total_bread << endl;
                        hotelSaleFile << "Number of Milk sake we have: " << qmilk - smilk << endl;
                        hotelSaleFile << "Number of roast we have: " << qroast - sroast << endl;
                        hotelSaleFile << "Number of roast sales: " << sroast << endl;
                        hotelSaleFile << "Number of beef we have: " << qbeef - sbeef << endl;
                        hotelSaleFile << "Number of beef sales: " << sbeef << endl;
                        hotelSaleFile << "Total beef collection of par day: " << total_beef << endl;
                        hotelSaleFile.close();
                    }
                }
                break;
            case 2:
                std::cout << "\n\t\t\tWelcome to hotel Morning Star!!!!\n\n";
                std::cout << "\n\n\t\tPlease enter Queen room quantity: ";
                std::cin >> qroom;
                std::cout << "\n\n\t\tPlease enter Double room quantity: ";
                std::cin >> droom;
                std::cout << "\n\n\t\tPlease enter Single room quantity: ";
                std::cin >> sroom;
                std::cout << "\n\t\tPlease enter bread quantity: ";
                std::cin >> qbread;
                std::cout << "\n\t\tPlease enter milk quantity: ";
                std::cin >> qmilk;
                std::cout << "\n\t\tPlease enter roast quantity: ";
                std::cin >> qroast;
                std::cout << "\n\t\tPlease enter beef quantity: ";
                std::cin >> qbeef;
                system("cls");
                if (choise == 2)
                {

                    fstream hotelFile;
                    hotelFile.open("hotel-sell-info.txt", ios::app);

                    if (hotelFile.is_open())
                    {
                        hotelFile << "\nQueen room quantity:" << qroom << endl;
                        hotelFile << "Double room quantity:" << droom << endl;
                        hotelFile << "Single room quantity:" << sroom << endl;
                        hotelFile << "bread quantity:" << qbread << endl;
                        hotelFile << "milk quantity:" << qmilk << endl;
                        hotelFile << "roast quantity:" << qroast << endl;
                        hotelFile << "beef quantity:" << qbeef << endl;

                        hotelFile.close();
                    }
                }
                break;

            case 3:
                system("cls");
                goto login;
                break;

            default:
                system("cls");
                std::cout << "\n\t\tPlease select option from above.\n\n";
            }
            goto admin;
        }
    }
    if (userChoise == 4)
    {
        exit(0);
    }
    if (userChoise > 4)
    {
        system("cls");
        std::cout << "\t\t\tWrong choose!! if you want exit than press 4\n\n";
        goto login;
    }
}

hotel::~hotel()
{
}

int main()
{
    system("COLOR 0A");
    hotel ob;
}
