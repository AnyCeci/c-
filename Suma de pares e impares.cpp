#include <iostream>

using namespace std;

int main (){
	
	int sumapar=0,sumaimpar=0,sumadeambos=0;
	for (int i=1;i<=10;i++){
	    if(i%2!=0){
	     sumaimpar=sumaimpar+i;
		}
		else
		    sumapar=i+sumapar;
		    sumapar=i+sumaimpar;
	
	}
	cout<<"La suma de los pares es: "<<sumapar<<endl;
	cout<<"La suma de los impares es: "<<sumaimpar<<endl;
	cout<<"La suma de ambos es: "<<sumapar+sumaimpar<<endl;
	
	return 0;
}

