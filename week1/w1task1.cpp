#include<iostream>
#include<iomanip>

const double BASIC_PRICE = 200.0;
using namespace std;
int main()
{
	
	string caseCode = "";
	string ramCode = "";
	string mHddCode = "";
	string caseDescription = "";
	string ramDescription = "";
	string mHddDescription = "";
	double totalPrice = 0.0;
	double casePrice = 0.0;
	double ramPrice = 0.0;
	double mHddPrice = 0.0;
	
	
	string itemCode[17] = {"A1", "A2", "B1", "B2", "B3","C1", "C2", "C3", "D1",
	"D2", "E1", "E2", "E3", "F1", "F2", "G1", "G2"};
	
	string itemDescription[17] = {"Case Compact", "Case Tower", "Ram 8 GB", "Ram 16 GB",
	"Ram 32 GB", "Main Hard Drive 1 TB", "Main Hard Drive 2 TB",
	"Main Hard Drive 4 TB", "Soid State Drive 240 GB", 
	"Soid State Drive 480 GB", "Second Hard Disk Drive 1 TB",
	"Second Hard Disk Drive 2 TB", "Second Hard Disk Drive 4 TB", 
	"Optical Drive DVD/BLU-RAY Player","Optical Drive DVD/BLU-RAY Re-writer",
	"Operating System Standard Version", "Operating System Professional Version"};
	
	double itemPrice[17] = {75.0, 150.0, 79.99, 149.99, 299.99, 49.99, 89.99, 129.99,
	59.99, 119.99, 89.99, 129.99, 50.00, 100.00, 100.00, 175.00};
	cout << endl;
	cout << endl;
	cout << setw(49) << "Online Computer Shop\n\n";

	cout << setw(58) << "Cost of Basic components $200 is added\n";
	cout << setw(64) << "1 case, 1 RAM and 1 Main Hard Drive is required\n";
	cout << endl;
	cout << "--------------------------------------------------------------------------------\n";
	cout << "Case Details : \n";
	
	cout << fixed;
	
	cout << setw(19) << "Item code  " << setw(19) << "Item Description" << setw(19)
	  << "Item Price";
	cout << endl;
	for(int i = 0; i < 2; i++){
		cout << endl;
		cout << setw(13) << itemCode[i] << setw(22) << itemDescription[i];
		cout << setw(15) << "  $" << setprecision(2) << itemPrice[i];
		
	}
	
	cout << "\n\nEnter the case item code to select : ";
	cin >> caseCode;
	while(caseCode != "A1" && caseCode != "A2" && caseCode != "a2" && caseCode != "a1"){
		cout << "Invalid Choice\n";
		cout << "Enter the item code again : ";
		cin >> caseCode;
	}
	if(caseCode == "A1" || caseCode == "a1"){
		caseCode = "A1";
	}
	else if(caseCode == "a2" || caseCode == "A2"){
	
		caseCode = "A2";
	}
	
	cout << "\nRam Details : \n";

	
	cout << setw(19) << "Item code  " << setw(19) << "Item Description" << setw(19)  << "Item Price";
	cout << endl;
	
	
	for(int i = 2; i < 5; i++){
		cout << endl;
		cout << setw(13) << itemCode[i] << setw(22) << itemDescription[i];
		cout << setw(15) << "  $" << setprecision(2) << itemPrice[i];
	}
	
	int rCode = 0;
	cout << "\n\nEnter the Ram item code to select : ";
	cin >> ramCode;
	while(ramCode != "B1" && ramCode != "B2" && ramCode != "B3" && ramCode != "b1" 
	&& ramCode != "b2" && ramCode != "b3"){
		cout << "Invalid Choice\n";
		cout << "Enter the item code again : ";
		cin >> ramCode;
	}

		if(ramCode == "B1" || ramCode == "b1"){
		ramCode = "B1";
	}
	else if(ramCode == "b2" || ramCode == "B2"){
		ramCode = "B2";
	}
	else if(ramCode == "b3" || ramCode == "B3"){
		ramCode = "B3";
	}
	
	
	
	cout << "\nMain Hard Disk details :  ";
	cout << endl;
	cout << setw(19) << "Item code  " << setw(19) << "Item Description" << setw(19)  << "Item Price";
	cout << endl;
	for(int i = 5; i < 8; i++){
		cout << endl;
		cout << setw(13) << itemCode[i] << setw(27) << itemDescription[i];
		cout << setw(10) << "  $" << setprecision(2) << itemPrice[i];
	}
	
	cout << "\n\nEnter the Main Hard disk item code to select : ";
	cin >> mHddCode;
	while(mHddCode != "C1" && mHddCode != "C2" && mHddCode != "C3" && mHddCode != "c1" 
	&& mHddCode != "c2" && mHddCode != "c3"){
		cout << "Invalid Choice\n";
		cout << "Enter the item code again : ";
		cin >> mHddCode;
	}
		if(mHddCode == "C1" || mHddCode == "c1"){
		mHddCode = "C1";
	}
	else if(mHddCode == "c2" || mHddCode == "C2"){
		mHddCode = "C2";
	}
	else if(mHddCode == "c3" || mHddCode == "C3"){
		mHddCode = "C3";
	}	
	
	int i;
	for(i = 0; i < 8; i++){
		if(itemCode[i] == caseCode){
			casePrice = itemPrice[i];
			caseDescription = itemDescription[i];
		}
		if(itemCode[i] == ramCode){
			ramPrice = itemPrice[i];
			ramDescription = itemDescription[i];
		}
		if(itemCode[i] == mHddCode){
			mHddPrice = itemPrice[i];
			mHddDescription = itemDescription[i];
		}	
	}
	cout << "\nComponents are added to you order\n";
	totalPrice = BASIC_PRICE + casePrice + ramPrice + mHddPrice;
	cout << "--------------------------------------------------------------------------------\n";
	
	cout << "\n\nThe components of your computer are : \n";
	a
	cout << setw(19) << "Item code  " << setw(19) << "Item Description" << setw(19)  << "Item Price";
	cout << endl;
	
	cout << endl;
	cout << setw(13) << caseCode << setw(27) << caseDescription;
	cout << setw(10) << "  $" << setprecision(2) << casePrice;
	cout << endl;
	cout << setw(13) << ramCode << setw(27) <<ramDescription;
	cout << setw(10) << "  $" << setprecision(2) << ramPrice;
	cout << endl;
	cout << setw(13) << mHddCode << setw(27) << mHddDescription;
	cout << setw(10) << "  $" << setprecision(2) << mHddPrice;
	cout << endl;
	
	cout << "\nYour Computer Costs :  $" << totalPrice;
	
	
	return 0;
}
