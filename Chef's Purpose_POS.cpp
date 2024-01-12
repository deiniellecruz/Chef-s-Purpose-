#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
// Variable for Admin Users and Customer Users
 string userName[10] = {"CEO","Accountant","SoftwareDev"};
 string password[10] = {"chefspurpose","accountant","softwaredev"};
int usernumber, numAttempts = 0;
int theChoice, validity, validity2;
int accessed, login, daicus, inv, theInv, theSales;
int cancel, onOv, b, log, sign;
string enterName, enterPass;
int theLog, theLog2;
int tbs, tbs2;
float sales = 0;


// Variable for Menu
int choose,add = 0,add1 = 0,add2 = 0,quantity;
string order[] = {"   Maki                          ","   Sushi Party Trays             ","   Ebi Tempura                   "};
string order1[] = {"Philadelphia Maki   (PHP 210)    ","Salmon Aburi Maki  (PHP 230)     ","Crazy Ebi Tempura Maki  (PHP 230)","Tonkatsu Maki   (PHP 170)        ","Tropical Maki   (PHP 170)        ","Beef Teriyaki Maki  (PHP 180)    ","Spicy Tuna Maki   (PHP 170)      "};			   									   									   									   									   									   									   
string order2[] = {"Royal Platter  (PHP 766)         ","Emperor Platter  (PHP 785)       ","Supreme Platter  (PHP 1334)      "};
string order3[] = {"Solo   (PHP 120)                 ","Large  (PHP 220)			     ","Jumbo  (PHP 400)                 ","Supreme  (PHP 740)               "};				   									   									   						
int price1[] = {210,230,230,170,170,180,170};
int price2[] = {766,785,1334};
int price3[] = {120,220,400,740};
string myorder[30];
int myquantity[30];
int myprice[30];
int i;
int inv1[] = {10,10,10,10,10,10,10};
int inv2[] = {10,10,10};
int inv3[] = {10,10,10,10};
float sf = 120;



// Terminating the first Exit
void terminating()
{	
	cout << "Thank You for Using Chef's Purspose System. Have a nice day";
}




// Choosing between Customer, Admin or Exit
int chooseCusAd()
{
	char inputChoice;
	int theChoice;
	cout << setw(50) << "*******************************" << endl;
	cout << setw(50) << "*         WELCOME TO          *" << endl;
	cout << setw(50) << "*       CHEF's PURPOSE        *" << endl;
	cout << setw(50) << "*                             *" << endl;
	cout << setw(50) << "*  (Give in to your cravings) *" << endl;
	cout << setw(50) << "*                             *" << endl;
	cout << setw(50) << "*******************************" << endl;
	cout << setw(50) << "*        [A] Customer         *" << endl;
	cout << setw(50) << "*        [B] Admin            *" << endl;
	cout << setw(50) << "*        [C] Exit             *" << endl;
	cout << setw(50) << "*                             *" << endl;
	cout << setw(50) << "*******************************" << endl;
	cout << setw(45) << "Enter your choice:  ";
	cin >> inputChoice;
	if (inputChoice < 'D' && inputChoice >= 'A' || inputChoice < 'd' && inputChoice >= 'a'){
		if (inputChoice == 'a' || inputChoice == 'A')
		{
			return 0;
		} 
		else if (inputChoice == 'b' || inputChoice == 'B')
		{			
			return 1;
		} 
		else if (inputChoice == 'c' || inputChoice == 'C'){
			return 2;
		}
	} else {
		system("cls");
		cout << setw(50) << "You entered an invalid input." << endl;
		chooseCusAd();
	}
}



// Log in Admin Account
int loginAdmin()
{

	string inputUserName;
	string inputPassword;
	cout << "Enter your Admin Username: ";
	cin >> inputUserName;
	cout << "Enter your Password: ";
	cin >> inputPassword;
	for (int i =0; i < 10; i++){
		if ((inputUserName.compare(userName[i]) == 0) && (inputPassword.compare(password[i]) == 0)){ // for checking
			return 1;
		} 
	} return 0; 
}



