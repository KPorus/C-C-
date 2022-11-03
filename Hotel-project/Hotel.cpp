#include<iostream>
#include<string>
#include<fstream>
using namespace  std;

class hotel
{
private:
    int quant,choise,day;
    //string spass = "154@faf";
    // choises
    int rchoise;
    // quantity of hotel item
    int qroom = 10, droom = 200, sroom = 500, qbread = 1000, qmilk = 5000, qroast = 4000, qbeef = 1000;
    // sell quantity of hotel item
    int  sbread = 0, smilk = 0, sroast = 0, sbeef = 0, sqroom = 0, sdroom = 0, ssroom = 0;
    // price of hotel sold item
    int total_qroom = 0, total_droom = 0, total_sroom = 0, total_food = 0, total_bread = 0, total_milk = 0, total_roast = 0, total_beef = 0;
public:
    string name;
    string pass;
    int userChoise;
    hotel();
    ~hotel();
};

hotel::hotel()
{

    system("cls");
    login:
    cout<<"\n\t\t\tWelcome to hotel Morning Star!!!!\n\n";
    cout<<"\t\t 1.New User registration\n";
    cout<<"\t\t 2.User Login\n";
    cout<<"\t\t 3.hotel Managment (Private)\n";
    cout<<"\t\t 4.Quit\n";
    cin>>userChoise;

    if(userChoise == 1)
    {
        cout<<"\t\tEnter your username:\t";
        cin>>name;
        cout<<"\t\tEnter your Eamil:\t";
        cin>>name;
        cout<<"\t\tSet-up your pass:\t";
        cin>>pass;
        fstream myFile;
        myFile.open("user-information.txt",ios::app);

            if(myFile.is_open())
            {
                myFile <<name<<endl;

                myFile <<pass<<endl;
                system("cls");
                cout<<"\t\t_________________register successfull____________________\n";
                myFile.close();
            }
            goto login;
    }

     if(userChoise == 2)
    {
        string id, user;
        cout<<"\t\tEnter your username:\t";
        cin>>name;
        cout<<"\t\tEnter your password:\t";
        cin>>pass;
        ifstream myFile("user-information.txt");
        int ok;
        while(myFile>>user>>id)
        {
            if(user == name && id == pass)
            {
                ok = 1;
                system("cls");
                break;
            }
            else{
                    system("cls");
                cout<<"\t\t______________________________________________________________________\n\n";
            cout<<"\t\t___________________________wrong pass or name. Try again!!!______________\n\n";
            }
        }

               myFile.close();
               if(ok == 1)
               {
                        m:
                        cout<<"\n\n\n\t\t\t Please check out the Menu: \n";
                        cout<<"\t\t1)Room\n";
                        cout<<"\t\t2)Food\n";
                        cout<<"\t\t3)Exit\n";

                        cout<<"\n\t\tWhat do you want? ";
                        cin>>choise;

                        switch (choise)
                        {
                        case 1:
                            cout<<"\n\n\t\t What kind of room do you want? ";
                            cout<<"\n\t\t1)Queen Bed";
                            cout<<"\n\t\t2)Double Bed";
                            cout<<"\n\t\t3)Single Bed\n\t\t";
                            cin>>rchoise;
                            if(rchoise == 1)
                            {
                                cout<<"\n\t\tHow Many Queen bed room do you want?\n\t\t";
                                cin>>quant;
                                if((qroom-sqroom) >=quant)
                                {
                                    cout<<"\n\t\t How many days you want to check in?\n\t\t";
                                    cin>>day;
                                    sqroom = sqroom + quant;
                                    total_qroom = (total_qroom+quant*4000)*day;
                                    cout<<"\n\t\t"<<quant<<" rooms have beed alloted.\n";
                                    cout<<"\n\t\tSir you have to pay "<<total_qroom<<" for stay of "<<day<<" days.\n\t\tYou can pay for room or later\n";
                                }
                                else
                                {
                                    cout<<"\n\t\tSorry sir we don't have much room.";
                                }

                            }
                            if(rchoise == 2)
                            {
                                cout<<"\n\t\tHow Many Double bed room do you want?\n\t\t";
                                cin>>quant;
                                if((droom-sdroom) >=quant)
                                {
                                    cout<<"\n\t\t How many days you want to check in?\n\t\t";
                                    cin>>day;
                                    sdroom = sdroom + quant;
                                    total_droom = (total_droom+quant*2000)*day;
                                    cout<<"\n\t\t"<<quant<<" rooms have beed alloted.\n";
                                    cout<<"\n\t\tSir you have to pay "<<total_droom<<" for stay of "<<day<<" days.\n\t\tYou can pay for room or later\n";
                                }
                                else
                                {
                                    cout<<"\n\t\tSorry sir we don't have much room.";
                                }

                            }
                            if(rchoise == 3)
                            {
                                cout<<"\n\t\tHow Many Single bed room do you want?\n\t\t";
                                cin>>quant;
                                if((sroom-ssroom) >=quant)
                                {
                                    cout<<"\n\t\t How many days you want to check in?\n\t\t";
                                    cin>>day;
                                    ssroom = ssroom + quant;
                                    total_sroom = (total_sroom+quant*1000)*day;
                                    cout<<"\n\t\t"<<quant<<" rooms have beed alloted.\n";
                                    cout<<"\n\t\tSir you have to pay "<<total_sroom<<" for stay of "<<day<<" days.\n\t\tYou can pay for room or later\n";
                                }
                                else
                                {
                                    cout<<"\n\t\tSorry sir we don't have much room.";
                                }

                            }
                            break;

                        case 2:

                            cout<<"\n\t\tHere is the menu of foods:\n";
                            cout<<"\t\t1)bread\n";
                            cout<<"\t\t2)milk\n";
                            cout<<"\t\t3)roast\n";
                            cout<<"\t\t4)beef\n";

                            cout<<"\t\tWhat do you want? ";
                            cin>>choise;

                        if(choise == 1)
                        {
                            cout<<"\n\t\tHow much bread do you want sir? ";
                            cin>>quant;
                            if(qbread-sbread >= quant)
                            {
                                sbread = sbread + quant;
                                total_bread = (total_bread+quant*200);
                                cout<<"\n\t\t"<<quant<<" bread ordered.";
                            }
                            else{
                                cout<<"\n\t\tOnly "<<qbread-sbread<<" we have.\n";
                            }
                        }
                        if(choise == 2)
                        {
                            cout<<"\n\t\tHow much milk sake do you want sir? ";
                            cin>>quant;
                            if(qmilk-smilk >= quant)
                            {
                                smilk = smilk + quant;
                                total_milk = (total_milk+quant*150);
                                cout<<"\n\t\t"<<quant<<" milk sake ordered.";
                            }
                            else{
                                cout<<"\n\t\tOnly "<<qmilk-smilk<<" we have.\n";
                            }
                        }
                        if(choise == 3)
                        {
                            cout<<"\n\t\tHow much roast do you want sir? ";
                            cin>>quant;
                            if(qroast-sroast >= quant)
                            {
                                sroast = sroast + quant;
                                total_roast = (total_roast+quant*250);
                                cout<<"\n\t\t"<<quant<<" roast ordered.";
                            }
                            else{
                                cout<<"\n\t\tOnly "<<qroast-sroast<<" we have.\n";
                            }
                        }
                        if(choise == 4)
                        {
                            cout<<"\n\t\tHow much beef do you want sir? ";
                            cin>>quant;
                            if(qbeef-sbeef >= quant)
                            {
                                sbeef = sbeef + quant;
                                total_beef = (total_beef+quant*300);
                                cout<<"\n\t\t"<<quant<<" beef ordered.";
                            }
                            else{
                                cout<<"\n\t\tOnly "<<qbeef-sbeef<<" we have.\n";
                            }
                        }
                        else
                        {
                            cout<<"\n\t\tPlease select option from above.";
                        }
                        break;

                        case 3 :
                        system("cls");
                        goto login;
                        break;


                        default:
                        cout<<"\n\t\tPlease select option from above.\n\n";
                        system("cls");

                        }
                        goto m;


               }
               goto login;
            }

             if(userChoise == 3)
                {
                    string id = "154@faf";
                    cout<<"\t\t\tWelcome to hotel Morning star Admin panel\n\n";
                    cout<<"\t\t\tPlease enter your password:\n";
                    cin>>pass;

                       int ok;
                           if(id == pass)
                           {
                               ok = 1;
                           }
                           else
                           {
                               cout<<"\t\tWrong pass or name. Try again.\n";
                           }

                       if(ok == 1)
                       {
                           system("cls");
                           admin:
                            cout<<"\t\t1)Information regrading sales and collection(Only for manager)\n";
                            cout<<"\t\t2)Add hotel items quantity\n";
                            cout<<"\t\t3)Back to login page\n";
                            cin>>choise;

                            switch(choise)
                            {
                                case 1 :
                                    cout<<"\n\t\tDetails of sales and collections: ";
                                    cout<<"\n\t\t Rooms :";
                                    cout<<"\n Number Of Queen room we have: "<<qroom-sqroom;
                                    cout<<"\n Number of Queen room sales: "<<sqroom;
                                    cout<<"\n Total queen room collection according to guest staying: "<<total_qroom;
                                    cout<<"\n Number of double room we have: "<<droom - sdroom;
                                    cout<<"\n Number of double room sales: "<<sdroom;
                                    cout<<"\n Total double room collection according to guest staying: "<<total_droom;
                                    cout<<"\n Number of single room we have: "<<sroom - ssroom;
                                    cout<<"\n Number of single room sales: "<<ssroom;
                                    cout<<"\n Total single room collection according to guest staying: "<<total_sroom;

                                    cout<<"\n\t\t Foods :";
                                    cout<<"\n Number Of bread we have: "<<qbread-sbread;
                                    cout<<"\n Number of bread sales: "<<sbread;
                                    cout<<"\n Total bread collection of par day: "<<total_bread;
                                    cout<<"\n Number of Milk sake we have: "<<qmilk - smilk;
                                    cout<<"\n Number of Milk sake sales: "<<smilk;
                                    cout<<"\n Total milk collection of par day: "<<total_milk;
                                    cout<<"\n Number of roast we have: "<<qroast - sroast;
                                    cout<<"\n Number of roast sales: "<<sroast;
                                    cout<<"\n Total roast collection of par day: "<<total_roast;
                                    cout<<"\n Number of beef we have: "<<qbeef - sbeef;
                                    cout<<"\n Number of beef sales: "<<sbeef;
                                    cout<<"\n Total beef collection of par day: "<<total_beef;
                                if(choise == 1)
                                {

                                fstream hotelSaleFile;
                                hotelSaleFile.open("sales-and-collections.txt",ios::app);

                                    if(hotelSaleFile.is_open())
                                    {
                                        hotelSaleFile <<"\n Rooms quantity:"<<endl;
                                        hotelSaleFile <<"Number Of Queen room we have: "<<qroom-sqroom<<endl;
                                        hotelSaleFile <<"Number of Queen room sales: "<<sqroom<<endl;
                                        hotelSaleFile <<"Total queen room collection according to guest staying: "<<total_qroom<<endl;
                                        hotelSaleFile <<" Number of double room we have: "<<droom - sdroom<<endl;
                                        hotelSaleFile <<"Number of double room sales: "<<sdroom<<endl;
                                        hotelSaleFile <<"Total double room collection according to guest staying: "<<total_droom<<endl;
                                        hotelSaleFile <<"Number of single room we have: "<<sroom - ssroom<<endl;
                                        hotelSaleFile <<" Number of single room sales: "<<ssroom<<endl;
                                        hotelSaleFile <<"Total single room collection according to guest staying: "<<total_sroom<<endl;
                                        hotelSaleFile <<"Foods :"<<endl;
                                        hotelSaleFile <<"Number Of bread we have: "<<qbread-sbread<<endl;
                                        hotelSaleFile <<"Number of bread sales: "<<sbread<<endl;
                                        hotelSaleFile <<"Total bread collection of par day: "<<total_bread<<endl;
                                        hotelSaleFile <<"Number of Milk sake we have: "<<qmilk - smilk<<endl;
                                        hotelSaleFile <<"Number of Milk sake sales: "<<smilk<<endl;
                                        hotelSaleFile <<"Total milk collection of par day: "<<total_milk<<endl;
                                        hotelSaleFile <<"Total bread collection of par day: "<<total_bread<<endl;
                                        hotelSaleFile <<"Number of Milk sake we have: "<<qmilk - smilk<<endl;
                                        hotelSaleFile <<"Number of roast we have: "<<qroast - sroast<<endl;
                                        hotelSaleFile <<"Number of roast sales: "<<sroast<<endl;
                                        hotelSaleFile <<"Number of beef we have: "<<qbeef - sbeef<<endl;
                                        hotelSaleFile <<"Number of beef sales: "<<sbeef<<endl;
                                        hotelSaleFile <<"Total beef collection of par day: "<<total_beef<<endl;
                                        hotelSaleFile.close();
                                    }
                                }
                                break;
                                case 2:
                                cout<<"\n\t\t\tWelcome to hotel Morning Star!!!!\n\n";
                                cout<<"\n\n\t\tPlease enter Queen room quantity: ";
                                cin>>qroom;
                                cout<<"\n\n\t\tPlease enter Double room quantity: ";
                                cin>>droom;
                                cout<<"\n\n\t\tPlease enter Single room quantity: ";
                                cin>>sroom;
                                cout<<"\n\t\tPlease enter bread quantity: ";
                                cin>>qbread;
                                cout<<"\n\t\tPlease enter milk quantity: ";
                                cin>>qmilk;
                                cout<<"\n\t\tPlease enter roast quantity: ";
                                cin>>qroast;
                                cout<<"\n\t\tPlease enter beef quantity: ";
                                cin>>qbeef;
                                if(choise == 2)
                                {

                                fstream hotelFile;
                                hotelFile.open("hotel-sell-info.txt",ios::app);

                                    if(hotelFile.is_open())
                                    {
                                        hotelFile <<"\nQueen room quantity:"<<qroom<<endl;
                                        hotelFile <<"Double room quantity:"<<droom<<endl;
                                        hotelFile <<"Single room quantity:"<<sroom<<endl;
                                        hotelFile <<"bread quantity:"<<qbread<<endl;
                                        hotelFile <<"milk quantity:"<<qmilk<<endl;
                                        hotelFile <<"roast quantity:"<<qroast<<endl;
                                        hotelFile <<"beef quantity:"<<qbeef<<endl;

                                        hotelFile.close();
                                    }
                                }
                                  break;

                                 case 3 :
                                     system("cls");
                                    goto login;
                                    break;

                                    default:
                                    system("cls");
                                    cout<<"\n\t\tPlease select option from above.\n\n";


                            }
                            goto admin;
                       }

                    }
                if(userChoise == 4)
                {
                    exit(0);
                }
                if(userChoise > 4)
                {
                    system("cls");
                    cout<<"\t\t\tWrong choose!! if you want exit than press 4\n\n";
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
