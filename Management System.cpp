#include <iostream>
#include <fstream>
using namespace std;

int main() {
	
		char pat_name[30];
		char pat_family[60];
		char pat_id[10];
		char  pat_birth[6];
		char  pat_num[11]; //mobile number
		char doc_id[10];
		char doc_name[30];
		char doc_family[60];
		char nob_num[10]; //nobat
		char nob_entH[11]; //enter time
		char nob_entm[11]; //enter time
		char nob_ext[11]; //exit time
		char vis_num[10]; //visit
		char vis_ent[11];
		char vis_ext[11];
		int c;
		int n;
		int x;
	
	while (true) 
	{		
	cout << "\n ---Home---\n";
	cout << " 1.Add Patient\n";
	cout << " 2.Delete Patient\n";
	cout << " 3.Modify Patient\n";
	cout << " 4.Add Doctor\n";
	cout << " 5.Delete Doctor\n";
	cout << " 6.Modify Doctor\n";
	cout << " 7.Registering an Appointment\n";
	cout << " 8.Registering a Visit\n";
	cout << " 0.Exit\n";
	cout << " -----------\n\n";
	cout << " Enter a key: \t"; 
		int i;  //operator input
		cin >> i;
		switch (i)
		{
			case 1:{
		
				cout << "\nSocial Security Number: ";
				cin >> pat_id;
				ofstream file(pat_id); //write file
					cout << "First Name: ";
					cin >> pat_name;
					cout << "Last Name: ";
					cin >> pat_family;
					cout << "Date of Birth: ";
					cin >> pat_birth;
					cout << "Cellphone Number: ";
					cin >> pat_num;
				file << pat_id << "\n" << pat_name << "\n" << pat_family << "\n" << pat_birth << "\n" << pat_num;
				cout << "\n \n Patient Added Successfuly! :)" << "\n \n";
				cout << "(( For Continue Enter '1' : ";
				while (c!=1){
				cin >> c;};
				
				file.close ();
			c=0; //dont close automaticly
				break;
			} //end case1
			
			case 2:{
				int hazf;
				cout << "Deleting Social Security Number: ";
				cin >> pat_id;
				hazf = remove (pat_id);
				if (hazf==0)
					cout << "\nDeleted Seccessfuly :)";
				else
					cout << "\nWrong Code :(";
				cout << endl;
				cout << "\n(( For Continue Enter '1' : ";
				while (c!=1){
				cin >> c;};
				break;
			}
			
			case 3:{
				cout << "\nSocial Security Number: ";
				cin >> pat_id;
				fstream File (pat_id, ios::in);
				
				if (!File) { //check for file exist
					cout << "Patient not Found :(" << endl;
				}
				else {
					cout << "First Name: ";
					cin >> pat_name;
					cout << "Last Name: ";
					cin >> pat_family;
					cout << "Date of Birth: ";
					cin >> pat_birth;
					cout << "Cellphone Number: ";
					cin >> pat_num;
				File << pat_id << "\n" << pat_name << "\n" << pat_family << "\n" << pat_birth << "\n" << pat_num;
				cout << "\n \n Patient has Changed! :)" << "\n \n";
				}
				cout << "(( For Continue Enter '1' : ";
				while (c!=1){
				cin >> c;};
				
				File.close ();
			c=0; //dont close automaticly				
				break;
			}
			
			case 4:{
				cout << "\nSocial Security Number: ";
				cin >> doc_id;
				ofstream file(doc_id);
					cout << "First Name: ";
					cin >> doc_name;
					cout << "Last Name: ";
					cin >> doc_family;
				file << doc_id << "\n" << doc_name << "\n" << doc_family;
				cout << "\n \nDoctor Added Successfuly! :)" << "\n \n";
				cout << "(( For Continue Enter '1' : ";
				while (c!=1){
				cin >> c;};
				
				file.close ();
			c=0; //dont close automaticly
				break;
			} //end case4
			
			case 5:{
				int hazf;
				cout << "Deleting Social Security Number: ";
				cin >> doc_id;
				hazf = remove (doc_id);
				if (hazf==0)
					cout << "\nDeleted Successfuly :)";
				else
					cout << "\nWrong Code :(";
				cout << endl;
				cout << "\n(( For Continue Enter '1' : ";
				while (c!=1){
				cin >> c;};
			c=0;
				break;
			}
			
			case 6: {
				cout << "\nSocial Security Number: ";
				cin >> doc_id;
				ofstream File(doc_id);
				
				if (!File) { //check for file exist
					cout << "Doctor not Found! :(";
				}
				else {
					cout << "First Name: ";
					cin >> doc_name;
					cout << "Last Name: ";
					cin >> doc_family;
				File << doc_id << "\n" << doc_name << "\n" << doc_family;
				cout << "\n \n Doctor has Changed! :)" << "\n \n";
				}
				cout << "(( For Continue Enter '1' : ";
				while (c!=1){
				cin >> c;};
				
				File.close ();
			c=0;
				break;
			}
			
			case 7: {
				cout << " Social Security Nummber: ";
				cin >> pat_id;
				ofstream file (pat_id, ios::app);
					cout << " Enter the Date (yy.mm.dd): ";
					cin >> nob_num;
					cout << " Hore of Arrival : ";
					cin >> nob_entH;
					cout << "minute of Arrival: ";
					cin >> nob_entm;
				file << "\n" << nob_num << "\n" << nob_entH << " : " << nob_entm;
					cout << "\n \n Appointment Registered Successfuly! :)" << "\n \n";
					cout << "(( For Continue Enter '1' : ";
				while (c!=1){
				cin >> c;};
				
				file.close ();		
				
				c=0;
					break;					
					}
			
			case 8: {
				cout << " Social Security Number: ";
				cin >> pat_id;
				ifstream file;
				file.open (pat_id); 
			 	if (!file) { //check for file exist
					cout << "Patient not Found! :(" << endl;
				}
				else {
					string temp, text;
					while (getline (file, temp)){
						text+=temp+"\n";
					}
				cout << "\n Patient Visit Information:\n"<< text;
				}
				cout << "(( For Continue Enter '1' : ";
				while (c!=1){
				cin >> c;};
				file.close();
			
				c=0;
				break;
				}
			
			case 0:{
				exit(0);
				break;
			}
		}
	}
	return 0;
	}