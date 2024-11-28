#include <iostream>
using namespace std;

class Action
{
    public:
    void actionDisplay()
    {
        cout << "---------------Best Top 5 Action Webseries / Movies of AmazonPrime are-----------------" <<endl <<endl;
        cout << "S.NO    Name                      Director Name          Year Of Ariving        IMDB Rating" <<endl;
        cout << "1.   Reacher                      Ben Kentai                 2016                7.8/10" <<endl;
        cout << "2. The Terminal List             Antoine Fuqua               2018                7.9/10" <<endl;
        cout << "3. Tom Clancy's Jack Ryan        Carlton Cuse                2018                8/10" <<endl;
        cout << "4.   Citadel                 Newton Thomas Sigel             2023                6.2/10" <<endl;
        cout << "5. Mr & Mrs. Smith                Doug Liman                 2024                6.9/10" <<endl <<endl;
    }    
};

class Thriller
{
    public:
    void thrillerDisplay()
    {
        cout << "---------------Best Top 5 Thriller Webseries / Movies of AmazonPrime are---------------" <<endl <<endl;
        cout << "S.NO    Name                      Director Name          Year Of Ariving        IMDB Rating" <<endl;
        cout << "1.   Homecoming                     Sam Esmail               2018                7.5/10" <<endl;
        cout << "2.   Jack Ryan                    Graham Roland              2018                8.0/10" <<endl;
        cout << "3.   The Wilds                   Sarah Streicher             2020                7.3/10" <<endl;
        cout << "4.    Hanna                        David Farr                2019                7.6/10" <<endl;
        cout << "5.    Bosch                     Eric Ellis Overmyer          2014                8.5/10" <<endl <<endl;
    }
};

class Horror
{
     public:
    void horrorDisplay()
    {
        cout << "---------------Best Top 5 Horror Webseries / Movies of AmazonPrime are-----------------" <<endl <<endl;
        cout << "S.NO    Name                      Director Name          Year Of Ariving        IMDB Rating" <<endl;
        cout << "1.  The Exorcist                   Rupert Wyatt              2016                7.9/10" <<endl;
        cout << "2.  Supernatural                   Eric Kripke               2005                8.4/10" <<endl;
        cout << "3.  Penny Dreadful                 John Loganr               2014                8.2/10" <<endl;
        cout << "4.   Bates Motel                   Kerry Ehrin               2013                8.1/10" <<endl;
        cout << "5.   The Terror                    Edward Berger             2018                8.0/10" <<endl <<endl;
    }
};

class Sci_Fi
{
     public:
    void scifiDisplay()
    {
        cout << "---------------Best Top 5 SciFi Webseries / Movies of AmazonPrime are-----------------" <<endl <<endl;
        cout << "S.NO    Name                      Director Name          Year Of Ariving        IMDB Rating" <<endl;
        cout << "1.   The Expanse                    Breck Eisner             2015                8.5/10" <<endl;
        cout << "2. The Man in the High Castle      Daniel Percival           2015                7.9/10" <<endl;
        cout << "3.  Tales from the Loop             Mark Romanek             2020                7.5/10" <<endl;
        cout << "4. Philip K. Dick's Electric Dreams| Michael Dinner          2017                7.2/10" <<endl;
        cout << "5.   The Peripheral                 Vincenzo Natali          2022                8.0/10" <<endl <<endl;
    }
};

class Fantasy
{ 
    public:
    void fantasyDisplay()
    {
        cout << "---------------Best Top 5 Fantasy Webseries / Movies of AmazonPrime are-----------------" <<endl <<endl;
        cout << "S.NO    Name                      Director Name          Year Of Ariving        IMDB Rating" <<endl;
        cout << "1. The Wheel of Time              Uta Briesewitz             2021                7.1/10" <<endl;
        cout << "2.   Carnival Row                  Jon Amiel                 2019                7.8/10" <<endl;
        cout << "3.   Good Omens                  Douglas Mackinnon           2019                8.0/10" <<endl;
        cout << "4. The Man in the High Castle      David Semel               2015                8.0/10" <<endl;
        cout << "5.  The Peripheral                 Vincenzo Natali           2022                7.5/10" <<endl <<endl;
    }
};

