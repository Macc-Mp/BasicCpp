using namespace std;

#include <iostream>

void process (){
       
}

int main(){
	
	cout<< "SRTF ALGO: "<< endl;
	
	int AT[5];
	int BT[5];
	
	int ST, ET , WT, TT;
	int processTime;
	
	char jobs[5] = {'A', 'B', 'C', 'D', 'E'};
	int arrayLength = sizeof(BT[0]);
	
	int total = 0;
	
	for(int i =0; i < 5; i++){
		cout<< "Enter Arrival Time of Job[" << jobs[i] << "]"  <<": ";
		cin >> AT[i];
		
			cout<< "Enter Burst Time Job["<< jobs[i] << "]" <<": ";
		cin >>  BT [i];
		cout <<"======="<<endl;
		
		total+=BT[i];
		
	}
		
	for(int i =0; i <= arrayLength; i++){
		cout<<"Jobs["<< jobs[i] << "]\n" <<"Arrival Time: " << AT[i] << "\nBurst Time: " << BT[i] << endl;
	}	
	
	
	
		
	return 0;
}