// Choosing Between Daily Sales, Inventory, Exit
int chooseDaiCus()
{
	char inputChoice;
	int theChoice;
	cout << setw(50) << "***********************" << endl;
	cout << setw(50) << "*       WELCOME       *" << endl;
	cout << setw(50) << "*        ADMIN        *" << endl;
	cout << setw(50) << "*                     *" << endl;
	cout << setw(50) << "***********************" << endl;
	cout << setw(50) << "*     [A] Sales       *" << endl;
	cout << setw(50) << "*     [B] Inventory   *" << endl;
	cout << setw(50) << "*     [C] Back        *" << endl;
	cout << setw(50) << "*                     *" << endl;
	cout << setw(50) << "***********************" << endl;
	cout << setw(50) << " Enter your choice:  ";
	cin >> inputChoice;
	if (inputChoice < 'D' && inputChoice >= 'A' || inputChoice < 'd' && inputChoice >= 'a'){
		if (inputChoice == 'a' || inputChoice == 'A'){
			return 0;
		} else if (inputChoice == 'b' || inputChoice == 'B'){
			return 1;
		} else if (inputChoice  == 'c' || inputChoice == 'C'){
			return 2;
		}
	} else {
		system("cls");
		cout << setw(50) << "You entered an invalid input." << endl;
		chooseDaiCus();
	}
}



//Daily Sales
int presentingDS()
{
	char inputChoice;
	cout << setw(50) << "********************************" << endl;
	cout << setw(50) << "*     Chef's Purpose Sales     *" << endl;
	cout << setw(50) << "*                              *" << endl;
	cout << setw(50) << "********************************" << endl;
	cout << setw(33) << "* Total Sales: " << sales << " Php           *" << endl;
	cout << setw(50) << "*                              *" << endl;
	cout << setw(50) << "********************************" << endl;
	cout << setw(50) << "*          [A] Back            *" << endl;
	cout << setw(50) << "********************************" << endl;
	cout << setw(45) << "       Enter your choice: ";
	cin >> inputChoice;
	if (inputChoice < 'B' && inputChoice >= 'A' || inputChoice < 'b' && inputChoice >= 'a'){
		if (inputChoice == 'A' || inputChoice == 'a'){
			return 1;
		}
	} else {
		system("cls");
		cout << setw(45) <<  "You entered an invalid input" << endl;
		presentingDS();
	}
}



// Choosing Inventory
int accessingInv()
{
	char inputChoice;
	cout << setw(70)<< "*******************************************" << endl;
	cout << setw(70)<< "*     Inventory for the Chef's Purpose    *" << endl;
	cout << setw(70)<< "*                                         *" << endl;
	cout << setw(70)<< "*******************************************" << endl;
	cout << setw(70)<< "*             Maki Products               *" << endl;
	cout << setw(70)<< "*******************************************" << endl;
	cout << setw(57)<< "*          Philadelphia Maki: " << inv1[0] << "          *"<< endl;
	cout << setw(57)<< "*          Salmon Aburi Maki: " << inv1[1] << "          *" << endl;
	cout << setw(59)<< "*       Crazy Ebi Tempura Maki: " << inv1[2] << "        *" << endl;
	cout << setw(54)<< "*           Tonkatsu Maki: " << inv1[3] << "             *" <<endl;
	cout << setw(54)<< "*           Tropical Maki: " << inv1[4] << "             *" << endl;
	cout << setw(57)<< "*         Beef Teriyaki Maki: " << inv1[5] << "          *" <<endl;
	cout << setw(55)<< "*          Spicy Tuna Maki: " << inv1[6] << "            *" << endl;
	cout << setw(70)<< "*******************************************" << endl;
	cout << setw(70)<< "*              Platters                   *" << endl;
	cout << setw(70)<< "*******************************************" << endl;
	cout << setw(55)<< "*            Royal Platter: " << inv2[0] << "            *" << endl;
	cout << setw(56)<< "*           Emperor Platter: " << inv2[1] << "           *" << endl;
	cout << setw(56)<< "*           Supreme Platter: " << inv2[2] << "           *" <<  endl;
	cout << setw(70)<< "*******************************************" << endl;
	cout << setw(70)<< "*              Tempura                    *" << endl;
	cout << setw(70)<< "*******************************************" << endl;
	cout << setw(48)<< "*              Solo: " << inv3[0] << "                   *" <<  endl;
	cout << setw(48)<< "*             Large: " << inv3[1] << "                   *" <<endl;
	cout << setw(48)<< "*             Jumbo: " << inv3[2] << "                   *" << endl;
	cout << setw(49)<< "*            Supreme: " << inv3[3] << "                  *" <<endl;
	cout << setw(70)<< "*******************************************" << endl;
	cout << setw(70)<< "*            [A] Back                     *" <<endl;
	cout << setw(70)<< "*******************************************" << endl;
	cout << setw(60)<< "            Press A to go back: ";
	cin >> inputChoice;
	if (inputChoice < 'B' && inputChoice >= 'A' || inputChoice < 'b' && inputChoice >= 'a' ){
		if(inputChoice == 'A' || inputChoice == 'a'){
			return 0;
		}
	} else {
		system("cls");
		cout << setw(60) << "You enter an invalid input." << endl;
		accessingInv();
	}

}