class Romance
{
     public:
    void romanceDisplay()
    {
        cout << "---------------Best Top 5 Romance Webseries / Movies of AmazonPrime are----------------" <<endl <<endl;
        cout << "S.NO    Name                      Director Name          Year Of Ariving        IMDB Rating" <<endl;
        cout << "1.  Modern Love                    John Carney               2019                8.0/10" <<endl;
        cout << "2.  Good Trouble                  Joanna Johnson             2019                7.5/10" <<endl;
        cout << "3.     Run                         Vicky Jones               2020                6.2/10" <<endl;
        cout << "4. Älska mig (Love Me)         Josephine Bornebusch          2019                7.6/10" <<endl;
        cout << "5. The Pursuit of Love            Emily Mortimer             2021                6.8/10" <<endl <<endl;
    }
};

class Mystery
{
 public:
    void mysteryDisplay()
    {
        cout << "---------------Best Top 5 Mystery Webseries / Movies of AmazonPrime are----------------" <<endl <<endl;
        cout << "S.NO    Name                      Director Name          Year Of Ariving        IMDB Rating" <<endl;
        cout << "1.   Homecoming                    Sam Esmail                2018                7.5/10" <<endl;
        cout << "2.    Goliath                   Lawrence Trilling            2016                8.1/10" <<endl;
        cout << "3.   The Wilds                   Sarah Streicher             2020                7.3/10" <<endl;
        cout << "4.   The Widow                     Sam Donovan               2019                6.9/10" <<endl;
        cout << "5.    Bosch                     Eric Ellis Overmyer          2014                8.5/10" <<endl <<endl;
    }
};

class Documentary
{
 public:
    void documentaryDisplay()
    {
        cout << "-------------Best Top 5 Documentary Webseries / Movies of AmazonPrime are--------------" <<endl <<endl;
        cout << "S.NO    Name                      Director Name          Year Of Ariving        IMDB Rating" <<endl;
        cout << "1. Clarkson's Farm               Gavin Whitehead             2021                9.0/10" <<endl;
        cout << "2. Shiny Happy People              Olivia Crist              2023                7.4/10" <<endl;
        cout << "3.   Ted Bundy                     Trish Wood                2020                7.8/10" <<endl;
        cout << "4. Dancing on the Grave           Patrick Graham             2023                7.0/10" <<endl;
        cout << "5. Long Strange Trip               Amir Bar-Lev              2017                8.2/10" <<endl <<endl;
    }
};

class Table: public Action, public Thriller, public Horror, public Sci_Fi, public Fantasy, public Romance, public Mystery, public Documentary
{
    public:
    void displayAllTable()
    {
        actionDisplay();
        thrillerDisplay();
        horrorDisplay();
        scifiDisplay();
        fantasyDisplay();
        romanceDisplay();
        mysteryDisplay();
        documentaryDisplay();
    }   
};

class Choice: public Action, public Thriller, public Horror, public Sci_Fi, public Fantasy, public Romance, public Mystery, public Documentary
{
    public:
    void choiceDisplay()
    {
        char letter;
        cout << "Type the first letter of Genre which you want to wish to see (For Action Type (A), Thiller(T), Horror(H), Sci Fi(S), Fantasy(F), Romance(R), Mystery(M), Documentary(D):- "<<endl; 
        cin >> letter;
        switch (letter)
        {
            case 'A':
            case 'a':
            actionDisplay();
            break;
            case 'T':
            case 't':
            thrillerDisplay();
            break;
            case 'H':
            case 'h':
            horrorDisplay();
            break;
            case 'S':
            case 's':
            scifiDisplay();
            break;
            case 'F':
            case 'f':
            fantasyDisplay();
            break;
            case 'R':
            case 'r':
            romanceDisplay();
            break;
            case 'M':
            case 'm':
            mysteryDisplay();
            break;
            case 'D':
            case 'd':
            documentaryDisplay();
            break;
            default:
            cout << "Invalid value. please check your letter is correct?" <<endl;
            break;
        }
    }
};

int main()
{
    Table table;
    Choice choice;
    
    cout <<endl << "-------Amazon prime Best Web series or Movies--------" <<endl <<endl;

    char displayChoice;

    while (true) {
        cout << "What you want to see All genre best webseries or a particular genre :- For All type(A) and for particular type(P) or if you want to end Program just type (E) :- ";
        cin >> displayChoice;

        switch (displayChoice)
        {
            case 'A':
            case 'a':
                table.displayAllTable();
                break;
            case 'P':
            case 'p':
                choice.choiceDisplay();
                break;
            case 'E':
            case 'e':
                cout << "Exiting the program..." << endl;
                return 0;
            default:
                cout << "Invalid value, please type (A) for All or (P) for Particular. To exit, type (E)." << endl;
                break;
        }
    }
    
    return 0;
}