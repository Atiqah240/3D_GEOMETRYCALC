#include<iostream>
#include<string.h>
#include <ctype.h>
#include<math.h>
using namespace std;
int main()
{
	string username="atiqah" ;
	string name;
	string password="zulaika";
	string pass;
	int i=0,j=1,k=0;
	char code,selection;
	int options;
	float side,volume,surface,radius;
	float length,width,height;
	
	//login
	while(i<3){
	cout<<"\nPLEASE ENTER A USERNAME :"<<endl;
	cin>>name;
	cout<<"\nPLEASE ENTER YOUR PASSWORD :"<<endl;
	cin>>pass;
    
    if (name==username&&pass==password){
	     cout<<"\nYOU'VE SUCCECSFULLY LOGIN !"<<endl;
	     i=8;
	}
	
    else if(name!=username||pass!=password){
       cout<<"\nPLEASE TRY AGAIN !";
        i++;
            
	}
	if(i==3){
	    cout<<"\nSORRY TRY AGAIN LATER..."<<endl;
	}
	}
	
    do {
	
	
	cout<<"\n\nWELCOME TO 3D GEOMETRY CALCULATOR !";
	
	cout<<"\n\n-------------------------------------------------------"<<endl;
	cout<<"\nCODE\t3D GEOMETRY\t\tOPTIONS"<<endl;
    cout<<"-------------------------------------------------------"<<endl;
	cout<<"\nA\t CUBE\t\t\t1.VOLUME ";
	cout<<"\n\t\t\t\t2.SURFACE"<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"\nB\t RECTANGLE SOLID\t1.VOLUME";
	cout<<"\n\t\t\t        2.SURFACE"<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"\nC\t SPHERE\t\t        1.VOLUME ";
	cout<<"\n\t\t\t        2.SURFACE"<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"\nD\t RIGHT CIRCULAR\t\t1.VOLUME";
	cout<<"\n         CYLINDER\t\t2.SURFACE"<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"\nE\t RIGHT CIRCULAR\t\t1.VOLUME";
	cout<<"\n         CONE\t\t        2.SURFACE"<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"\nF\t SQUARE PYRAMID\t        1.VOLUME";
	cout<<"\n\t\t\t        2.SURFACE"<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"\nG\t REGULAR TETRAHEDRON\t1.VOLUME";
	cout<<"\n\t\t\t        2.SURFACE"<<endl;
	cout<<"\n\n-------------------------------------------------------"<<endl;
	
		cout<<"\nPLEASE ENTER THE CODE OF 3D GEOMETRY : "<<endl;
	    cin>>code;
			
	    
	       while (toupper(code)!='A'&&toupper(code)!='B'&&toupper(code)!='C'&&toupper(code)!='D'&&toupper(code)!='E'&&toupper(code)!='F'&&toupper(code)!='G'){
			
	    	    cout<<"\nPLEASE INSERT THE RIGHT CODE !"<<endl;
	    		cout<<"\nPLEASE ENTER THE CODE OF 3D GEOMETRY : "<<endl;
	            cin>>code;
 			}
			 
			    cout<<"\nPLEASE ENTER THE OPTIONS (1/2)"<<endl;
	            cin>>options;
	  			while(options!=1&&options!=2){
	            	cout<<"\nPLEASE ENTER THE RIGHT OPTIONS !"<<endl;
	            	cout<<"\nPLEASE ENTER THE OPTIONS (1/2)"<<endl;
	            	cin>>options;
	                }
	
	
	if (toupper(code)=='A'&&options==1)
    {
		cout<<"\nPLEASE ENTER SIDE OF THE CUBE :"<<endl;
		cin>>side;
	    volume=pow(side,2);
		cout<<"\nTHE VOLUME OF THE CUBE IS :"<<volume<<endl;
	   
    }
	        else if (toupper(code)=='A'&&options==2){
	            cout<<"\nPLEASE ENTER SIDE OF THE CUBE :"<<endl;
		        cin>>side;
	   	        surface=6*pow(side,2);
	            cout<<"\nTHE SURFACE OF THE CUBE IS :"<<surface<<endl;
	            }
    


    if (toupper(code)=='B'&&options==1)

	    {
       	cout<<"\nPLEASE ENTER THE LENGTH OF THE RECTANGLE :"<<endl;
       	cin>>length;
       	cout<<"\nPLEASE ENTER THE WIDTH OF THE RECTANGLE :"<<endl;
       	cin>>width;
       	cout<<"\nPLEASE ENTER THE HEIGHT OF THE RECTANGLE :"<<endl;
       	cin>>height;
       	volume = length*width*height;
		cout<<"\nTHE VOLUME OF THE RECTANGLE SOLID IS :"<<volume<<endl;
			  }
		
			else if (toupper(code)=='B'&&options==2){
				cout<<"\nPLEASE ENTER THE LENGTH OF THE RECTANGLE :"<<endl;
       	        cin>>length;
       	        cout<<"\nPLEASE ENTER THE WIDTH OF THE RECTANGLE :"<<endl;
       	        cin>>width;
       	        cout<<"\nPLEASE ENTER THE HEIGHT OF THE RECTANGLE :"<<endl;
       	        cin>>height;
			  	surface = 2*length*width+2*length*height+2*width*height;
			  	cout<<"\nTHE SURFACE OF THE RECTANGLE SOLID IS :"<<surface<<endl;
			  }
	
	    
	    if (toupper(code)=='C'&&options==1)                                 
		{
	    	cout<<"\nPLEASE ENTER THE RADIUS OF THE SPHERE : "<<endl;
	    	cin>>radius;
	    	volume=4/3*M_PI*pow(radius,2);                          
	    	cout<<"\nTHE VOLUME OF THE SPHERE IS :"<<volume<<endl;
			}
			
			else if (toupper(code)=='C'&&options==2){                     
				cout<<"\nPLEASE ENTER THE RADIUS OF THE SPHERE : "<<endl;
	    	    cin>>radius;
			   	surface= (4*M_PI)*pow(radius,2);
			   	cout<<"\nTHE SURFACE OF THE SPHERE IS :"<<surface<<endl;
			   	
			   }
	
		
	    if (toupper(code)=='D'&&options==1)                                          
		{
			cout<<"\nPLEASE ENTER THE RADIUS OF THE RIGHT CIRCULAR CYLINDER :"<<endl;
			cin>>radius;
			cout<<"\nPLEASE ENTER THE HEIGHT OF THE RIGHT CIRCULAR CYLINDER :"<<endl;
			cin>>height;
			volume=M_PI*pow(radius,2)*height;
			cout<<"\nTHE VOLUME OF THE RIGHT CIRCULAR CYLINDER IS :"<<volume<<endl;
			}
			
			else if(toupper(code)=='D'&&options==2){                                       
			    cout<<"\nPLEASE ENTER THE RADIUS OF THE RIGHT CIRCULAR CYLINDER :"<<endl;
			    cin>>radius;
			    cout<<"\nPLEASE ENTER THE HEIGHT OF THE RIGHT CIRCULAR CYLINDER :"<<endl;
			    cin>>height;
			    surface=(2*M_PI*radius*height)+2*M_PI*pow(radius,2);
			    cout<<"\nTHE SURFACE OF THE RIGHT CIRCULAR CYLINDER IS :"<<surface;
			    	
			}
		
		
		
		if (toupper(code)=='E'&&options==1)                                       
		{
			cout<<"\nPLEASE ENTER THE RADIUS OF THE RIGHT CIRCULAR CONE :"<<endl;
			cin>>radius;
			cout<<"\nPLEASE ENTER THE HEIGHT OF THE RIGHT CIRCULAR CONE :"<<endl;
			cin>>height;
			volume=0.333*M_PI*pow(radius,2)*height;
			cout<<"\nTHE VOLUME OF THE RIGHT CIRCULAR CONE IS : "<<volume<<endl;
			}
			
			else if(toupper(code)=='E'&&options==2){                                    
				cout<<"\nPLEASE ENTER THE RADIUS OF THE RIGHT CIRCULAR CONE :"<<endl;
			    cin>>radius;
			    cout<<"\nPLEASE ENTER THE HEIGHT OF THE RIGHT CIRCULAR CONE :"<<endl;
			    cin>>height;
			    surface=M_PI*radius*sqrt(pow(radius,2)+pow(height,2));
			    cout<<"\nTHE SURFACE OF THE RIGHT CIRCULAR CONE IS :"<<surface;
				}
		
		
	    if (toupper(code)=='F'&&options==1)                                     
		{
			cout<<"\nPLEASE ENTER THE SIDE OF THE SQUARE PYRAMID : "<<endl;
			cin>>side;
			cout<<"\nPLEASE ENTER THE HEIGHT OF THE SQUARE PYRAMID : "<<endl;
			cin>>height;
			volume=0.333*pow(side,2)*height;
			cout<<"\nTHE VOLUME OF THE SQUARE PYRAMID IS :"<<volume;
			}
			
			else if(toupper(code)=='F'&&options==2){
				cout<<"\nPLEASE ENTER THE SIDE OF THE SQUARE PYRAMID : "<<endl;
			    cin>>side;
			    cout<<"\nPLEASE ENTER THE HEIGHT OF THE SQUARE PYRAMID : "<<endl;
			    cin>>height;
			   	surface=side*(side+sqrt(pow(side,2)+4*pow(height,2)));
			   	cout<<"\nTHE SURFACE OF THE SQUARE PYRAMID IS :"<<surface;
			   }
		
	
        if (toupper(code)=='G'&&options==1)
        {
        	cout<<"\nPLEASE ENTER THE SIDE OF THE REGULAR TETRAHEDRON : "<<endl;
        	cin>>side;
        	volume=0.0833*sqrt(2)*pow(side,3);
        	cout<<"\nTHE VOLUME OF THE REGULAR TATRAHEDRON IS :"<<volume;
			}
			
			else if(toupper(code)=='G'&&options==2){
				cout<<"\nPLEASE ENTER THE SIDE OF THE REGULAR TETRAHEDRON : "<<endl;
        	    cin>>side;
				surface=sqrt(3)*pow(side,3);
				cout<<"\nTHE SURFACE OF THE REGULAR TATRAHEDRON IS :"<<surface;
			}
		
		
		cout<<"\nDO YOU WANT TO CONTINUE ? (Y/N)"<<endl;
		cin>>selection;
	}while (toupper(selection)=='Y');

	  cout<<"\nTHANK YOU FOR USING THIS 3D GEOMETRY CALCULATOR..."<<endl;
	  
	
	return 0;
}

