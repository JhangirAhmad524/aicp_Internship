#include<iostream>
#include<iomanip>

const double BASIC_PRICE = 200.0;
using namespace std;
int main()
{
	
	string caseCode = "";
	string ramCode = "";
	string mHddCode = "";
	string sHddCode = "";
	string ssdCode = "";
	string opDriveCode = "";
	string osCode = "";
	string caseDescription = "";
	string ramDescription = "";
	string mHddDescription = "";
	string ssdDescription = "";
	string sHddDescription = "";
	string opDriveDescription = "";
	string osDescription = "";
	double totalPrice = 0.0;
	double casePrice = 0.0;
	double ramPrice = 0.0;
	double mHddPrice = 0.0;
	double sHddPrice = 0.0;
	double ssdPrice = 0.0;
	double opDrivePrice = 0.0;
	double osPrice = 0.0;
	char choice;
	
	
	string itemCode[17] = {"A1", "A2", "B1", "B2", "B3","C1", "C2", "C3", "D1",
	"D2", "E1", "E2", "E3", "F1", "F2", "G1", "G2"};
	
	string itemDescription[17] = {"Case Compact", "Case Tower", "Ram 8 GB", "Ram 16 GB",
	"Ram 32 GB", "Main Hard Drive 1 TB", "Main Hard Drive 2 TB",
	"Main Hard Drive 4 TB", "Soid State Drive 240 GB", 
	"Soid State Drive 480 GB", "Second Hard Drive 1 TB",
	"Second Hard Drive 2 TB", "Second Hard Drive 4 TB", 
	"Optical Drive DVD/BLU-RAY Player","Optical Drive DVD/BLU-RAY Re-writer",
	"Operating System Standard Version", "Operating System Professional Version"};
	
	double itemPrice[17] = {75.0, 150.0, 79.99, 149.99, 299.99, 49.99, 89.99, 129.99,
	59.99, 119.99, 49.99, 89.99, 129.99, 50.00, 100.00, 100.00, 175.00};
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
	
	cout << "\nDo you want to buy additional Items\n";
	cout << "Enter 'y' for yes and 'n' for No : ";
	cin >> choice;
	while(choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N'){
		cout << "\nInvalid choice! Enter choice again : ";
		cin >> choice;
		
	}
	if(choice == 'y'){
	cout << "\nSolid State Drive details :  ";
	cout << endl;
	cout << setw(19) << "Item code  " << setw(19) << "Item Description" << setw(19)  << "Item Price";
	cout << endl;
	for(int i = 8; i < 10; i++){
		cout << endl;
		cout << setw(13) << itemCode[i] << setw(29) << itemDescription[i];
		cout << setw(10) << "  $" << setprecision(2) << itemPrice[i];
	}
	
	cout << "\n\nEnter the Solid state drive item code to select : ";
	cin >> ssdCode;
	while(ssdCode != "d1" && ssdCode != "d2" && ssdCode != "D1" && ssdCode != "D2"){
		cout << "Invalid Choice\n";
		cout << "Enter the item code again : ";
		cin >> ssdCode;
	}
	if(ssdCode == "d1" || ssdCode == "D1"){
		ssdCode = "D1";
	}
	else if(ssdCode == "d2" || ssdCode == "D2"){
		ssdCode = "D2";
	}
	
	cout << "\nSecond Hard disk details :  ";
	cout << endl;
	cout << setw(19) << "Item code  " << setw(19) << "Item Description" << setw(19)  << "Item Price";
	cout << endl;
	for(int i = 10; i < 13; i++){
		cout << endl;
		cout << setw(13) << itemCode[i] << setw(27) << itemDescription[i];
		cout << setw(10) << "  $" << setprecision(2) << itemPrice[i];
	}
	
	cout << "\n\nEnter the Second Hard disk item code to select : ";
	cin >> sHddCode;
	while(sHddCode != "e1" && sHddCode != "e2" && sHddCode != "e3" && sHddCode != "E1"
	&& sHddCode != "E2" && sHddCode != "E3"){
		cout << "Invalid Choice\n";
		cout << "Enter the item code again : ";
		cin >> sHddCode;
	}
	if(sHddCode == "e1" || sHddCode == "E1"){
		sHddCode = "E1";
	}
	else if(sHddCode == "e2" || sHddCode == "E2"){
		sHddCode = "E2";
	}
	else if(sHddCode == "e3" || sHddCode == "E3"){
		sHddCode = "E3";
	}
	
	cout << "\nOptical Drive details :  ";
	cout << endl;
	cout << setw(19) << "Item code  " << setw(27) << "Item Description" << setw(19)  << "Item Price";
	cout << endl;
	for(int i = 13; i < 15; i++){
		cout << endl;
		cout << setw(13) << itemCode[i] << setw(39) << itemDescription[i];
		cout << setw(10) << "  $" << setprecision(2) << itemPrice[i];
	}
	
	cout << "\n\nEnter the Optical drive item code to select : ";
	cin >> opDriveCode;
	while(opDriveCode != "f1" && opDriveCode != "f2" && opDriveCode != "F1" && opDriveCode != "F2"){
		cout << "Invalid Choice\n";
		cout << "Enter the item code again : ";
		cin >> opDriveCode;
	}
	if(opDriveCode == "f1" || opDriveCode == "F1"){
		opDriveCode = "F1";
	}
	else if(opDriveCode == "f2" || opDriveCode == "F2"){
		opDriveCode = "F2";
	}
	
	cout << "\nOperating system details :  ";
	cout << endl;
	cout << setw(19) << "Item code  " << setw(27) << "Item Description" << setw(19)  << "Item Price";
	cout << endl;
	for(int i = 15; i < 17; i++){
		cout << endl;
		cout << setw(13) << itemCode[i] << setw(42) << itemDescription[i];
		cout << setw(10) << "  $" << setprecision(2) << itemPrice[i];
	}
	
	cout << "\n\nEnter the Optical drive item code to select : ";
	cin >> osCode;
	while(osCode != "g1" && osCode != "g2" && osCode != "G1" && osCode != "G2"){
		cout << "Invalid Choice\n";
		cout << "Enter the item code again : ";
		cin >> osCode;
	}
	if(osCode == "g1" || osCode == "G1"){
		osCode = "G1";
	}
	else if(osCode == "g2" || osCode == "G2"){
		osCode = "G2";
	}
	
	int i;
	for(i = 0; i < 17; i++){
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
		if(itemCode[i] == ssdCode){
			ssdPrice = itemPrice[i];
			ssdDescription = itemDescription[i];
		}
		if(itemCode[i] == sHddCode){
			sHddPrice = itemPrice[i];
			sHddDescription = itemDescription[i];
			}
			if(itemCode[i] == opDriveCode){
			opDrivePrice = itemPrice[i];
			opDriveDescription = itemDescription[i];
			}
			if(itemCode[i] == osCode){
			osPrice = itemPrice[i];
			osDescription = itemDescription[i];
			}	
		}
		cout << "\nComponents are added to you order\n";
		totalPrice = BASIC_PRICE + casePrice + ramPrice + mHddPrice + ssdPrice + 
		sHddPrice + opDrivePrice + osPrice;
		cout << "--------------------------------------------------------------------------------\n";
	
		cout << "\n\nThe components of your computer are : \n";
	
		cout << setw(19) << "Item code  " << setw(29) << "Item Description" << setw(25)  << "Item Price";
		cout << endl;
	
		cout << endl;
		cout << setw(13) << caseCode << setw(39) << caseDescription;
		cout << setw(13) << "  $" << setprecision(2) << casePrice;
		cout << endl;
		cout << setw(13) << ramCode << setw(39) <<ramDescription;
		cout << setw(13) << "  $" << setprecision(2) << ramPrice;
		cout << endl;
		cout << setw(13) << mHddCode << setw(39) << mHddDescription;
		cout << setw(13) << "  $" << setprecision(2) << mHddPrice;
		cout << endl;
		cout << setw(13) << ssdCode << setw(39) << ssdDescription;
		cout << setw(13) << "  $" << setprecision(2) << ssdPrice;
		cout << endl;
		cout << setw(13) << sHddCode << setw(39) << sHddDescription;
		cout << setw(13) << "  $" << setprecision(2) << sHddPrice;
		cout << endl;
		cout << setw(13) << opDriveCode << setw(39) << opDriveDescription;
		cout << setw(13) << "  $" << setprecision(2) << opDrivePrice;
		cout << endl;
		cout << setw(13) << osCode << setw(39) << osDescription;
		cout << setw(13) << "  $" << setprecision(2) << osPrice;
		cout << endl;
		
		cout << "\nYour Computer Costs :  $" << totalPrice;
	}
	else if(choice == 'n'){
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
	}
	

	
	
	return 0;
}
