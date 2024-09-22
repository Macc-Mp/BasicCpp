#include <iostream>
using namespace std;

int main() {
    int size;
    char sym;

	bool flag = true;
	char inp;
	
	while(flag){
        cout << "Use Program? Y/N: ";
        cin >> inp;
        
        inp = toupper(inp);
        
        	if(inp == 'Y'){
        		cout << "Enter Array Size: ";
	    		cin >> size;
	    
		    	if(size <= 0){
		    		
		    		cout << "Program End";
		    		flag = false;
		    	
				}
	
				else{
				
			    char array[size];
			
			    for (int x = 0; x < size; x++) {
			        cout << "Enter Elements " << (x + 1) <<" : ";
			        cin >> sym;
			        array[x] = sym;
			    }
			    for (int x = 0; x < size; x++) {
			       
		       	cout << array[x] << ", ";
			    }
			    cout << endl;
			   
			    for (int y = 0; y < size; y++){
			    	
			    	for(int z = 0; z < y; z++){
			    		
			    		if(array[y] == array[z]){
			    			
			    			cout <<" Element: " << array[y] << " has a match" << endl;
			    			
						}

					}
					
				}
				
			}
			
	    		
			}
        	else if(inp == 'N'){
        		
        		cout << "Terminated";
        		flag = false;
			}
			else{
				continue;
			}
}
	    

    // You can now use the array here

    return 0;
}