//////////////////////////////////////////FOR CUSTOMER TRANSACTION FUNCTIONS/////////////////////////////////////////////////////////
int chooseOnOv()
{
	char inputChoice;
	cout << setw(50) << "**************************************" << endl;
	cout << setw(50) << "*          WELCOME CUSTOMER          *" <<endl;
	cout << setw(50)<< "*    How would you like to order?    *" << endl;
	cout << setw(50)<< "**************************************" << endl;
	cout << setw(50)<< "*           [A] Online               *" << endl;
	cout << setw(50)<< "*           [B] Over the counter     *" << endl;
	cout << setw(50)<< "*           [C] Back                 *" << endl;
	cout << setw(50)<< "**************************************" << endl;
	cout << setw(35)<< "Enter your choice: ";
	cin >> inputChoice;

 if (inputChoice < 'D' && inputChoice >= 'A' || inputChoice < 'd' && inputChoice >= 'a' ){
		   if (inputChoice == 'A' || inputChoice == 'a'){
		   	return 0;
		   } else if (inputChoice == 'B' || inputChoice == 'b'){
		   	return 1;
		   } else if (inputChoice == 'C' || inputChoice == 'c'){
		   	return 2;
		   }
        } else {
        	system("cls");
        	cout << setw(35) << "You entered an invalid input." << endl;
        	chooseOnOv();
		}
}

int base()
{
	char inputChoice;
	cout << setw(50)<< "***********************" << endl;
	cout << setw(50)<< "*     [A] Log in      *" << endl;
	cout << setw(50)<< "*     [B] Sign up     *" << endl;
	cout << setw(50)<< "*     [C] Back        *" << endl;
	cout << setw(50)<< "***********************" << endl;
	cout << setw(48)<< "Enter your choice: ";
	cin >> inputChoice;
	
	    if (inputChoice < 'D' && inputChoice >= 'A' || inputChoice < 'd' && inputChoice >= 'a' ){
		   if (inputChoice == 'A' || inputChoice == 'a'){
		   	return 0;
		   } else if (inputChoice == 'B' || inputChoice == 'b'){
		   	return 1;
		   } else if (inputChoice == 'C' || inputChoice == 'c'){
		   	return 2;
		   }
        } else {
        	system("cls");
        	cout << setw(35) << "You entered an invalid input.";
        	base();
		}

}
///////////////////////////////////////////////////////////////////////////THE TRANSACTION BASE SYSTEM//////////////////////////////////////////////
void showMenu(string menu[],int size)
{	
cout << "\t**************************************" << endl;
 for(int i = 0;i<size;i++){
   cout <<"\t* " <<(i+1) << "." << menu[i] << "*"<< endl;
}
   cout << "\t* " << "0.   Back" <<"                          *" << endl;
   cout << "\t**************************************" << endl << endl;
}

