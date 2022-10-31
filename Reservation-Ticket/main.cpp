#include<iostream>
using namespace std;
struct seats
{
	int seat_num;
	bool rstatus;
};
struct cars
{
	int id;
	seats s[30];
};
void reserve(cars car[10], int car_num, int new_seat)
{
	if (car[car_num - 1].s[new_seat-1].rstatus == true)
	{
		car[car_num - 1].s[new_seat-1].rstatus = false;
		cout << "Done." << endl;
	}
	else
	{
		cout << "The seat is already reserved" << endl;
	}

}
void cancel(cars car[10], int car_num, int new_seat)
{
	if (car[car_num - 1].s[new_seat-1].rstatus == false)
	{
		car[car_num - 1].s[new_seat-1].rstatus = true;
		cout << "Done." << endl;
	}
	else
	{
		cout << "The seat is not reserved" << endl;
	}

}
void check_seat(cars car[10], int car_num)
{
		int counter=0;
		for(int i=0;i<5;i++)
		{
		    if(car[car_num-1].s[i].rstatus==true)
			{
				counter++;
			}
		}

		if(counter>0)
			cout<<"car has available seat"<<endl;
		else
			cout<<"car has not available seat"<<endl;
		}
void check(cars car[10], int car_num, int new_seat)
{
	if (car[car_num - 1].s[new_seat-1].rstatus == false)
	{
		cout << "seat is not available" << endl;
	}
	else
	{
		cout << "seat is available" << endl;
		cout << "" << endl;
	}

}
void check_seat_num(cars car[10], int car_num)
{
		int counter=0;
		for(int i=0;i<5;i++)
		{
		    if(car[car_num-1].s[i].rstatus==true)
			{
				counter++;
			}
		}

		if(counter>0)
			cout<<"seat number="<<counter<<endl;
		else
			cout<<"car has not available seat"<<endl;
		}
void check_seat_status(cars car[10], int car_num)
{
		int counter=0;
		for(int i=0;i<5;i++)
		{
		    if(car[car_num-1].s[i].rstatus==true)
			{
				counter++;
			}

		if(counter>0)
			cout<<i+1<<" "<<"not reserved"<<endl;
		else
			cout<<i+1<<" "<<"reserved"<<endl;
		}
		}

int main()
{
	cars car[10];
	for (int i = 0; i <= 10; i++)
	{
		car[i].id = i +1;
		for (int j = 0; j < 5; j++)
		{
			car[i].s[j].seat_num = j + 1;
			car[i].s[j].rstatus = true;
		}
	}
	int choice_num;
	cout<<"enter 1 to reserve a ticket"<<endl;
	cout<<"enter 2 to cancel a ticket"<<endl;
	cout<<"enter 3 to check whether a specific car has available seat or not"<<endl;
	cout<<"enter 4 to check whether a specific seat is available or not "<<endl;
	cout<<"enter 5 to Get the number of the available seats in a specific car"<<endl;
	cout<<"enter 6 to show all the seats status of a specific car"<<endl;
	cout<<"enter 7 to Exit";
  do
  {
	cout << "Enter your choice : " << endl;
	cin >> choice_num;
	while (choice_num>7)
	{
		cout << "You entered wrong choice..Try again ." << endl;
		cin >>choice_num;
	}

		if (choice_num == 1)
		{

				cout << "Enter the number of the car from 1 to 10 , please . " << endl;
				int car_num;
				cin >> car_num;
				while (car_num>10 )
				{
					cout << "You entered wrong car number..Try again ." << endl;
					cin >> car_num;
				}
				cout << "avilable seats is : " << endl;
				for (int i = 0; i < 5; i++)
				{
					if (car[car_num - 1].s[i].rstatus == true)
					{
						cout <<" "<< car[car_num - 1].s[i].seat_num << " , ";
					}
				}
				cout << endl;
				cout << "choose you seat :" << endl;
				int new_seat;
				cin >> new_seat;
				while (new_seat>30)
				{
					cout << "You entered wrong  seat number..Try again ." << endl;
					cin >> new_seat;
				}

				reserve(car, car_num, new_seat);

			}
		else
		if (choice_num == 2)
		{

				cout << "Enter the number of the car from 1 to 10 , please . " << endl;
				int car_num;
				cin >> car_num;
				while (car_num>10 )
				{
					cout << "You entered wrong car number..Try again ." << endl;
					cin >> car_num;
				}
				cout << "avilable seats is : " << endl;
				for (int i = 0; i < 5; i++)
				{
					if (car[car_num - 1].s[i].rstatus == true)
					{
						cout <<" "<< car[car_num - 1].s[i].seat_num << " , ";
					}
				}
				cout << endl;
				cout << "choose you seat :" << endl;
				int new_seat;
				cin >> new_seat;
				while (new_seat>30)
				{
					cout << "You entered wrong  seat number..Try again ." << endl;
					cin >> new_seat;
				}

				cancel(car, car_num, new_seat);
			}
		else
		if (choice_num == 3)
		{

				cout << "Enter the number of the car from 1 to 10 , please . " << endl;
				int car_num;
				cin >> car_num;
				while (car_num>10 )
				{
					cout << "You entered wrong car number..Try again ." << endl;
					cin >> car_num;
				}
		check_seat(car,car_num);
		}
		else
			if(choice_num==4)
				{

				cout << "Enter the number of the car from 1 to 10 , please . " << endl;
				int car_num;
				cin >> car_num;
				while (car_num>10 )
				{
					cout << "You entered wrong car number..Try again ." << endl;
					cin >> car_num;
				}
				cout << "choose you seat :" << endl;
				int new_seat;
				cin >> new_seat;
				while (new_seat>30)
				{
					cout << "You entered wrong  seat number..Try again ." << endl;
					cin >> new_seat;
				}
				check(car,car_num,new_seat);
			}
			else
				if(choice_num==5)
				{
						cout << "Enter the number of the car from 1 to 10 , please . " << endl;
				int car_num;
				cin >> car_num;
				while (car_num>10 )
				{
					cout << "You entered wrong car number..Try again ." << endl;
					cin >> car_num;
				}
		check_seat_num(car,car_num);
				}
				else
					if(choice_num==6)
						{
						cout << "Enter the number of the car from 1 to 10 , please . " << endl;
				int car_num;
				cin >> car_num;
				while (car_num>10 )
				{
					cout << "You entered wrong car number..Try again ." << endl;
					cin >> car_num;
				}
		check_seat_status(car,car_num);
					}
	} while (choice_num != 7);

	system("pause");
}
