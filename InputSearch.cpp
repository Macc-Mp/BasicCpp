#include <iostream>
using namespace std;

int main() {
    int *size = new int;
    int *num = new int; 

	bool flag = true;
	
	while(flag){
            	
        		cout << "Enter Array Size/<=0 to exit:  ";
	    		cin >> *size;
	    
		    	if(*size <= 0){	
		    		cout << "Program End";
		    		flag = false;
				}
				
				else{
						
			    int *array = new int[*size];
			
			    for (int x = 0; x < *size; x++) {
			        cout<< (x + 1) << " Enter Elements " <<" : ";
			        cin >> *num;
			        array[x] = *num;
			    }
			    
			    for (int x = 0; x < *size; x++) {
			     
		       	 	cout << array[x] << ", ";
			    }
			    cout << endl;
			    
			    int *search = new int;
			   	cout << "Search for a value within the array: ";
			   	cin >> *search;
			   	
			   	bool check = false;
			   	
			    for (int y = 0; y < *size; y++){	
			    
			    		if(array[y] == *search){
			    			check = true;
			    			cout <<" Element: " << array[y] << " has a match "<<endl;
			    			
						}
						
				}
				
					if(!check){
					cout<< "No matches found!"<< endl;
				}
					
			}	
	
}
    return 0;
}