int choose1, choose2, choose3;
////////////////////////////////////online/////////////////////////////////////
int transactionBaseSystem()
{

while(true){
	una:
	do{
		cout << "\tWhat would you like to order?" <<endl<<endl;
		showMenu(order,3);
		cout << "\tEnter Order here:";
		cin >> choose;
		while(!cin){
	        cout << "\nYou enter an invalid input. \n";
	        cout << "Enter Order here again: ";
	        cin.clear();
	        cin.ignore(1);
	        cin >> choose;
    		}
	}while(choose<0 || choose>=6);

	if(choose==1){
		do
		{
			cout <<endl<< "\tWhat variation of Maki would you like?"<<endl;
			showMenu(order1,7);
			cout << "\tEnter order here:";
			cin >> choose;
			while(!cin)
				{
		        cout << "\t\nYou enter an invalid input. \n";
		        cout << "\tEnter Order here again: ";
		        cin.clear();
		        cin.ignore(1);
		        cin >> choose;
	    		}
		}while(choose<0 || choose>=8);
		
		if(choose == 0)
		{
			system("cls"); goto una;
		}
		
		myorder[add++] = order1[choose-1];
		
		do
		{
			cout << "\tEnter quantity:";
			cin >> quantity;
			if (inv1[choose-1] < quantity)
			{
			cout << "\tYou have entered a quantity that is higher than our maximum product. Redirecting you back to order again" << endl;
			add = 0;
			add1 =0;
			add2=0;
			goto una;
			}
		while(!cin)
		{
	        cout << "\t\nYou enter an invalid input. \n";
	        cout << "\tEnter quantity here again: ";
	        cin.clear();
	        cin.ignore(1);
	        cin >> quantity;
	        if (inv1[choose-1] < quantity){
				cout << "\tYou have entered a quantity that is higher than our maximum product. Redirecting you back to order again" << endl;
				add1 =0;
				add2=0;
				goto una;
				}
    	}
		if(quantity <=0)
		{
			cout << "\tQuantity can't be zero nor negative...\n" ;
		}
		}while(quantity <= 0);
		choose1 = 1;
		
	
		
		myquantity[add1++] = quantity;
		myprice[add2++] = price1[choose-1];
	}

	else if(choose==2){
		do
		{
			cout <<endl<< "\tWhat variation of Sushi Platter would you like?"<<endl;
			showMenu(order2,3);
			cout << "\tEnter order here:";
			cin >> choose;
			while(!cin)
			{
		        cout << "\t\nYou enter an invalid input. \n";
		        cout << "\tEnter Order here again: ";
		        cin.clear();
		        cin.ignore(1);
		        cin >> choose;
	    	}
		}
		while(choose<0 || choose>=4);
		
		if(choose == 0)
		{
			system("cls"); goto una;
		}
		myorder[add++] = order2[choose-1];
		do{
			
			cout << "\tEnter quantity:";
			cin >> quantity;
			
			if (inv2[choose-1] < quantity){
			cout << "\tYou have entered a quantity that is higher than our maximum product. Redirecting you back to order again" << endl;
			add = 0;
			add1 =0;
			add2=0;
			goto una;
		}
			while(!cin){
		        cout << "\t\nYou enter an invalid input. \n";
		        cout << "\tEnter quantity here again: ";
		        cin.clear();
		        cin.ignore(1);
		        cin >> quantity;
		         if (inv2[choose-1] < quantity){
			cout << "\tYou have entered a quantity that is higher than our maximum product. Redirecting you back to order again" << endl;
			add = 0;
			add1 =0;
			add2=0;
			goto una;
		}
		        
		        
		        
		        
		        
	    	}
			if(quantity <=0){
				cout << "\tQuantity can't be zero nor negative...\n" ;
			}
		}while(quantity <= 0);	
		choose2 = 1;
		
		myquantity[add1++] = quantity;
		myprice[add2++] = price2[choose-1];
	}

	else if(choose==3){
		do{
			cout <<endl<< "\tWhat size of Ebi Tempura would you like?"<<endl;
			showMenu(order3,4);
			cout << "\tEnter order here:";
			cin >> choose;
			while(!cin){
		        cout << "\t\nYou enter an invalid input. \n";
		        cout << "\tEnter Order here again: ";
		        cin.clear();
		        cin.ignore(1);
		        cin >> choose;
	    		}
		}while(choose<0 || choose>=5);
		
		if(choose == 0){
			system("cls"); goto una;
		}
		myorder[add++] = order3[choose-1];
		do{
		cout << "Enter quantity:";
		cin >> quantity;
		
			if (inv3[choose-1] < quantity){
			cout << "\tYou have entered a quantity that is higher than our maximum product. Redirecting you back to order again" << endl;
			add = 0;
			add1 =0;
			add2=0;
			goto una;
		}
		
		while(!cin){
        cout << "\t\nYou enter an invalid input. \n";
        cout << "\tEnter quantity here again: ";
        cin.clear();
        cin.ignore(1);
        cin >> quantity;
         if (inv3[choose-1] < quantity){
			cout << "\tYou have entered a quantity that is higher than our maximum product. Redirecting you back to order again" << endl;
			add = 0;
			add1 =0;
			add2=0;
			goto una;
		}
        
        
        
        
        
    }
		if(quantity <=0){
			cout << "\tQuantity can't be zero nor negative...\n" ;
		}
		}
		while(quantity <= 0);
		choose3 = 1;
	
		
		myquantity[add1++] = quantity;
		myprice[add2++] = price3[choose-1];
		
	}

	else if(choose == 0){
		return 1;
	}

	char again = '0';
	while(toupper(again)!='Y' && toupper(again)!='N'){
		cout << "\tOrder Again?[Y/N]:";
		cin >> again;
	}

	if(again == 'Y'|| again == 'y'){
		cout << endl << endl;
		system("cls");
		continue;
	}

	else
	{	
		if (choose1 == 1){
			inv1[choose-1] -= quantity;
		
		if (inv1[choose-1] < 0){
			cout << "\tThat product you chose is already out of order. Redirecting you back to order again" << endl;
			add = 0;
			add1 =0;
			add2=0;
			system("pause");
			goto una;	
		} 
		}
		
		if (choose2 == 1){
				inv2[choose-1] -= quantity;
		
			if (inv2[choose-1] < 0){
			cout << "\tThat product you chose is already out of order. Redirecting you back to order again" << endl;
			add = 0;
			add1 =0;
			add2=0;
			system("pause");
			goto una;	
		} 
		}
		
		if  (choose3 == 1){
			inv3[choose-1] -= quantity;
			if (inv3[choose-1] < 0){
			cout << "\tThat product you chose is already out of order. Redirecting you back to order again" << endl;
			add = 0;
			add1 = 0;
			add2=0;
			system("pause");
			goto una;	
		} 
		}
		
		
		
		
		float total = 0;
		float tendered;
		diskwento:
		cout << "\n\t***********************\n";
		cout << "\t* Customer Type:      *"<<endl;
		cout << "\t* 1. Senior or  P.W.D *" << endl;
		cout << "\t* 2. Regular          *"<< endl;
		cout << "\t***********************\n";
		cout << "\tInput Customer Type: ";
		cin >> choose;
	
		while(!cin)
		{			
	        cout << "\t\nYou enter an invalid input. \n";
	        cout << "\tEnter input here again: ";
	        cin.clear();
	        cin.ignore(1);
	        cin >> choose;
    	}
			for(int i = 0;i<add;i++){
				total+=(myquantity[i] * myprice[i]);
		}
			string type;
			double discount;
			double totalPrice;
			
			if(choose==1)
		{
			discount = total * 0.20;
		    total = total * 0.80 + 120;
			type = "Senior";
			
		}
			else if(choose==2)
		{
			total = total + 120 ;
			type = "Regular";
			discount = 0.0 ;
		}
		
		else if(!(choose == 1 || choose == 2))
		{
		goto diskwento;
		}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		cout << endl << "\t\t---------------------------------------------RECEIPT--------------------------------------------\n"<<endl;
		cout << "\t\tORDER\t\t\t\t\tQUANTITY\t\t\tPrice" << endl;
		cout << "\t\t------------------------------------------------------------------------------------------------" << endl;
		for(i = 0; i<add ;i++)
		{
			if(choose==1)
			{
				totalPrice = (myquantity[i] * myprice[i])  ;
			}
			else
			{
				totalPrice = (myquantity[i] * myprice[i]   );
			}
			cout << "\t\t" << myorder[i] << "\t\t" << myquantity[i] << "\t\t\t" << totalPrice <<endl;
		}
		
		

		cout << endl <<endl;
		cout << "\t\t------------------------------------------------------------------------------------------------" << endl;
		cout << "\t\tTYPE:"<< type << endl;
		cout << "\t\tSHIPPING FEE:PHP 120" << endl;
		cout << "\t\tDISCOUNT:PHP " << discount << endl;
		cout << "\t\tTOTAL:PHP " << total << endl;
		//input payment
		cout << "\n\t\tINPUT PAYMENT: ";
		cin >> tendered;
		
		while(tendered<total)
		{
			cout << "\n\t\tInsufficient Amount...."<< endl;
			cout << "\t\tINPUT PAYMENT AGAIN: ";
			cin >> tendered;
			while(!cin)
			{
		        cout << "\nYou enter an invalid input. \n";
		        cout << "INPUT PAYMENT AGAIN: ";
		        cin.clear();
		        cin.ignore(1);
		        cin >> tendered;
    		}
		}
		cout << "\t\tCHANGE:PHP " << tendered-total << endl;
		cout << "\t\t------------------------------------------------------------------------------------------------" << endl;
		sales += total;
	
		system("pause");
		system("cls");
		add1 =0;
		add2=0;
		add = 0;
		//clear myorder, myquantity, totalPrice
		goto una;
	}
}
return 0;
}

