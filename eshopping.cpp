#include<iostream>
#include<cstdlib>
using namespace std;

class customer
{
    private:
    char username[50];
    char name[50];
    char surname[50];
    char password[50];
    public:
    void signup()
    {
        
        cout<<"To sign up to our service enter the following information"<<endl;
        cout<<"Enter First Name:";
        cin>>name;
        cout<<"Enter Last Name:";
        cin>>surname;
        cout<<"Enter username:";
        cin>>username;
        cout<<"Enter password:";
        cin>>password;
    }
    void printsignup()
    {
        cout<<"Welcome "<<name<<endl;
    }
};


float totalprice=0;


/**********************************************ELECTRONICS!!!!!!!!!!!!!!!**********************************/

void elecchoices()
{
    int echoice;
    start:
	cout<<"Choose from the following options"<<endl;
    cout<<"1.Laptops"<<endl;
    cout<<"2.Headphones"<<endl;
    cout<<"3.Camera"<<endl;
    cout<<"4.Smart Watches"<<endl;
    cin>>echoice;

    switch (echoice)
    {
    
    /****************LAPTOP CHOICES**************/
    
    case 1:
        int l_brandchoice;
        cout<<"Choose the brand:"<<endl;
        cout<<"1.Apple"<<endl;
        cout<<"2.HP"<<endl;
        cout<<"3.Dell"<<endl;
        cout<<"4.Lenovo"<<endl;
        cout<<"5.Asus"<<endl;
        cin>>l_brandchoice;

        switch (l_brandchoice)
        {
        case 1:
            int apple_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.MacBook Air(M2) \t Price-119000"<<endl;
            cout<<"2.MacBook Pro 13 inch(M2) \t Price-129000"<<endl;
            cout<<"3.MacBook Pro 14 inch(M2) \t Price-199999"<<endl;
            cin>>apple_modelchoice;
            switch (apple_modelchoice)
            {
            case 1:
                totalprice = totalprice + 119000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+129000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+199999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
        
        case 2:
            int hp_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.Omen \t Price-130000"<<endl;
            cout<<"2.Victus Gaming \t Price-113000"<<endl;
            cout<<"3.Pavillion 14S  \t Price-80000"<<endl;
            cin>>hp_modelchoice;
            switch (hp_modelchoice)
            {
            case 1:
                totalprice=totalprice+130000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+113000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+80000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
				break;
            }
            break;
        case 3:
            int dell_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.Alienware \t Price-150000"<<endl;
            cout<<"2.Inspiron \t Price-90000"<<endl;
            cout<<"3.Vostro  \t Price-65000"<<endl;
            cin>>dell_modelchoice;
            switch (dell_modelchoice)
            {
            case 1:
                totalprice=totalprice+150000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+90000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+65000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
        case 4:
            int lenovo_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.Yoga \t Price-165000"<<endl;
            cout<<"2.Ideapad Gaming \t Price-96000"<<endl;
            cout<<"3.Thinkpad  \t Price-52000"<<endl;
            cin>>lenovo_modelchoice;
            switch (lenovo_modelchoice)
            {
            case 1:
                totalprice=totalprice+165000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+96000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+52000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
        case 5:
            int asus_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.TUF Gaming \t Price-87000"<<endl;
            cout<<"2.Zenbook Ultra \t Price-113000"<<endl;
            cout<<"3.Vivobook Pro  \t Price-72000"<<endl;
            cin>>asus_modelchoice;
            switch (asus_modelchoice)
            {
            case 1:
                totalprice=totalprice+87000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+113000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+72000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
        default:
            cout<<"Invalid choice, Please Try Again !"<<endl;
			goto start;
            break;
        }
        break;
    
     /*********************HEADPHONE CHOICES****************/

    case 2:
        int headp_brandchoice;
        cout<<"Choose the brand:"<<endl;
        cout<<"1.Boat"<<endl;
        cout<<"2.Noise"<<endl;
        cout<<"3.Sony"<<endl;
        cout<<"4.Bose"<<endl;
        cin>>headp_brandchoice;

        switch (headp_brandchoice)
        {
        case 1:
            int boat_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.441 TWF \t Price-4300"<<endl;
            cout<<"2.Rockerz 150 \t Price-1699"<<endl;
            cout<<"3.Bassheads 350 \t Price-799"<<endl;
            cin>>boat_modelchoice;
            switch (boat_modelchoice)
            {
            case 1:
                totalprice=totalprice+4300;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+1699;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+799;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
               cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;

        case 2:
            int noise_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.Air Buds \t Price-1300"<<endl;
            cout<<"2.Buds Ace \t Price-999"<<endl;
            cout<<"3.Neckband  \t Price-1999"<<endl;
            cin>>noise_modelchoice;
            switch (noise_modelchoice)
            {
            case 1:
                totalprice=totalprice+1300;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+1999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
            }
            break;

        case 3:
            int sony_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.WH-15600 \t Price-2900"<<endl;
            cout<<"2.Buds 2 \t Price-2499"<<endl;
            cout<<"3.Earphones  \t Price-899"<<endl;
            cin>>sony_modelchoice;
            switch (sony_modelchoice)
            {
            case 1:
                totalprice=totalprice+2900;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+2499;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+899;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
            }
            break;

        case 4:
            int bose_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.Quiet Earbuds 2 \t Price-25900"<<endl;
            cout<<"2.Quiet Comfort 150 \t Price-23999"<<endl;
            cout<<"3.Quiet Comfort earphones \t Price-8999"<<endl;
            cin>>bose_modelchoice;
            switch (bose_modelchoice)
            {
            case 1:
                totalprice=totalprice+25900;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+23999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+8999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
            }
            break;
        default:
            cout<<"Invalid choice, Please Try Again !"<<endl;
			goto start;
            break;
        }
        break;
    
    /***********CAMERA CHOICES***********/
    
    case 3:
        int camera_brandchoice;
        cout<<"Choose the brand:"<<endl;
        cout<<"1.Nikon"<<endl;
        cout<<"2.Sony"<<endl;
        cout<<"3.Canon"<<endl;
        cin>>camera_brandchoice;

        switch (camera_brandchoice)
        {
        case 1:
            int nikon_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.Z5 Mirrorless \t Price-144990"<<endl;
            cout<<"2.Z30 Mirrorless \t Price-50999"<<endl;
            cout<<"3.D850 DSLR \t Price-258999"<<endl;
            cin>>nikon_modelchoice;
            switch (nikon_modelchoice)
            {
            case 1:
                totalprice=totalprice+144990;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+50999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+258999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;

        case 2:
            int sony_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.Alpha 1 Mirrorless \t Price-444990"<<endl;
            cout<<"2.ZV-E10 Mirrorless \t Price-64999"<<endl;
            cout<<"3.Cybershot DSC \t Price-53890"<<endl;
            cin>>sony_modelchoice;
            switch (sony_modelchoice)
            {
            case 1:
                totalprice=totalprice+444990;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+64999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+53890;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
        case 3:
            int canon_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.EOS 5d Mark IV \t Price-289990"<<endl;
            cout<<"2.Compact XA1157 \t Price-82999"<<endl;
            cout<<"3.EOS 1500D DSLR \t Price-37990"<<endl;
            cin>>canon_modelchoice;
            switch (canon_modelchoice)
            {
            case 1:
                totalprice=totalprice+289990;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+82999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+37990;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
        default:
            cout<<"Invalid choice, Please Try Again !"<<endl;
			goto start;
            break;
        }
        break;
    /************SMART WATCHES CHOICES************/
    case 4:
        int watches_brandchoice;
        cout<<"Choose the brand:"<<endl;
        cout<<"1.Boat"<<endl;
        cout<<"2.Apple"<<endl;
        cout<<"3.Noise"<<endl;
        cin>>watches_brandchoice;

        switch (watches_brandchoice)
        {
        case 1:
            int btwatch_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.Storm Call \t Price-1399"<<endl;
            cout<<"2.Lunar \t Price-1699"<<endl;
            cout<<"3.Wave Pro \t Price-1299"<<endl;
            cin>>btwatch_modelchoice;
            switch (btwatch_modelchoice)
            {
            case 1:
                totalprice=totalprice+1399;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+1699;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+1299;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
        case 2:
            int apwatch_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.Series 8 \t Price-74999"<<endl;
            cout<<"2.SE \t Price-32990"<<endl;
            cout<<"3.Ultra \t Price-84799"<<endl;
            cin>>apwatch_modelchoice;
            switch (apwatch_modelchoice)
            {
            case 1:
                totalprice=totalprice+74999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+32990;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+84799;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
        case 3:
            int noisewatch_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.Icon 2 \t Price-1499"<<endl;
            cout<<"2.Evolve 2 \t Price-1799"<<endl;
            cout<<"3.ColorFit Caliber \t Price-999"<<endl;
            cin>>noisewatch_modelchoice;
            switch (noisewatch_modelchoice)
            {
            case 1:
                totalprice=totalprice+1499;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+1799;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;    
        default:
            cout<<"Invalid choice, Please Try Again !"<<endl;
		    goto start;
            break;
        }
    break;
    default:
        cout<<"Invalid choice, Please Try Again !"<<endl;
		goto start;
        break;
    }
}


/***********************************MOBILES!!!!!!!!!!!!!!!!!!!!!!*******************************/

void mobilechoices()
{
    int mchoice;
    start:
	cout<<"Choose from the following options"<<endl;
    cout<<"1.Budget Mobile"<<endl;
    cout<<"2.Mid Range Mobile"<<endl;
    cout<<"3.Flagships"<<endl;
    cin>>mchoice;

    switch (mchoice)
    {
    
    /****************Budget CHOICES**************/
    
    case 1:
        int budget_brandchoice;
        cout<<"Choose the brand:"<<endl;
        cout<<"1.Samsung"<<endl;
        cout<<"2.Motorola"<<endl;
        cout<<"3.Realme"<<endl;
        cout<<"4.Redmi"<<endl;
        
        cin>>budget_brandchoice;

        switch (budget_brandchoice)
        {
        case 1:
            int samsungbudget_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.F13 \t Price-9699"<<endl;
            cout<<"2.F23 5G \t Price-14999"<<endl;
            cout<<"3.F14 5G \t Price-13500"<<endl;
            cin>>samsungbudget_modelchoice;
            switch (samsungbudget_modelchoice)
            {
            case 1:
                totalprice = totalprice + 9699;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+14999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+13500;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
        
        case 2:
            int motorolabudget_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.G13 \t Price-9499"<<endl;
            cout<<"2.G32 \t Price-10499"<<endl;
            cout<<"3.G40 Fusion  \t Price-12999"<<endl;
            cin>>motorolabudget_modelchoice;
            switch (motorolabudget_modelchoice)
            {
            case 1:
                totalprice=totalprice+9499;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+10499;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+12999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
        case 3:
            int realmebudget_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.Realme C30 \t Price-6849"<<endl;
            cout<<"2.Realme 8 5G \t Price-12999"<<endl;
            cout<<"3.Realme C55  \t Price-10999"<<endl;
            cin>>realmebudget_modelchoice;
            switch (realmebudget_modelchoice)
            {
            case 1:
                totalprice=totalprice+6849;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+12999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+10999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
               cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
        case 4:
            int redmibudget_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.Redmi 10 \t Price-10999"<<endl;
            cout<<"2.Redmi Note 12 \t Price-14999"<<endl;
            cout<<"3.Redmi A1+ \t Price-6499"<<endl;
            cin>>redmibudget_modelchoice;
            switch (redmibudget_modelchoice)
            {
            case 1:
                totalprice=totalprice+10999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+14999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+6499;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
            }
            break;
        default:
            cout<<"Invalid choice, Please Try Again !"<<endl;
			goto start;
            break;
        }
        break;
    
     /*********************Mid Range CHOICES****************/

    case 2:
        int midrange_brandchoice;
        cout<<"Choose the brand:"<<endl;
        cout<<"1.Samsung"<<endl;
        cout<<"2.Motorola"<<endl;
        cout<<"3.Realme"<<endl;
        cout<<"4.Redmi"<<endl;
        cin>>midrange_brandchoice;

        switch (midrange_brandchoice)
        {
        case 1:
            int samsungmid_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.A34 5G \t Price-30000"<<endl;
            cout<<"2.S20 FE 5G \t Price-26999"<<endl;
            cout<<"3.M53 5G \t Price-24688"<<endl;
            cin>>samsungmid_modelchoice;
            switch (samsungmid_modelchoice)
            {
            case 1:
                totalprice=totalprice+30000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+26999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+24688;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;

        case 2:
            int motorolamid_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.Edge 30 \t Price-29000"<<endl;
            cout<<"2.Edge 20 Fusion 5G \t Price-25999"<<endl;
            cout<<"3.G40 5G  \t Price-23500"<<endl;
            cin>>motorolamid_modelchoice;
            switch (motorolamid_modelchoice)
            {
            case 1:
                totalprice=totalprice+29000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+25999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+23500;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;

        case 3:
            int realmemid_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.10 Pro + \t Price-24999"<<endl;
            cout<<"2.GT Neo 3T \t Price-29999"<<endl;
            cout<<"3.9 Pro + 5G  \t Price-22999"<<endl;
            cin>>realmemid_modelchoice;
            switch (realmemid_modelchoice)
            {
            case 1:
                totalprice=totalprice+24999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+29999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+22999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;

        case 4:
            int redmimid_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.12 Pro + 5G \t Price-29999"<<endl;
            cout<<"2.K50i 5G \t Price-25999"<<endl;
            cout<<"3.11T 5G \t Price-22999"<<endl;
            cin>>redmimid_modelchoice;
            switch (redmimid_modelchoice)
            {
            case 1:
                totalprice=totalprice+29999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+25999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+22999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
        default:
            cout<<"Invalid choice, Please Try Again !"<<endl;
			goto start;
            break;
        }
        break;
    
    /***********Flagship CHOICES***********/
    
    case 3:
        int flagship_brandchoice;
        cout<<"Choose the brand:"<<endl;
        cout<<"1.Samsung"<<endl;
        cout<<"2.Apple"<<endl;
        cout<<"3.Google"<<endl;
        cout<<"4.Motorola"<<endl;
        cin>>flagship_brandchoice;

        switch (flagship_brandchoice)
        {
        case 1:
            int samsungflagship_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.Galaxy S23 5G \t Price-79999"<<endl;
            cout<<"2.Z Fold 2 5G \t Price-83999"<<endl;
            cout<<"3.Z Flip 4 5G \t Price-74999"<<endl;
            cin>>samsungflagship_modelchoice;
            switch (samsungflagship_modelchoice)
            {
            case 1:
                totalprice=totalprice+79999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+83999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+74999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;

        case 2:
            int appleflagship_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.IPhone 14 Pro \t Price-129000"<<endl;
            cout<<"2.IPhone 14 \t Price-67999"<<endl;
            cout<<"3.IPhone 14 Plus \t Price-86999"<<endl;
            cin>>appleflagship_modelchoice;
            switch (appleflagship_modelchoice)
            {
            case 1:
                totalprice=totalprice+129000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+67999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+86999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
        case 3:
            int googleflagship_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.Pixel 7 5G \t Price-44999"<<endl;
            cout<<"2.Pixel 6 Pro 5G \t Price-43499"<<endl;
            cout<<"3.Pixel 7 Pro \t Price-69990"<<endl;
            cin>>googleflagship_modelchoice;
            switch (googleflagship_modelchoice)
            {
            case 1:
                totalprice=totalprice+44999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+43499;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+69990;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
        default:
            cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
            break;
        }
        break;
        default:
            cout<<"Invalid choice, Please Try Again !"<<endl;
			goto start;
            break;
    }
}

/*******************************HOME APPLIANCES********************/

void applichoices()
{
    int appchoice;
    start:
	cout<<"Choose from the following options"<<endl;
    cout<<"1.Air Conditioner"<<endl;
    cout<<"2.Refrigerators"<<endl;
    cout<<"3.Television"<<endl;
    cout<<"4.Washing Machine"<<endl;
    cin>>appchoice;

    switch (appchoice)
    {
    
    /**AIR CONDITIONERS CHOICES**/
    
    case 1:
        int ACchoice;
        cout<<"Choose the brand:"<<endl;
        cout<<"1.LG"<<endl;
        cout<<"2.Whirlpool"<<endl;
        cout<<"3.Panasonic"<<endl;
        cout<<"4.Voltas"<<endl;
        cin>>ACchoice;

        switch (ACchoice)
        {
        case 1:
            int lg_modelchoice;
            cout<<"Choose Model:"<<endl;
              cout<<"1.LG 1 Ton 5 Star Ai Dual Inverter Split Ac  \t Price-40000"<<endl;
             cout<<"1.LG 1.5 Ton 5 Star AI DUAL Inverter Split AC \t Price-45500"<<endl;
            cout<<"3.LG 2.0 Ton 3 Star AI DUAL Inverter Split AC \t Price-54500"<<endl;
            cin>>lg_modelchoice;
            switch (lg_modelchoice)
            {
            case 1:
                totalprice = totalprice+40000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+455000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+54500;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
        
        case 2:
            int whirlpool_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.Whirlpool 1.0 Ton 3 Star, Flexicool Inverter Split AC \t Price-30000"<<endl;
            cout<<"2.Whirlpool 1.5 Ton 3 Star, Flexicool Inverter Split AC  \t Price-32000"<<endl;
            cout<<"3.Whirlpool 2.0 Ton 3 Star, Flexicool Inverter Split AC  \t Price-42000"<<endl;
            cin>>whirlpool_modelchoice;
            switch (whirlpool_modelchoice)
            {
            case 1:
                totalprice=totalprice+30000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+32000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+42000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
        case 3:
            int panasonic_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.Panasonic 1 Ton 5 Star Wi-Fi Inverter Smart Split AC  \t Price-38000"<<endl;
            cout<<"2.Panasonic 1.5 Ton 5 Star Wi-Fi Inverter Smart Split AC \t Price-45000"<<endl;
            cout<<"3.Panasonic 2 Ton 4 Star Wi-Fi Inverter Smart Split AC  \t Price-54000"<<endl;
            cin>>panasonic_modelchoice;
            switch (panasonic_modelchoice)
            {
            case 1:
                totalprice=totalprice+38000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+45000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+54000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
            }
            break;
        case 4:
            int voltas_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.Voltas 1 Ton 3 Star, Inverter Split AC \t Price-30000"<<endl;
            cout<<"2.Voltas 1.5 Ton 5 Star, Inverter Window AC  \t Price-37000"<<endl;
            cout<<"3.Voltas 2 Ton 3 Star, Inverter Split AC  \t Price-44000"<<endl;
            cin>>voltas_modelchoice;
            switch (voltas_modelchoice)
            {
            case 1:
                totalprice=totalprice+30000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+37000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+44000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
            }
            break;
            
        default:
           cout<<"Invalid choice, Please Try Again !"<<endl;
			goto start;
            break;
        }
        break;
    
     /***REFRIGIRATOR CHOICES**/

    case 2:
        int refchoice;
        cout<<"Choose the brand:"<<endl;
        cout<<"1.LG"<<endl;
        cout<<"2.Whirlpool"<<endl;
        cout<<"3.Samsung"<<endl;
        cout<<"4.Godrej"<<endl;
        cin>>refchoice;

        switch (refchoice)
        {
        case 1:
            int LG_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"LG 185 L 5 Star Inverter Direct-Cool Single Door Refrigerator \t Price-17500"<<endl;
            cout<<"2.LG 185 L4 Star Inverter Direct-Cool Single Door Refrigerator \t Price-16499"<<endl;
            cout<<"3.LG 185 L 3 Star Direct-Cool Single Door Refrigerator \t Price-14799"<<endl;
            cin>>LG_modelchoice;
            switch (LG_modelchoice)
            {
            case 1:
                totalprice=totalprice+17500;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+16499;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+14799;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;

        case 2:
            int wh_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.Whirlpool 207 L 5 Star Inverter Direct-Cool Single Door Refrigerator \t Price-18500"<<endl;
            cout<<"2.Whirlpool 192 L 4 Star Inverter Direct-Cool Single Door Refrigerator \t Price-16999"<<endl;
            cout<<"3.Whirlpool 184 L 3 Star Direct-Cool Single Door Refrigerator   \t Price-12999"<<endl;
            cin>>wh_modelchoice;
            switch (wh_modelchoice)
            {
            case 1:
                totalprice=totalprice+18500;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+16999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+12999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;

        case 3:
            int sam_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.Samsung 189 L 5 Star Digital Inverter Direct Cool Single Door Refrigerator \t Price-17800"<<endl;
            cout<<"2.Samsung 183 L 4 Star Digital Inverter Direct Cool Single Door Refrigerator\t Price-16499"<<endl;
            cout<<"3.Samsung 183 L 3 Star Digital Inverter Direct Cool Single Door Refrigerator  \t Price-14899"<<endl;
            cin>>sam_modelchoice;
            switch (sam_modelchoice)
            {
            case 1:
                totalprice=totalprice+17800;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+16499;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+14899;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;

        case 4:
            int godrej_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.Godrej 180 L 5 Star Direct Cool Inverter Single Door Refrigerator\t Price-16900"<<endl;
            cout<<"2.Godrej 180 L 4 Star Direct Cool Single Door Refrigerator \t Price-14999"<<endl;
            cout<<"3.Godrej 180 L 3 Star Direct Cool Single Door Refrigerator \t Price-13999"<<endl;
            cin>>godrej_modelchoice;
            switch (godrej_modelchoice)
            {
            case 1:
                totalprice=totalprice+16900;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+14999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+13999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
        default:
           cout<<"Invalid choice, Please Try Again !"<<endl;
			goto start;
            break;
        }
        break;
    
    /*TELEVISION CHOICES*/
    
    case 3:
        int tv_brandchoice;
        cout<<"Choose the brand:"<<endl;
        cout<<"1.Sony"<<endl;
        cout<<"2.Samsung"<<endl;
        cout<<"3.Oneplus"<<endl;
        cin>>tv_brandchoice;

        switch (tv_brandchoice)
        {
        case 1:
            int sony_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.Sony Bravia 164 cm 4K Ultra HD \t Price-71000"<<endl;
            cout<<"2.Sony Bravia 139 cm 4K Ultra HD \t Price-55999"<<endl;
            cout<<"3.Sony Bravia 108 cm 4K Ultra HD \t Price-40999"<<endl;
            cin>>sony_modelchoice;
            switch (sony_modelchoice)
            {
            case 1:
                totalprice=totalprice+71000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+55999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+40999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;

        case 2:
            int sams_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.Samsung 163 cm (65 inches) Crystal iSmart 4K \t Price-70990"<<endl;
            cout<<"2.Samsung 138 cm (55 inches) Crystal 4K\t Price-43999"<<endl;
            cout<<"3.Samsung 108 cm (43 inches) Crystal 4K \t Price-28890"<<endl;
            cin>>sams_modelchoice;
            switch (sams_modelchoice)
            {
            case 1:
                totalprice=totalprice+70990;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+43999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+28890;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
               cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
        case 3:
            int oneplus_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.OnePlus 163.8 cm (65 inches) U Series 4K \t Price-59990"<<endl;
            cout<<"2.OnePlus 138.7 cm (55 inches) U Series 4K \t Price-40999"<<endl;
            cout<<"3.OnePlus 108 cm (43 inches) Y Series 4K \t Price-27990"<<endl;
            cin>>oneplus_modelchoice;
            switch (oneplus_modelchoice)
            {
            case 1:
                totalprice=totalprice+59990;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+40999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+27990;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
        default:
            cout<<"Invalid choice, Please Try Again !"<<endl;
			goto start;
            break;
        }
        break;

    /**WASHING MACHINE CHOICES**/
    case 4:
        int wm_brandchoice;
        cout<<"Choose the brand:"<<endl;
        cout<<"1.LG"<<endl;
        cout<<"2.Bosch"<<endl;
        cout<<"3.IFB"<<endl;
        cin>>wm_brandchoice;

        switch (wm_brandchoice)
        {
        case 1:
              int Lg_choice;
              cout<<"Choose model:"<<endl;
              cout<<"1.LG 6.5 Kg 5 Star Smart Inverter Fully-Automatic Top Loading Washing Machine\t Price-16990"<<endl;
              cout<<"2.LG 7 Kg 5 Star Inverter Fully-Automatic Top Loading Washing Machine \t Price-17999"<<endl;
              cout<<"3.LG 8 Kg 5 Star Inverter Touch panel Fully-Automatic Front Load Washing Machine \t Price-34990"<<endl;
              cin>>Lg_choice;
            switch (Lg_choice)
            {
            case 1:
                totalprice=totalprice+16990;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+17999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+34990;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
               cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
        case 2:
            int bosch_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.Bosch 6 kg 5 Star Inverter Fully Automatic Front Loading Washing\t Price-24999"<<endl;
            cout<<"2.Bosch 7 kg 5 Star Inverter Touch Control Fully Automatic Front Loading Washing Machine \t Price-31990"<<endl;
            cout<<"3.Bosch 8 kg 5 Star Fully Automatic Front Loading Washing Machine \t Price-36799"<<endl;
            cin>>bosch_modelchoice;
            switch (bosch_modelchoice)
            {
            case 1:
                totalprice=totalprice+24999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+31990;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+36799;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
        case 3:
            int ifb_modelchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.IFB 6 Kg 5 Star Front Load Washing Machine 2 \t Price-22499"<<endl;
            cout<<"2.IFB 7 Kg 5 Star Front Load Washing Machine \t Price-29799"<<endl;
            cout<<"3.IFB 8 Kg 5 Star Front Load Washing Machine \t Price-38999"<<endl;
            cin>>ifb_modelchoice;
            switch (ifb_modelchoice)
            {
            case 1:
                totalprice=totalprice+22499;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+29799;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+38999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;    
        default:
            cout<<"Invalid choice, Please Try Again !"<<endl;
			goto start;
            break;
        }
    break;
    default:
        cout<<"Invalid choice, Please Try Again !"<<endl;
		goto start;
        break;
    }
}

/********************************SPORTS!!!!!!!!!!!!!!!!!!!!!!*************************************/

void sportschoices()
{
    int schoice;
    start:
	cout<<"Choose from the following options"<<endl;
    cout<<"1.Cricket"<<endl;
    cout<<"2.Football"<<endl;
    cout<<"3.Basketball"<<endl;
    cout<<"4.Badminton"<<endl;
    cin>>schoice;

    switch (schoice)
    {
    
    /**CRICKET CHOICES**/
    
    case 1:
        int C_equipmentchoice;
        cout<<"Choose the Equipment:"<<endl;
        cout<<"1.Bat"<<endl;
        cout<<"2.Gloves"<<endl;
        cout<<"3.Ball"<<endl;
        cout<<"4.Shoes"<<endl;
        cout<<"5.Helmet"<<endl;
        cout<<"6.Pads"<<endl;
        cin>>C_equipmentchoice;

        switch (C_equipmentchoice)
        {
        case 1:
            int Batchoice;
            cout<<"Choose Bat:"<<endl;
            cout<<"1.SG Cricket Bat \t Price-1800"<<endl;
            cout<<"2.MRF Cricket Bat \t Price-1000"<<endl;
            cout<<"3.CEAT Cricket Bat \t Price-800"<<endl;
            cin>>Batchoice;
            switch (Batchoice)
            {
            case 1:
                totalprice = totalprice+1800;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+1000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+800;
                cout<<"Total Price== "<<totalprice<<endl;
                break;   
                
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
        case 2:
            int cgloveschoice;
            cout<<"Choose Gloves:"<<endl;
            cout<<"1.Whitedot cricket gloves \t Price-950"<<endl;
            cout<<"2.SG Ecolite cricket Gloves \t Price-700"<<endl;
            cout<<"3.GM Prima cricket Gloves \t Price-2650"<<endl;
            cin>>cgloveschoice;
            switch (cgloveschoice)
            {
            case 1:
                totalprice=totalprice+950;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+700;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+2650;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
        case 3:
            int cballchoice;
            cout<<"Choose Ball:"<<endl;
            cout<<"1.SG Bouncer Leather Ball \t Price-499"<<endl;
            cout<<"2.Jaspo Incredi Ball \t Price-269"<<endl;
            cout<<"3.Jaspo T20 Cricket Ball   \t Price-355"<<endl;
            cin>>cballchoice;
            switch (cballchoice)
            {
            case 1:
                totalprice=totalprice+499;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+269;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+355;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
        case 4:
            int cshoeschoice;
            cout<<"Choose shoes:"<<endl;
            cout<<"1.DSC Jaffa 22 Cricket Shoes \t Price-1750"<<endl;
            cout<<"2.SG Shoe for Cricket  \t Price-1260"<<endl;
            cout<<"3.Vector X Striker Cricket Shoe  \t Price-759"<<endl;
            cin>>cshoeschoice;
            switch (cshoeschoice)
            {
            case 1:
                totalprice=totalprice+1750;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+1260;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+759;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
        case 5:
            int helmetchoice;
            cout<<"Choose Helmet:"<<endl;
            cout<<"1.Shrey Master Class \t Price-6350"<<endl;
            cout<<"2.DSC Guard Cricket Helmet \t Price-1130"<<endl;
            cout<<"3.SG Polyfab Cricket Helmet \t Price-2500"<<endl;
            cin>>helmetchoice;
            switch (helmetchoice)
            {
            case 1:
                totalprice=totalprice+6350;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+1130;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+2500;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
         case 6:
            int padchoice;
            cout<<"Choose Pad:"<<endl;
            cout<<"1.Whitedot Dot 2.1 PU Cricket Pad \t Price-1800"<<endl;
            cout<<"2.DSC Cricket Pad \t Price-1000"<<endl;
            cout<<"3.Sg Test Rh Cricket Pad \t Price-3800"<<endl;
            cin>>padchoice;
            switch (padchoice)
            {
            case 1:
                totalprice = totalprice+1800;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+1000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+3800;
                cout<<"Total Price== "<<totalprice<<endl;
                break;   
                
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
        default:
            cout<<"Invalid choice, Please Try Again !"<<endl;
			goto start;
            break;
        }
        break;
    
     /***FOOTBALL CHOICES**/

    case 2:
        int F_equipmentchoice;
        cout<<"Choose the Equipment:"<<endl;
        cout<<"1.Ball"<<endl;
        cout<<"2.Gloves"<<endl;
        cout<<"3.studs"<<endl;
        cin>>F_equipmentchoice;

        switch (F_equipmentchoice)
        {
        case 1:
            int fballchoice;
            cout<<"Choose Ball:"<<endl;
            cout<<"1.Nivia Storm Football | \t Price-1300"<<endl;
            cout<<"2.Adidas AL RIHLA League Football \t Price-2599"<<endl;
            cout<<"3.Cosco 14051 Thunder Football \t Price-799"<<endl;
            cin>>fballchoice;
            switch (fballchoice)
            {
            case 1:
                totalprice=totalprice+1300;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+2599;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+799;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;

        case 2:
            int fgloveschoice;
            cout<<"Choose Gloves:"<<endl;
            cout<<"1.Vector X Goal Keeper Gloves \t Price-800"<<endl;
            cout<<"2.Nivia Ashtang Goal Keeper Gloves \t Price-1499"<<endl;
            cout<<"3.Proberos® Goalkeeper Gloves  \t Price-899"<<endl;
            cin>>fgloveschoice;
            switch (fgloveschoice)
            {
            case 1:
                totalprice=totalprice+800;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+1499;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+899;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;

        case 3:
            int studschoice;
            cout<<"Choose Studs:"<<endl;
            cout<<"1.Nivia Airstrike Football Stud\t Price-700"<<endl;
            cout<<"2.Puma Mens Tacto Football Stud\t Price-3499"<<endl;
            cout<<"3.Adidas Unisex-Adult Copas  \t Price-2799"<<endl;
            cin>>studschoice;
            switch (studschoice)
            {
            case 1:
                totalprice=totalprice+700;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+3499;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+2799;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;

        default:
            cout<<"Invalid choice, Please Try Again !"<<endl;
			goto start;
            break;
        }
        break;
    
    /*BASKETBALL CHOICES*/
    
    case 3:
        int basketballchoice;
        cout<<"Choose the Equipment:"<<endl;
        cout<<"1.Ball"<<endl;
        cout<<"2.Shoes"<<endl;
        cin>>basketballchoice;

        switch (basketballchoice)
        {
        case 1:
            int bballchoice;
            cout<<"Choose Ball:"<<endl;
            cout<<"1.Nike Versa Tack Basketball\t Price-7850"<<endl;
            cout<<"2.adidas 3-Stripes Basketball \t Price-1300"<<endl;
            cout<<"3.Vector X Power Basketball \t Price-679"<<endl;
            cin>>bballchoice;
            switch (bballchoice)
            {
            case 1:
                totalprice=totalprice+7850;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+1300;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+679;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;

        case 2:
            int bshoes_choice;
            cout<<"Choose Shoes:"<<endl;
            cout<<"1.adidas Baby Cross Basketball Shoe \t Price-7000"<<endl;
            cout<<"2.Puma Unisex-Adult Court Rider Basketball Shoe \t Price-4200"<<endl;
            cout<<"3.NIKE Lebron Xvii Low Basketball Shoes\t Price-10050"<<endl;
            cin>>bshoes_choice;
            switch (bshoes_choice)
            {
            case 1:
                totalprice=totalprice+7000;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+4200;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+10050;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
            
        default:
            cout<<"Invalid choice, Please Try Again !"<<endl;
			goto start;
            break;
        }
        break;
    /**BADMINTON CHOICES**/
    case 4:
        int badmintonchoice;
        cout<<"Choose the Equipment:"<<endl;
        cout<<"1.Racquet"<<endl;
        cout<<"2.Shuttlecock"<<endl;
        cout<<"3.Shoes"<<endl;
        cin>>badmintonchoice;

        switch (badmintonchoice)
        {
        case 1:
            int Racquetchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.Li-Ning XP-70-IV Badminton Racquet \t Price-1399"<<endl;
            cout<<"2.Yonex Nanoray Light Badminton Racquet \t Price-2599"<<endl;
            cout<<"3.VICTOR Jetspeed S JS-03H Badminton Racquet \t Price-3299"<<endl;
            cin>>Racquetchoice;
            switch (Racquetchoice)
            {
            case 1:
                totalprice=totalprice+1399;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+2599;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+3299;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
        case 2:
            int shuttlecockchoice;
            cout<<"Choose Model:"<<endl;
            cout<<"1.Nongi Badminton Shuttlecock \t Price-259"<<endl;
            cout<<"2.Li-Ning Bolt Badminton Shuttlecock \t Price-690"<<endl;
            cout<<"3.Yonex M350 YM Shuttlecock \t Price-800"<<endl;
            cin>>shuttlecockchoice;
            switch (shuttlecockchoice)
            {
            case 1:
                totalprice=totalprice+259;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+690;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+800;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;
        case 3:
            int BM_shoes_choice;
            cout<<"Choose Shoes:"<<endl;
            cout<<"1.YONEX Badminton Shoes \t Price-2799"<<endl;
            cout<<"2.Nivia HY-Court 2.0 Badminton Shoes \t Price-1599"<<endl;
            cout<<"3.Li-Ning Ultra Fly II Badminton Shoes \t Price-2999"<<endl;
            cin>>BM_shoes_choice;
            switch (BM_shoes_choice)
            {
            case 1:
                totalprice=totalprice+2799;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 2:
                totalprice=totalprice+1599;
                cout<<"Total Price== "<<totalprice<<endl;
                break;
            case 3:
                totalprice=totalprice+2999;
                cout<<"Total Price== "<<totalprice<<endl;
                break;    
            default:
                cout<<"Invalid choice, Please Try Again !"<<endl;
				goto start;
                break;
            }
            break;    
        default:
            cout<<"Invalid choice, Please Try Again !"<<endl;
			goto start;
            break;
        }
    break;
    default:
        cout<<"Invalid choice, Please Try Again !"<<endl;
		goto start;
        break;
    }
}


void payBill()
{
    payStart:
    int paychoice;
    cout<<"Choose from the following to pay bill amount"<<endl;
    cout<<"1.UPI Payment"<<endl; 
    cout<<"2.Credit/Debit card Payment"<<endl; 
    cout<<"3.Netbanking "<<endl; 
    cout<<"4.QR Code"<<endl; 
    cin>>paychoice;
    switch(paychoice)
    {
        case 1:
            char upiID[30];  // if string didn`t work use it
            //string upiID;
            cout<<"Enter your UPI ID:";
            cin>>upiID;
            cout<<"Bill payed!"<<endl;
            break;
        case 2:
            int cardNo;
            char expirydate[10];
            cout<<"Enter your Credit/Debit card number:";
            cin>>cardNo;
            cout<<"Enter expiry date:";
            cin>>cardNo;
            cout<<"Bill payed!"<<endl;
            break;
        case 3:
            int accountNo;
            cout<<"Enter your Account number:";
            cin>>accountNo;
            cout<<"Bill payed!"<<endl;
            break;
        case 4:
            int scan;
            cout<<"Please enter 1 to confirm your payment using QR:";
            cin>>scan;
            if(scan==1)
            {cout<<"Bill payed"<<endl;}
            else
            {
                cout<<"Try Some other Payment Method!"<<endl; 
                goto payStart;
            }
            break;
        default:
            cout<<"Invalid choice, Please try again!"<<endl;
            goto payStart;
    }
}

int main()
{
    int choice;
    char char1,char2;
    char contshopping;
    cout<<"***************** WELCOME TO E-SHOPPING SYSTEM *****************"<<endl;
    cout<<endl;
    cout<<endl;
    start2:
    cout<<"Press 'L' to sign up"<<endl;
    cin>>char2;
    if(char2=='l'||char2=='L')
    {
        customer c1;
        c1.signup();
        c1.printsignup();
    }
    else
    {
      cout<<"Please press 'L' to sign up"<<endl;
      goto start2;  
    }
    cout<<"Press 's' to start shopping"<<endl;
    start1:
    cin>>char1;
    if(char1=='s'|| char1=='S')
    {
        start:
        cout<<"Choose from the following categories"<<endl;
        cout<<"1.Electronics"<<endl;
        cout<<"2.Mobiles"<<endl;
        cout<<"3.Home Appliances"<<endl;
        cout<<"4.Sports"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            char egbk;
            elecgoback:
            elecchoices();
            cout<<"Do you want to go back to electronics menu?(Y/N):";
            cin>>egbk;
            if (egbk=='Y'||egbk=='y')
            {
                goto elecgoback;
            }
            else
            {
            cout<<"Do you want continue shopping(select Y/N)"<<endl;
            cin>>contshopping;
            if(contshopping=='Y'||contshopping=='y')
            goto start;
            else
            {
                if(totalprice>=150000 && totalprice<300000)
                cout<<"Your Total bill is Rs(including discount of 10 percent) "<<totalprice-(totalprice*0.1)<<endl;
                else if(totalprice>=300000)
                cout<<"Your Total bill is Rs(including discount of 20 percent) "<<totalprice-(totalprice*0.2)<<endl;
                else
                {cout<<"Total bill is "<<totalprice<<endl;}
                payBill();
                cout<<"Thank You For Shopping With Us!!!"<<endl;
                exit(0);
            }
            break;
            }
        case 2:
            char mgbk;
            mobilegoback:
            mobilechoices();
            cout<<"Do you want to go back to mobile menu?(Y/N):";
            cin>>mgbk;
            if (mgbk=='Y'||mgbk=='y')
            {
                goto mobilegoback;
            }
            else
            {
            cout<<"Do you want continue shopping(select Y/N)"<<endl;
            cin>>contshopping;
            if(contshopping=='Y'||contshopping=='y')
            goto start;
            else
            {
                if(totalprice>=150000 && totalprice<300000)
                cout<<"Your Total bill is Rs(including discount of 10 percent) "<<totalprice-(totalprice*0.1)<<endl;
                else if(totalprice>=300000)
                cout<<"Your Total bill is Rs(including discount of 20 percent) "<<totalprice-(totalprice*0.2)<<endl;
                else
                {cout<<"Total bill is "<<totalprice<<endl;}
                payBill();
                cout<<"Thank You For Shopping With Us!!!"<<endl;
                exit(0);
            }
            break;
            }
        case 3:
            char agbk;
            appligoback:
            applichoices();
            cout<<"Do you want to go back to appliances menu?(Y/N):";
            cin>>agbk;
            if (agbk=='Y'||agbk=='y')
            {
                goto appligoback;
            }
            else
            {
            cout<<"Do you want continue shopping(select Y/N)"<<endl;
            cin>>contshopping;
            if(contshopping=='Y'||contshopping=='y')
            goto start;
            else
            {
                if(totalprice>=150000 && totalprice<300000)
                cout<<"Your Total bill is Rs(including discount of 10 percent) "<<totalprice-(totalprice*0.1)<<endl;
                else if(totalprice>=300000)
                cout<<"Your Total bill is Rs(including discount of 20 percent) "<<totalprice-(totalprice*0.2)<<endl;
                else
                {cout<<"Total bill is "<<totalprice<<endl;}
                payBill();
                cout<<"Thank You For Shopping With Us!!!"<<endl;
                exit(0);
            }
            break;
            }
        case 4:
            char sgbk;
            sportsgoback:
            sportschoices();
            cout<<"Do you want to go back to sports menu?(Y/N):";
            cin>>sgbk;
            if (sgbk=='Y'||sgbk=='y')
            {
                goto sportsgoback;
            }
            else
            {
            cout<<"Do you want continue shopping(select Y/N)"<<endl;
            cin>>contshopping;
            if(contshopping=='Y'||contshopping=='y')
            goto start;
            else
            {
                if(totalprice>=150000 && totalprice<300000)
                cout<<"Your Total bill is Rs(including discount of 10 percent) "<<totalprice-(totalprice*0.1)<<endl;
                else if(totalprice>=300000)
                cout<<"Your Total bill is Rs(including discount of 20 percent) "<<totalprice-(totalprice*0.2)<<endl;
                else
                {cout<<"Total bill is "<<totalprice<<endl;}
                payBill();
                cout<<"Thank You For Shopping With Us!!!"<<endl;
                exit(0);
            }
            break;
            }        
        default:
            cout<<"Invalid Choice, Please try again!"<<endl;
			goto start;
            break;
        }
    }
    else
    {
        cout<<"Please press 's' to start shopping"<<endl;
        goto start1;
    }
    return 0;
}