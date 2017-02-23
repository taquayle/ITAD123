// Assign_05_03 - Overloaded Hospital.cpp : Defines the entry point for the console application.
/*
	Overloaded Hospital 
	Write a program that computes and displays the charges for a patient’s hospital stay. 
	First, the program should ask if the patient was admitted as an in-patient or an outpatient. 
	the following data should be entered: 
	
	•  The number of days spent in the hospital 
	•  The daily rate 
	•  Hospital medication charges 
	•  Charges for hospital services (lab tests, etc.)
*/

// Tyler Quayle - SIN: 950416426
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const string ERROR = ("\n\nERROR: INVALID INPUT\n\n");

double hospital_bill(double, double, double, double);
double hospital_bill(double, double);

void patientInfo(double&, double&, double&, double&);
void patientInfo(double&, double&);

bool validate(double);

int main()
{
	int patientType;
	double  daysIn, dailyRate, serviceCharges, medicineBill ,totalBill;

	do
	{
		cout << "Patient type? 0 - In Patient  || 1 - Out Patient" << endl;
		cin >> patientType;

		if(patientType == 0)
		{
			patientInfo(daysIn, dailyRate, medicineBill, serviceCharges);
			totalBill = hospital_bill(daysIn, dailyRate, medicineBill, serviceCharges);
		}

		else if (patientType-- == 1)
		{
			patientInfo(medicineBill, serviceCharges);
			totalBill = hospital_bill(medicineBill, serviceCharges);
		}

		else
			cout << ERROR;
	
	}while(patientType);
	
	cout << setprecision(2) << left << fixed;
	cout << setw(50) << "\n\nTotal Bill for this visit is:" << "$"<< totalBill << "\n\n";
	system("Pause");
	return 0;
}


void patientInfo(double& days, double& rate, double& medicine, double& charges)
{
	cout << left << fixed;
	do{
		cout << setw(48) << "Please enter the number of days checked in:" << "$";
		cin >> days;
	}while (!validate(days));
	
	do{
		cout << setw(48) << "Please enter the daily rate:" << "$";
		cin >> rate;
	}while (!validate(rate));
	
	do{
		cout << setw(48) << "Please enter the medicine cost:" << "$";
		cin >> medicine;
	}while (!validate(medicine));

	do{
		cout << setw(48) << "Plese enter any additional service charges:" << "$";
		cin >> charges;
	}while(!validate(charges));
}

void patientInfo(double& medicine, double& charges)
{
	cout << left << fixed;
	do{
		cout << setw(48) << "Please enter the medicine cost:" << "$";
		cin >> medicine;
	}while (!validate(medicine));

	do{
		cout << setw(48) << "Plese enter any additional service charges:" << "$";
		cin >> charges;
	}while(!validate(charges));
}
double hospital_bill(double days, double rate, double medicine, double charges)
{
	return (days * rate) + medicine + charges;
}

double hospital_bill(double medicine, double charges)
{
	return medicine + charges;
}

bool validate(double test)
{
	if(test < 0)
	{
		cout << ERROR;
		return false;
	}
	else
		return true;

}