int theChoose1, theChoose2, theChoose3;
///////////////////////////////////////////// for Over the counter no shipping fee required////////////////////////////////////////////////
int transactionBaseSystem2()
{

while(true){
	una:
	do{
		cout << "\tWhat would you like to order?" <<endl<<endl;
		showMenu(order,3);
		cout << "\tEnter Order here:";
		cin >> choose;
		while(!cin){
	        cout << "\t\nYou enter an invalid input. \n";
	        cout << "\tEnter Order here again: ";
	        cin.clear();
	        cin.ignore(1);
	        cin >> choose;
    		}
	}while(choose<0 || choose>=6);

	if(choose==1){
		do
		{
			cout <<endl<< "\tWhat variation of Maki would you like?"<<endl;
			showMenu(order1,7);
			cout << "\tEnter order here:";
			cin >> choose;
			while(!cin)
				{
		        cout << "\t\nYou enter an invalid input. \n";
		        cout << "\tEnter Order here again: ";
		        cin.clear();
		        cin.ignore(1);
		        cin >> choose;
	    		}
		}while(choose<0 || choose>=8);
		
		if(choose == 0)
		{
			system("cls"); goto una;
		}
		myorder[add++] = order1[choose-1];
		do
		{
			cout << "\tEnter quantity:";
			cin >> quantity;
			if (inv1[choose-1] < quantity){
			cout << "\tYou have entered a quantity that is higher than our maximum product. Redirecting you back to order again" << endl;
			add = 0;
			add1 =0;
			add2=0;
			goto una;
		}
		while(!cin)
		{
	        cout << "\nYou enter an invalid input. \n";
	        cout << "\tEnter Order here again: ";
	        cin.clear();
	        cin.ignore(1);
	        cin >> quantity;
	        if (inv1[choose-1] < quantity){
			cout << "\tYou have entered a quantity that is higher than our maximum product. Redirecting you back to order again" << endl;
			add1 =0;
			add2=0;
			goto una;
		}
    	}
		if(quantity <=0)
		{
			cout << "\tQuantity can't be zero nor negative...\n" ;
		}
		}while(quantity <= 0);
		theChoose1 = 1;
		
	
		
		myquantity[add1++] = quantity;
		myprice[add2++] = price1[choose-1];
	}

	else if(choose==2){
		do
		{
			cout <<endl<< "\tWhat variation of Sushi Platter would you like?"<<endl;
			showMenu(order2,3);
			cout << "\tEnter order here:";
			cin >> choose;
			while(!cin)
			{
		        cout << "\t\nYou enter an invalid input. \n";
		        cout << "\tEnter Order here again: ";
		        cin.clear();
		        cin.ignore(1);
		        cin >> choose;
	    	}
		}
		while(choose<0 || choose>=4);
		
		if(choose == 0)
		{
			system("cls"); goto una;
		}
		myorder[add++] = order2[choose-1];
		do{
			
			cout << "\tEnter quantity:";
			cin >> quantity;
			
			if (inv2[choose-1] < quantity){
			cout << "\tYou have entered a quantity that is higher than our maximum product. Redirecting you back to order again" << endl;
			add = 0;
			add1 =0;
			add2=0;
			goto una;
		}
			while(!cin){
		        cout << "\t\nYou enter an invalid input. \n";
		        cout << "\tEnter Order here again: ";
		        cin.clear();
		        cin.ignore(1);
		        cin >> quantity;
		         if (inv2[choose-1] < quantity){
			cout << "\tYou have entered a quantity that is higher than our maximum product. Redirecting you back to order again" << endl;
			add = 0;
			add1 =0;
			add2=0;
			goto una;
		}
		        
		        
		        
		        
		        
	    	}
			if(quantity <=0){
				cout << "\tQuantity can't be zero nor negative...\n" ;
			}
		}while(quantity <= 0);	
		theChoose2 = 1;
	
		
		myquantity[add1++] = quantity;
		myprice[add2++] = price2[choose-1];
	}

	else if(choose==3){
		do{
			cout <<endl<< "\tWhat size of Ebi Tempura would you like?"<<endl;
			showMenu(order3,4);
			cout << "\tEnter order here:";
			cin >> choose;
			while(!cin){
		        cout << "\t\nYou enter an invalid input. \n";
		        cout << "\tEnter Order here again: ";
		        cin.clear();
		        cin.ignore(1);
		        cin >> choose;
	    		}
		}while(choose<0 || choose>=5);
		
		if(choose == 0){
			system("cls"); goto una;
		}
		myorder[add++] = order3[choose-1];
		do{
		cout << "\tEnter quantity:";
		cin >> quantity;
		
			if (inv3[choose-1] < quantity){
			cout << "\tYou have entered a quantity that is higher than our maximum product. Redirecting you back to order again" << endl;
			add = 0;
			add1 =0;
			add2=0;
			goto una;
		}
		
		while(!cin){
        cout << "\t\nYou enter an invalid input. \n";
        cout << "\tEnter Order here again: ";
        cin.clear();
        cin.ignore(1);
        cin >> quantity;
         if (inv3[choose-1] < quantity){
			cout << "\tYou have entered a quantity that is higher than our maximum product. Redirecting you back to order again" << endl;
			add = 0;
			add1 =0;
			add2=0;
			goto una;
		}
        
        
        
        
        
    }
		if(quantity <=0){
			cout << "\tQuantity can't be zero nor negative...\n" ;
		}
		}
		while(quantity <= 0);
		theChoose3 = 1;
	
		
		myquantity[add1++] = quantity;
		myprice[add2++] = price3[choose-1];
		
	}

	else if(choose == 0){
		return 1;
	}

	char again = '0';
	while(toupper(again)!='Y' && toupper(again)!='N'){
		cout << "\tOrder Again?[Y/N]:";
		cin >> again;
	}

	if(again == 'Y'|| again == 'y'){
		cout << endl << endl;
		system("cls");
		continue;
	}

	else
	{
		if(theChoose1 == 1){
			inv1[choose-1] -= quantity;
		
		if (inv1[choose-1] < 0){
			cout << "\tThat product you chose is already out of order. Redirecting you back to order again" << endl;
			add = 0;
			add1 =0;
			add2=0;
			system("pause");
			goto una;	
		} 
		}
		
		if (theChoose2 == 1){
			inv2[choose-1] -= quantity;
		
			if (inv2[choose-1] < 0){
			cout << "\tThat product you chose is already out of order. Redirecting you back to order again" << endl;
			add = 0;
			add1 =0;
			add2=0;
			system("pause");
			goto una;	
		} 
		}
		
		if (theChoose3 == 1){
				inv3[choose-1] -= quantity;
			if (inv3[choose-1] < 0){
			cout << "\tThat product you chose is already out of order. Redirecting you back to order again" << endl;
			add = 0;
			add1 = 0;
			add2=0;
			system("pause");
			goto una;	
		} 
		}
			
		float total = 0;
		float tendered;
		diskwento:
	
		cout << "\n\t***********************\n";
		cout << "\t* Customer Type:      *"<<endl;
		cout << "\t* 1. Senior or  P.W.D *" << endl;
		cout << "\t* 2. Regular          *"<< endl;
		cout << "\t***********************\n";
		cout << "\tInput Customer Type: ";
		cin >> choose;
	
		while(!cin)
		{			
	        cout << "\t\nYou enter an invalid input. \n";
	        cout << "\tEnter input here again: ";
	        cin.clear();
	        cin.ignore(1);
	        cin >> choose;
    	}
			for(int i = 0;i<add;i++){
				total+=(myquantity[i] * myprice[i]);
		}
			string type;
			double discount;
			double totalPrice;
			
			if(choose==1)
		{
			discount = total * 0.20;
		    total = total * 0.80;
			type = "Senior";
			
		}
			else if(choose==2)
		{
			total = total;
			type = "Regular";
			discount = 0.0;
		}
		
		else if(!(choose == 1 || choose == 2))
		{
		goto diskwento;
		}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		cout << endl << "\t\t---------------------------------------------RECEIPT--------------------------------------------\n"<<endl;
		cout << "\t\tORDER\t\t\t\t\tQUANTITY\t\t\tPrice" << endl;
		cout << "\t\t------------------------------------------------------------------------------------------------" << endl;
		for(i = 0; i<add ;i++)
		{
			if(choose==1)
			{
				totalPrice = (myquantity[i] * myprice[i]) ;
			}
			else
			{
				totalPrice = (myquantity[i] * myprice[i]);
			}
			cout << "\t\t" << myorder[i] << "\t\t" << myquantity[i] << "\t\t\t" << totalPrice <<endl;
		}
		

		cout << endl <<endl;
		cout << "\t\t------------------------------------------------------------------------------------------------" << endl;
		cout << "\t\tTYPE:"<< type << endl;
		cout << "\t\tDISCOUNT:PHP " << discount << endl;
		cout << "\t\tTOTAL:PHP " << total << endl;
		//input payment
		cout << "\n\t\tINPUT PAYMENT: ";
		cin >> tendered;
		
		while(tendered<total)
		{
			cout << "\n\t\tInsufficient Amount...."<< endl;
			cout << "\t\tINPUT PAYMENT AGAIN: ";
			cin >> tendered;
			while(!cin)
			{
		        cout << "\nYou enter an invalid input. \n";
		        cout << "INPUT PAYMENT AGAIN: ";
		        cin.clear();
		        cin.ignore(1);
		        cin >> tendered;
    		}
		}
		cout << "\t\tCHANGE:PHP " << tendered-total << endl;
		cout << "\t\t------------------------------------------------------------------------------------------------" << endl;
		sales += total;
	
		system("pause");
		system("cls");
		add1 =0;
		add2=0;
		add = 0;
		//clear myorder, myquantity, totalPrice
		goto una;
	}
}
return 0;
}

