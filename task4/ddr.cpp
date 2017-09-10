#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;


int main()
{
	//fstream file;

	//file.open("donation_total.txt");  
    ifstream file1("donation_total.txt");
	if(file1.is_open())
	{
		int temp;
		while(!file1.eof())
		{
			file1 >> temp;
			

		}
		file1.close();
		cout << "Current running total is " << temp << "$" << endl;
	}	

	else
	{
		cout << "Couldn't open file for reading. Please, try again!" << endl;
	}
	


    ofstream file2("donation_total.txt", ios::app);
	if(file2.is_open())
	{

		cout << "Would you like to make any donations? (Y/N)" << endl;
		
		bool valid = true;
		do
		{
			string str, name, donation;
			stringstream stream;
			int tot;			
			char answer;
			cin >> answer;
			switch(answer)
			{
				case 'y':
				case 'Y':
					cout << "Please enter your name and amount of donation: " << endl;			

					cin.ignore();
					getline(cin, str);
					stream.str(str);
					stream >> name >> donation;
				    tot = stoi(donation);	
					file2 << tot << endl;
					valid = true;
					break;
					 
				case 'n':
				case 'N':
					valid = true;
					break;

				default :
					cout << "Wrong answer!" << endl;
					valid = false;
					break;
			}				

		} while(!valid);

		file2.close();
	}	

	else
	{
		cout << "Couldn't open file for reading. Please, try again!" << endl;
	}



	return 0;
}
