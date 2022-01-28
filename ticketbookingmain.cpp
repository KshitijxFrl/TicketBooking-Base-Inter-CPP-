#include<iostream>
#include<conio.h>                                             
#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include"ticketbookingboot.cpp"

using namespace std;

//void disscount();
class DestinationInfo;
class Reservation;
void InfoCheck1 (DestinationInfo & ,Reservation & );
void Passanger(DestinationInfo & ,Reservation &);
class PassangerInfo
{
	 protected:
	 char Name[50];
	 int Age;
	 char MobileNumber[10];
     //string Gender; 
	  	 	
	 public:
	 
	 void GetingPassagerInfo()
	 {
	 	cout << "Please Enter Your Name ::  ";
	 	cin  >> Name;
	 	fflush(stdin);
     	cout << "Please Enter Your Age :: ";
	 	cin  >> Age;
	 	cout << "Please Enter Your Valid Mobile Number :: ";
	 	cin  >> MobileNumber;
	 	
	 }	


	void ShowingPassangerInfo()
	{
		cout << "Name ::" <<Name<<"\n";
		cout << "Age::  " <<Age<<"\n";
		cout << "MobileNumber::" <<MobileNumber<<"\n";
		
	}

};


class DestinationInfo : public PassangerInfo
{
 	protected:
	
	string BoardingDestination;
	string ArrivingDestination;
	int BoardingDesNum;
	int ArrivingDesNum;
	
	public:
		
	void PassangerIN()
	{
	
		PassangerInfo::GetingPassagerInfo();	
		
	}
		
	void GettingBoardingDetails()
	{
		reenter:
		cout << "Please Select The Boarding Destination From The Given List\n";
		cout << "1)India\n 2)United States\n 3)United Kingdome\n 4)Japan\n 5)South Korea\n 6)Australia\n 7)Germany\n 8)Russia\n 9)China\n";
		cin  >> BoardingDesNum;
		switch(BoardingDesNum)
		{
			case 1:
				BoardingDestination = "India";
				break;
			case 2:
				BoardingDestination	= "United States";
				break;	
			case 3:
				BoardingDestination = "United Kingdome";
				break;
			case 4:
				BoardingDestination	= "Japan";
				break;	
			case 5:
				BoardingDestination = "South Korea";
				break;
			case 6:
				BoardingDestination	= "Australiea";
				break;	
			case 7:
				BoardingDestination = "Germany";
				break;
			case 8:
				BoardingDestination	= "Russia";
				break;	
			case 9:
				BoardingDestination	= "China";
				break;	
			default:
				goto reenter;
					
		}
			
	};
	
	void GettingArrivalDetails()
	{
		reenter1:
		cout << "Please Select The Arrival Destination From The Given List\n";
		cout << "1)India\n 2)United States\n 3)United Kingdome\n 4)Japan\n 5)South Korea\n 6)Australia\n 7)Germany\n 8)Russia\n 9)China\n";
		cin >> ArrivingDesNum;
	switch(ArrivingDesNum)
		{
			case 1:
				ArrivingDestination = "India";
				break;
			case 2:
				ArrivingDestination	= "United States";
				break;	
			case 3:
				ArrivingDestination = "United Kingdome";
				break;
			case 4:
				ArrivingDestination	= "Japan";
				break;	
			case 5:
				ArrivingDestination = "South Korea";
				break;
			case 6:
				ArrivingDestination	= "Australiea";
				break;	
			case 7:
				ArrivingDestination = "Germany";
				break;
			case 8:
				ArrivingDestination = "Russia";
				break;	
			case 9:
				ArrivingDestination	= "China";
				break;	
			default:
				goto reenter1;
					
		}
	
	
	};
	
	
	void DisplayingDestinationDetails()
	{
	cout<<"\n";
	cout <<"Passanger Personal Details are ";
	PassangerInfo::ShowingPassangerInfo();
	cout << "Passanger Travelling Details are --:\n";
	cout << "Boarding at::--:"<<BoardingDestination<<"\n";
	cout << "Arrival  at::--:"<<ArrivingDestination<<"\n";
	
	} ;
};