// Data or Accounts for Customers
string customerName[100] = {"clid","anj"};
int name_length = 0;
string customerPass[100] = {"group9","jabonero"};
int pass_length = 0;

// Logging In Customer Accounts
int loginCust()
{
	string inputUserName;
	string inputPassword;

	cout << "Enter your Customer Name: ";
	cin >> inputUserName;
	cout << "Enter your Customer Password: ";
	cin >> inputPassword;
	
	for (int i = 0; i < 100; i++){
		if ((inputUserName.compare(customerName[i]) == 0) && (inputPassword.compare(customerPass[i]) == 0) ){ // for checking
			return 1;
		} 
	} return 0;
}


// Signing up Customer Accounts
int signingUp()
{
	system("cls");
	string enterName, enterPass;
	string enterAdd;
	
	cout << "Terms and Conditions: The information that will be input is confidential and is between the customer and business only." << endl << endl;
	cout << "Enter your current address: " << endl;
	cin >> enterAdd;
	
	getline(cin,enterAdd);
	cout << "Create your own username: ";
	cin >> enterName;
	if(name_length < 100)
	{
		customerName[name_length++] = enterName;
	} 
	else
	{
		// just garbage for the name
	}
	cout << "Create your own password: ";
	cin >> enterPass;
	if (name_length < 100)
	{
		customerPass[pass_length++] = enterPass;
	} 
	else 
	{
		// just garbage for the password
	}
	return 1;
}

