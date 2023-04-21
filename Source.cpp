/*
Cary Dakota Wolfe
04/14/2023
CS210
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	int spinachNum = 0, radishNum = 0, broccoliNum = 0, peaNum = 0, cranNum = 0, potatoNum = 0, cucNum = 0, peachNum = 0;
	int zuccNum = 0, cantaloupeNum = 0, beetNum = 0, cauliNum = 0, onionNum = 0, yamNum = 0, appleNum = 0, celeryNum = 0, limeNum = 0;
	int garlicNum = 0, pumpkinNum = 0, pearNum = 0, userChoice; //initializes all variables used to count the number of each produce item bought.
	string producePurchase;										//^with the exception of userChoice, which is used to operate the program's menu.
	string produceItem; //produceItem is used to read information from the .txt file, producePurchase stores that information for use.
	string itemLookup; //used in choice 1 of the program's menu

	ifstream produceSales("produce.txt");   //reads data from the file produce.txt

	while (getline (produceSales, produceItem)) //processes data from file line by line
	{
		
		producePurchase = produceItem; //stores data taken by produceItem into producePurchase

		/*cout << produceItem << "\n";*/ //used to test while loop and .txt file.

		if (producePurchase == "Spinach") //the following if loops check producePurchase for matching contents, if the contents match, one is added..
		{								  //to the respective value. This is used to track the number of sales for each item.
			spinachNum = spinachNum + 1;
		}
		if (producePurchase == "Radishes")
		{
			radishNum = radishNum + 1;
		}
		if (producePurchase == "Broccoli")
		{
			broccoliNum = broccoliNum + 1;
		}
		if (producePurchase == "Peas")
		{
			peaNum = peaNum + 1;
		}
		if (producePurchase == "Cranberries")
		{
			cranNum = cranNum + 1;
		}
		if (producePurchase == "Potatoes")
		{
			potatoNum = potatoNum + 1;
		}
		if (producePurchase == "Cucumbers")
		{
			cucNum = cucNum + 1;
		}
		if (producePurchase == "Peaches")
		{
			peachNum = peachNum + 1;
		}
		if (producePurchase == "Zucchini")
		{
			zuccNum = zuccNum + 1;
		}
		if (producePurchase == "Cantaloupe")
		{
			cantaloupeNum = cantaloupeNum + 1;
		}
		if (producePurchase == "Beets")
		{
			beetNum = beetNum + 1;
		}
		if (producePurchase == "Cauliflower")
		{
			cauliNum = cauliNum + 1;
		}
		if (producePurchase == "Onions")
		{
			onionNum = onionNum + 1;
		}
		if (producePurchase == "Yams")
		{
			yamNum = yamNum + 1;
		}
		if (producePurchase == "Apples")
		{
			appleNum = appleNum + 1;
		}
		if (producePurchase == "Celery")
		{
			celeryNum = celeryNum + 1;
		}
		if (producePurchase == "Limes")
		{
			limeNum = limeNum + 1;
		}
		if (producePurchase == "Garlic")
		{
			garlicNum = garlicNum + 1;
		}
		if (producePurchase == "Pumpkins")
		{
			pumpkinNum = pumpkinNum + 1;
		}
		if (producePurchase == "Pears")
		{
			pearNum = pearNum + 1;
		}									// if loop end
	}										// while loop end / reading of produce.txt end

	ofstream freq("frequency.dat");         // creates and opens data file named frequency.dat for backup of information

	freq << "Spinach " << spinachNum << endl; // the following lines (115 - 134) store sales data into frequency.dat for safe backup
	freq << "Radishes " << radishNum << endl;
	freq << "Broccoli " << broccoliNum << endl;
	freq << "Peas " << peaNum << endl;
	freq << "Cranberries " << cranNum << endl;
	freq << "Potatoes " << potatoNum << endl;
	freq << "Cucumbers " << cucNum << endl;
	freq << "Peaches " << peachNum << endl;
	freq << "Zucchini " << zuccNum << endl;
	freq << "Cantaloupe " << cantaloupeNum << endl;
	freq << "Beets " << beetNum << endl;
	freq << "Cauliflower " << cauliNum << endl;
	freq << "Onions " << onionNum << endl;
	freq << "Yams " << yamNum << endl;
	freq << "Apples " << appleNum << endl;
	freq << "Celery " << celeryNum << endl;
	freq << "Limes " << limeNum << endl;
	freq << "Garlic " << garlicNum << endl;
	freq << "Pumpkins " << pumpkinNum << endl;
	freq << "Pears " << pearNum << endl;

	freq.close();                                   //closes frequency.dat
	produceSales.close();                           //closes produce.txt

	cout << "Welcome to the Corner Grocer item-tracking program!\n";   //menu interface for user of program
	cout << "Please choose from one of the options below.\n\n";
	cout << "[1] Find the number of sales for a specific item.\n";
	cout << "[2] Display all items and the number of sales for each item.\n";
	cout << "[3] Display sales information in the form of a histogram.\n";
	cout << "[4] Exit program.\n\n";

	cin >> userChoice;  //stores user's menu choice

	while (userChoice != 4) //while the user does not enter 4 (to exit), the program continues.
	{
		if (userChoice == 1) //reads user's menu choice, if the user enters 1, the following executes
		{
			cout << "\nEnter an item name. The number of sales for that item will be displayed.\n\n";
			cout << "(NOTE) Begin your input with a capital letter followed by lowercase letters.\n";
			cout << "Correct entry -> Spinach      Incorrect entries -> spinach / sPinach / sPINACH\n\n";
			cin >> itemLookup;           //stores the name of the item the customer wants to look up
			cout << "\n";
			if (itemLookup == "Spinach")   //each loop checks for a match between itemLookup and an item included in produce.txt lines(157-236)
			{
				cout << spinachNum << " sales." << endl;
			}
			else if (itemLookup == "Radishes")
			{
				cout << radishNum << " sales." << endl;
			}
			else if (itemLookup == "Broccoli")
			{
				cout << broccoliNum << " sales." << endl;
			}
			else if (itemLookup == "Peas")
			{
				cout << peaNum << " sales." << endl;
			}
			else if (itemLookup == "Cranberries")
			{
				cout << cranNum << " sales." << endl;
			}
			else if (itemLookup == "Potatoes")
			{
				cout << potatoNum << " sales." << endl;
			}
			else if (itemLookup == "Cucumbers")
			{
				cout << cucNum << " sales." << endl;
			}
			else if (itemLookup == "Peaches")
			{
				cout << peachNum << " sales." << endl;
			}
			else if (itemLookup == "Zucchini")
			{
				cout << zuccNum << " sales." << endl;
			}
			else if (itemLookup == "Cantaloupe")
			{
				cout << cantaloupeNum << " sales." << endl;
			}
			else if (itemLookup == "Beets")
			{
				cout << beetNum << " sales." << endl;
			}
			else if (itemLookup == "Cauliflower")
			{
				cout << cauliNum << " sales." << endl;
			}
			else if (itemLookup == "Onions")
			{
				cout << onionNum << " sales." << endl;;
			}
			else if (itemLookup == "Yams")
			{
				cout << yamNum << " sales." << endl;
			}
			else if (itemLookup == "Apples")
			{
				cout << appleNum << " sales." << endl;
			}
			else if (itemLookup == "Celery")
			{
				cout << celeryNum << " sales." << endl;
			}
			else if (itemLookup == "Limes")
			{
				cout << limeNum << " sales." << endl;
			}
			else if (itemLookup == "Garlic")
			{
				cout << garlicNum << " sales." << endl;
			}
			else if (itemLookup == "Pumpkins")
			{
				cout << pumpkinNum << " sales." << endl;
			}
			else if (itemLookup == "Pears")
			{
				cout << pearNum << " sales." << endl;
			}
			else                                           
			{                                              //if no match is found, the else loop executes.
				cout << "\nNo sales information for " << itemLookup <<".\n";
			}
			cout << "\nAction completed.\n";                             //The original menu is repeated here so the user can continue making...
			cout << "Please choose from one of the options below.\n\n";  //choices until they wish to exit.
			cout << "[1] Find the number of sales for a specific item.\n";
			cout << "[2] Display all items and the number of sales for each item.\n";
			cout << "[3] Display sales information in the form of a histogram.\n";
			cout << "[4] Exit program.\n\n";
			cin >> userChoice;
		}
		else if (userChoice == 2)  //reads user's menu choice, if the user enters 2, the following executes
		{
			cout << "\nAll produce items are listed below, alongside the number of sales for each item.\n";
			cout << "(produce item) (number of sales for that item)\n\n";

			cout << "Spinach " << spinachNum << endl; //outputs the name of the produce item, and the number of sales the item has (lines 254-273)
			cout << "Radishes " << radishNum << endl;
			cout << "Broccoli " << broccoliNum << endl;
			cout << "Peas " << peaNum << endl;
			cout << "Cranberries " << cranNum << endl;
			cout << "Potatoes " << potatoNum << endl;
			cout << "Cucumbers " << cucNum << endl;
			cout << "Peaches " << peachNum << endl;
			cout << "Zucchini " << zuccNum << endl;
			cout << "Cantaloupe " << cantaloupeNum << endl;
			cout << "Beets " << beetNum << endl;
			cout << "Cauliflower " << cauliNum << endl;
			cout << "Onions " << onionNum << endl;
			cout << "Yams " << yamNum << endl;
			cout << "Apples " << appleNum << endl;
			cout << "Celery " << celeryNum << endl;
			cout << "Limes " << limeNum << endl;
			cout << "Garlic " << garlicNum << endl;
			cout << "Pumpkins " << pumpkinNum << endl;
			cout << "Pears " << pearNum << endl;

			cout << "\nAction completed.\n";                            //The original menu is repeated here so the user can continue making...
			cout << "Please choose from one of the options below.\n\n"; //choices until they wish to exit.
			cout << "[1] Find the number of sales for a specific item.\n";
			cout << "[2] Display all items and the number of sales for each item.\n";
			cout << "[3] Display sales information in the form of a histogram.\n";
			cout << "[4] Exit program.\n\n";
			cin >> userChoice;
		}
		else if (userChoice == 3) //reads user's menu choice, if the user enters 3, the following executes
		{
		cout << "A text-based histogram is shown below.\n\n";

		cout << "    Spinach " << string(spinachNum, '*') << endl; //outputs the name of the produce item, and the number of sales the item has
		cout << "   Radishes " << string(radishNum, '*') << endl;  //number of sales are denoted by '*'
		cout << "   Broccoli " << string(broccoliNum, '*') << endl;
		cout << "       Peas " << string(peaNum, '*') << endl;
		cout << "Cranberries " << string(cranNum, '*') << endl;
		cout << "   Potatoes " << string(potatoNum, '*') << endl;
		cout << "  Cucumbers " << string(cucNum, '*') << endl;
		cout << "    Peaches " << string(peachNum, '*') << endl;
		cout << "   Zucchini " << string(zuccNum, '*') << endl;
		cout << " Cantaloupe " << string(cantaloupeNum, '*') << endl;
		cout << "      Beets " << string(beetNum, '*') << endl;
		cout << "Cauliflower " << string(cauliNum, '*') << endl;
		cout << "     Onions " << string(onionNum, '*') << endl;
		cout << "       Yams " << string(yamNum, '*') << endl;
		cout << "     Apples " << string(appleNum, '*') << endl;
		cout << "     Celery " << string(celeryNum, '*') << endl;
		cout << "      Limes " << string(limeNum, '*') << endl;
		cout << "     Garlic " << string(garlicNum, '*') << endl;
		cout << "   Pumpkins " << string(pumpkinNum, '*') << endl;
		cout << "      Pears " << string(pearNum, '*') << endl;

		cout << "\nAction completed.\n";                            //The original menu is repeated here so the user can continue making...
		cout << "Please choose from one of the options below.\n\n"; //choices until they wish to exit.
		cout << "[1] Find the number of sales for a specific item.\n";
		cout << "[2] Display all items and the number of sales for each item.\n";
		cout << "[3] Display sales information in the form of a histogram.\n";
		cout << "[4] Exit program.\n\n";
		cin >> userChoice;

		}
		else //If the user enters something other than 1, 2, 3, or 4, the following executes
		{
			cout << "\nInvalid entry. Please try again.\n";
			                                                            //The original menu is repeated here so the user can continue making...
			cout << "Please choose from one of the options below.\n\n"; //choices until they wish to exit.
			cout << "[1] Find the number of sales for a specific item.\n";
			cout << "[2] Display all items and the number of sales for each item.\n";
			cout << "[3] Display sales information in the form of a histogram.\n";
			cout << "[4] Exit program.\n\n";
			cin >> userChoice;
		}
	}
									//When the user enters 4, the program will output the following message, and then terminate.
	cout << "\nProgram exited.\n";  



}