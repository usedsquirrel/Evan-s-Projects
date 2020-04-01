/***********************************************************
 * Dinner For One
 * Author: Evan Adams
 * Date Created: 3/11/2020
 * Description: This program will simulate going to a drive
 * thru but instead of there being a person talking to you,
 * it will all be outputted through the terminal.
 **********************************************************/ 

#include <iostream>
using namespace std;


class Combo
{
    private:
    int    ComboNumber;
    string EntreeName;
    string SideName;
    string DrinkName;
    int    ComboSize;
    float  ComboPrice;

    public:
    //constructor is always placed here 
    Combo(int CN, string EN, string SN, string DN, int CS, float CP) :ComboNumber(CN), EntreeName(EN), SideName(SN), DrinkName(DN), ComboSize(CS), ComboPrice(CP)
    {
    }

    void display()
    {
        cout<<"Combo "<<ComboNumber<<":"<<endl;
        cout<<"Entree: "<<EntreeName<<endl;
        cout<<"Side: "<<SideName<<endl;
        cout<<"Drink:"<<DrinkName<<endl;
        cout<<"Price: "<<"$"<<ComboPrice<<endl<<endl;
    }

    int getComboNumber()
    {
        return ComboNumber;
    }

    float getComboPrice()
    {
        return ComboPrice;
    }

    string getEntreeName()
    {
        return EntreeName;
    }

    string getSideName()
    {
        return SideName;
    }



    //only one if state because the other combo sizes and the same number.
    void setComboPrice(int a)
    {
        if(a != 1)
        { 
            
            ComboPrice = ComboPrice + a;
        }
       
    }


    void setEntreeName(string entree)
    {
        EntreeName = entree;
        
    }

    void setSideName(string side)
    {
        SideName = side;
    }

    void setDrinkName(string drink)
    {
        if(drink == "")
        {
       
        }

        else
        {
            DrinkName = drink;
        }

    }


};



int main()
{
    
    cout<<"Welcome to Eclectic Drive-Thru. What would you like to order?"<<endl;

    Combo combo1(1, "Hamburger", "Fries", "Coke", 1, 5.99);
    combo1.display();

    Combo combo2(2, "Burrito", "Rice", "Coke", 1, 4.99);
    combo2.display();

    Combo combo3(3, "Salad", "Breadsticks", "Coke", 1, 4.49);
    combo3.display();
    
    Combo combo4(4, "", "", "Coke", 1, 6.99);

    cout<<"Combo: 4"<<endl;
    cout<<"Custom Order"<<endl;
    cout<<"Price $6.99"<<endl<<endl;


    int userchoice;
    cout<<"Please select your order number: ";
    cin>>userchoice;
    

    
    
    if(userchoice == 4)
    {
        string entree;
        string side;
        
        cout<<"Enter Entree: "<<endl;
        cin>>entree;
        combo4.setEntreeName(entree);
        cout<<"Enter Side: "<<endl;
        cin>>side;
        combo4.setSideName(side);
        
        
    }

    int upgradeChoice;
    cout<<"Size upgrade prices: Small $0, Medium $2, Large $3"<<endl;
    
   
    cout<<"What size would you like? (1 = Small, 2 = Medium, 3 = Large)"<<endl;
    cin>>upgradeChoice;
    cin.ignore();


    cout<<"What would you like to drink? (leave blank to keep Coke as default)"<<endl;
    string drink;
    getline(cin, drink);
    combo1.setDrinkName(drink);
    combo2.setDrinkName(drink);
    combo3.setDrinkName(drink);
    combo4.setDrinkName(drink);
    
    
    
    cout<<"Here is your order: "<<endl;
    if(userchoice == 1)
    {
        combo1.display();
    }

    else if(userchoice == 2)
    {
        combo2.display();
    }

    else if(userchoice == 3)
    {
        combo3.display();
    }
    
    else
    {
        combo4.display();
    }


    cout<<"Thank You, Please Pull Forward"<<endl;
    return 0;
}

    