///////////////////////////////////////////////////////////////////MAIN FUNCTION////////////////////////////////////////////////////////////////////////////



main ()
{
	start:
	system("cls");
	do{
		accessed = chooseCusAd();
		switch (accessed){
			case 0: // For Customer System
			system("cls");
			onOv:
			onOv = chooseOnOv();
			if (onOv == 0){
				system("cls");
			
				b = base(); //  Online Transaction
				switch(b){
					case 0: // Loggin in existing account
						system("cls");
						while (numAttempts < 3){
							
							theLog = loginCust();
							if (theLog == 1){
								system("cls"); // Start of Transaction
								tbs = transactionBaseSystem();
									if (tbs == 1){
									cancel = 1;
									login--;
									accessed--;
									daicus--;
									numAttempts -= 4;
									sign--;
									theLog--;
									add = 0;
									add1 =0;
									add2=0;
									goto start;
								}
							} else {
								cout << "Invalid username or password. Try again" << endl << endl;
								numAttempts++;
							}
						} if (numAttempts == 3){
							cout << "You have reached maximum attempts. System Terminated.";
							cancel = 0;
						}
						break;


					case 1:
						system("cls");
						sign = signingUp(); // Signing Up an Account
						if (sign == 1){
							system("cls");
							cout << "Account Created! Login and Order Now at Chef's Purpose" << endl << endl;
							system("pause");
							while(numAttempts < 3){
							 theLog2 = loginCust();
							if (theLog2 == 1){
								cout << "Presenting Menu";
								tbs = transactionBaseSystem();
								if (tbs == 1){
									cancel = 1;
									login--;
									accessed--;
									daicus--;
									numAttempts -= 4;
									sign--;
									theLog2--;
									add = 0;
									add1 =0;
									add2=0;
									goto start;
								}
							} else if (theLog == 0) {
								cout << "Invalid Customer name and password. Try again" << endl << endl;
								numAttempts++;
							}

							} if (numAttempts == 3){
							cout << "You have reached maximum attempts. System Terminated.";
							cancel = 0;
						}
						}
						break;


					case 2:
						system("cls");
						cancel = 1;
						accessed--;
						onOv = 0;
						goto onOv;
						break;

				}
			} else if (onOv == 1){

				// this is for Over the Counter Transaction
				system("cls");
				tbs2 = transactionBaseSystem2();
				if (tbs2 == 1){
					accessed--;
					cancel = 1;
					add = 0;
					add1 =0;
					add2=0;
					goto start;
				}




			} else if (onOv == 2){ // loop back
				system("cls");
				cancel = 1;
				accessed--;
			}
			break;



			case 1: // For Admin
			system("cls");
			while (numAttempts < 3) {

				login = loginAdmin(); // Logging in Existing Data for Admin
				if (login == 1){
					do{
						system("cls");
						daicus = chooseDaiCus();
						switch (daicus){
						case 0: // for Sales
						system("cls");
							theSales = presentingDS();
							if (theSales == 1){
								validity2 = 1;
								validity = 0;
								daicus--;
								numAttempts -= 4;
								break;
							}
							return 0;
							break;
						case 1: // for Inventory
						system("cls");
							inv = accessingInv();
							if (inv == 0){
								validity2 = 1;
								validity = 0;
								daicus--;
								numAttempts -= 4;
								break;
							}
							break;
						case 2:  // back to the Customer Admin
						system("cls");
							validity = 1;
							numAttempts = 4;
							break;
					}
					}while (validity2 == 1 && validity !=1);

					break;
				} else {
					cout << "Invalid username or password. Try Again" << endl << endl;
					numAttempts++;
				}

			} if (numAttempts == 3) {
				cout << "You have reached maximum attempts. System Terminated.";
				cancel = 0;
				break;
			} if (validity == 1){ // to loop back
				cancel = 1;
				login--;
				accessed--;
				daicus--;
				numAttempts -= 4;
			}
			break;

			case 2: // exit
			system("cls");
			terminating();
			cancel = 0;
			break;
		}
	} while(cancel != 0);
}
