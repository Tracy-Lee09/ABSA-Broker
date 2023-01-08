//ABSA bank investments in March

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int amtClient;
	double invClient;
	double invClient2 = 0;
	double invIncen;
	double clientIncen;
	double clientInv;
	double invTotal;
	double brokIncen;
	double clientInv2 = 0;
	string name;

	for (int t = 0; t < 10; t++)
	{
		cout << "What is the brokers name?" << endl;
		cin >> name;

		//Ask the amount of clients the broker has seen.
		cout << "How many clients has the broker seen in March?" << endl;
		cin >> amtClient;

		//Creat a for statement to loop the amount of clients.
		for (int i = 0; i < amtClient; i++)
		{
			cout << "How much as each client invested? Client " << i << ":" << endl;
			cin >> invClient;
			invClient2 = invClient2 + invClient;
			//We must add an extra R50 for every client that invested.
			if (invClient > 0)
			{
				clientInv = 50 * 1;
				clientInv2 = clientInv2 + clientInv;
			}
		}

		//Calculations
		invIncen = invClient2 + (invClient2 * 0.02); //Investment incentive is 2% of total money invested.

		clientIncen = 50 * amtClient; //Adds R50 for every client.

		invTotal = invClient2; //Total investment for the broker.
		brokIncen = invIncen + clientIncen + clientInv2; //Total broker incentive.

		cout << name << " has invested in total " << invTotal << " and their incentive is " << brokIncen << endl;
	}

	return 0;
}