class Reservation 
{
private:
 int ClassSelect;	
 int fair;
 int SeatNumber; 
 string CLASSNAME;
 string SeatName;
 		
public:

	void GettingResrvationInfo()
	{		
	recheck:
	
	cout << "Please chose your prefered  class of travelling\n";
	cout << "1)First Class\n 2)Buisness class\n 3)Economey Class\n 4)PEF Class";
	cin  >>	ClassSelect;
	
	if (ClassSelect == 1)
	{
		CLASSNAME = "FIRST CLASS";
		fair = rand() % 5000 + 5000;
		SeatName = "AA";
		SeatNumber = rand() % 12 + 1;	
	}
	else if(ClassSelect == 2)
	{
		CLASSNAME = "Buisness CLASS";
		fair = rand() % 3000 + 2000;
		SeatName = "A";
		SeatNumber = rand() % 20 + 1;	
	}
	else if(ClassSelect== 3)
	{
		CLASSNAME = "Economy CLASS";
		fair = rand() % 2000 + 1000;
		SeatName = "B";
		SeatNumber = rand() % 30 + 1;	
	}
	else if(ClassSelect == 4)
	{
		CLASSNAME = "PEF CLASS";
		fair = rand() % 1000 + 1000;
		SeatName = "B1";
		SeatNumber = rand() % 30 + 1;	
	}
	else
	{
		cout<<"Please select from the given list only";
		goto recheck;
	}
	
	}
	
	void DisplayingReservationInfo()
	{
		cout << "Travellig Class\t"  << CLASSNAME << "\n";
		cout << "SeatNumber\t" << SeatName << SeatNumber << "\n";
		cout << "Amount Of The Journey\t" << fair << "\n";

	}
	
};




int main()
{
	Logo();
	welcome();
	system("cls");
	
	int UIinput;

	
	DestinationInfo p;
	
	Reservation p2;
	

	
	uiag:
		
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"------------------------------------------------------------------------\n";
	cout<<" |                                 1)Ticket Booking                    |    \n ";
    cout<<"|                                 2)Check Details                     |\n ";
    cout<<"|                                 3)Exit                              |\n ";
   	cout<<"------------------------------------------------------------------------\n";
	cin>>UIinput;
	
	
	if(UIinput == 1)
	{
		system("cls");
		Passanger(p,p2);
		system("cls");
		goto uiag;
	}
	else if(UIinput == 2)
	{
			system("cls");
			InfoCheck1(p,p2);
		    system("cls");
		    goto uiag;
	}
	else if(UIinput == 3)	
	{
			system("cls");
		cout<<"Thank You ! Visit Again.";
	}

	return 0;
}
 void Passanger(DestinationInfo &x, Reservation &y)
 {
 	refinal:
 	string Finalising;
 	system("color 6");
	
	x.PassangerIN();
	system("cls");
	cout<<"Processing";
	sleep(3);
	system("cls");
	x.GettingBoardingDetails();
	system("cls");
	x.GettingArrivalDetails();
	system("cls");
	cout<<"Processing";
	y.GettingResrvationInfo();
	system("cls");
	cout<<"Thanks For Submitting Your Details and Prefrences\n ";
	
	x.DisplayingDestinationDetails();
	y.DisplayingReservationInfo();
    sleep(3);
    cout<<"If you want to conferm it Enter Y if not Enter N\n\n";
	cin>>Finalising;
	

	
	if (Finalising == "Y" || Finalising == "y")
	{
		system("cls");
		cout<<"Processing";
		
		system("cls");
		system("color 6");
		x.DisplayingDestinationDetails();
		y.DisplayingReservationInfo();
		sleep(5);
	}
	else
	{
		system("cls");
		system("color F");
		sleep(3);
		goto refinal;
	}
		
 		
 }
 void InfoCheck1 (DestinationInfo &g, Reservation &m)
 {
 	system("cls");
 	cout<<"processing";
 	sleep(3);
 	system("cls");
 	system("color E3");
 	g.DisplayingDestinationDetails();
 	m.DisplayingReservationInfo();
 	sleep(5);
 	system("color 6");
 	system("cls");
 	
 }
