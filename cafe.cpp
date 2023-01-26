#include<iostream>

using namespace std;

int main (){
    
    int returtotalbill(void);
    int g=returtotalbill();
    int x=0.3*g;
    int f=0.1*g;
    int j=x+g;
    cout<<"Total bill :"<<g<<endl;
    cout<<"GST in bill : "<<x<<endl;
    int totalbill=0;
    if ( j>=500){
        totalbill=g+x-f;
        cout<<"Disount : "<<f<<endl;

    }
    else{
        totalbill=g+x;
    }
    

    cout<<"Your total payable amount  : "<<totalbill<<endl;
    cout<<"          Thank you for order          "<<endl;
    cout<<" "<<endl;
    cout<<"******************  Do visit again  ****************"<<endl;
    
}

int returtotalbill(){
    
    char c;
    char item;
    char snacks;
    char bakery;
    char mocktails;
    char beverages;
    int billamount=0;
    char selectagain;
    
    cout<<"----------------------------------Welcome to cafe----------------------------------"<<endl;
    cout<<"===========================Please follow below instruction==========================="<<endl;
    cout<<"Step 1 :Please press s to start to your order"<<endl;
    cout<<"Step 2 :You can order bakery, snacks, mocktails and beverage item"<<endl;
    cout<<"Step 3 :Please press a for snacks"<<endl;
    cout<<"Step 4 :Please press b for beverage"<<endl;
    cout<<"Step 5 :Please press c for bakery"<<endl;
    cout<<"Step 6 :Please press d for Mocktails"<<endl;
    cout<<"Step 7 :You will get your final bill after your order"<<endl;
    cout<<"30 % Tax(including service taxes and VAT) will be added to final bill"<<endl;
    
    start:
    cin>>c;
    if (c=='s' || c=='S'){
        
        items:
        cout<<"Please select your choice"<<endl;
        cout<<"(a) Snacks            (b) Beverage            (c) Bakery            (d) Mocktails"<<endl;
        snackslist:
        cin>>item;
        if (item=='d' || item=='D'){
            cout<<"Please select 1, 2, 3, 4 as per your choice "<<endl;
            cout<<"(1)Lemonade : 80"<<endl;
            cout<<"(2)Virgin Mojito : 90"<<endl;
            cout<<"(3)Lemon Ice Tea : 60"<<endl;
            cout<<"(4)Cranberry Punch : 120"<<endl;
            cout<<"(5)Green Apple Mojito : 90"<<endl;
            cin>>mocktails;
            if (mocktails=='1'){
                billamount=billamount + 80;
                
            }
            else if (mocktails=='2'){
                billamount=billamount + 90;
                
            }
            else if (mocktails=='3'){
                billamount=billamount + 60;
                
            }
            else if (mocktails=='4'){
                billamount=billamount + 120;
                
            }
            else if (mocktails=='5'){
                billamount=billamount + 90;
                
            }
            else{
                cout<<"wrong choice"<<endl;
                goto snackslist;
                
            }
          cout<<"do you want to add more item, y or n?"<<endl;
          cin>>selectagain;
          if (selectagain=='y' || selectagain=='Y'){
              goto items;
          }
          
          else{
              
              return billamount;
          }
        }
        if (item=='c' || item=='C'){
            cout<<"Please select 1, 2, 3, 4, 5 as per your choice "<<endl;
            cout<<"(1)Truffle : 30"<<endl;
            cout<<"(2)Cassata : 70"<<endl;
            cout<<"(3)Brownie : 160"<<endl;
            cout<<"(4)Lawa cake : 100"<<endl;
            cout<<"(5)Red Velvet Cake(0.5 kg) : 350"<<endl;
            cin>>bakery;
            if (bakery=='1'){
                billamount=billamount + 30;
                
            }
            else if (bakery=='2'){
                billamount=billamount + 70;
                
            }
            else if (bakery=='3'){
                billamount=billamount + 160;
                
            }
            else if (bakery=='4'){
                billamount=billamount + 100;
                
            }
            else if (bakery=='5'){
                billamount=billamount + 350;
            }
            else{
                cout<<"wrong choice"<<endl;
                goto snackslist;
                
            }
          cout<<"do you want to add more item, y or n?"<<endl;
          cin>>selectagain;
          if (selectagain=='y' || selectagain=='Y'){
              goto items;
          }
          
          else{
              
              return billamount;
          }
        }
        if (item=='a' || item =='A'){
            
            cout<<"Please select 1, 2, 3, 4, 5 as per your choice "<<endl;
            cout<<"(1)Veg burger : 80"<<endl;
            cout<<"(2)Cheese sandwich : 120"<<endl;
            cout<<"(3)Veg puff : 30"<<endl;
            cout<<"(4)Rissole : 30"<<endl;
            cout<<"(5)Steamed momo : 50"<<endl;
            cin>>snacks;
            if (snacks=='1'){
                billamount=billamount + 80;
                
            }
            else if (snacks=='2'){
                billamount=billamount + 120;
                
            }
            else if (snacks=='3'){
                billamount=billamount + 30;
                
            }
            else if (snacks=='4'){
                billamount=billamount + 30;
            }
            else if (snacks=='5'){
                billamount=billamount + 50;
            }
            else{
                cout<<"wrong choice"<<endl;
                goto snackslist;
                
            }
          cout<<"do you want to add more item, y or n?"<<endl;
          cin>>selectagain;
          if (selectagain=='y' || selectagain=='Y'){
              
              goto items;
          }
          
          else{
              
            return billamount;
          }
         
        }
        
        else if (item =='B'|| item=='b'){
            
            cout<<"please select 1, 2, 3, as per your choice "<<endl;
            cout<<"(1)Hot chocolate : 90"<<endl;
            cout<<"(2)Cappuccino : 80"<<endl;
            cout<<"(3)Choco Almond shake : 100"<<endl;
            cout<<"(4)Buttermilk : 50"<<endl;
            cout<<"(5)Cold Coffee : 80"<<endl;
            cin>>beverages;
            if (beverages=='1'){
                billamount=billamount + 90;
            }
            else if (beverages=='2'){
                billamount=billamount + 80;
            }
            else if (beverages=='3'){
                billamount=billamount + 100;
            }
            else if (beverages=='4'){
                billamount=billamount + 50;
            }
            else if (beverages=='5'){
                billamount=billamount + 80;
            }
            else{
                cout<<"wrong choice"<<endl;
                goto snackslist;
            }
            
          cout<<"do you want to add more item, y or n?"<<endl;
          cin>>selectagain;
          if (selectagain=='y' || selectagain=='Y'){
              goto items;
          }
          
          else{
              
              return billamount;
          }
        }
        else{
            cout<<"you have entered wrong value"<<endl;
            goto items;
        }
    }
    
    else{
        cout<<"you have enter wrong value,please press s!"<<endl;
        goto start;
    }

    return billamount;    
}




