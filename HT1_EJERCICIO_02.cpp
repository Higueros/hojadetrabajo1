
/*	Programa 2	*/

#include<iostream>
#include<fstream>
#include<sstream>

void salario();
void leer();
void mp();

using namespace std;

struct trab{
	int hrs, salario=0, hrs_salario=0, salariot=0;
	int hrs_ext, hrst;
	float iggs=0, total=0;
	
}e[100];
int main(){
	mp();
//	return 0;
}

void mp(){
	int opcion = 0;
	do {
		system("CLS");
		cout<<"__________________________________"<<"\n"<<"\n";
		cout<<"	PLANILLA DE EMPLEADOS"<<"\n";
		cout<<"__________________________________"<<"\n"<<"\n";
		cout<<" 1 . Ingresa datos de trabajador "<<"\n";
		cout<<" 2 . Reporte de planilla  "<<"\n";
		cout<<" 3 . Salir"<<"\n";
		cout<<"__________________________________"<<"\n"<<"\n";
		cout<<" Seleccione su opcion: ";
		cin>>opcion;
		if (opcion==1){		
			system("CLS");
			salario();			
		}
		else if (opcion==2){		
			system("CLS");
			leer();			
		}
		else if (opcion==3){
			break;
		}
		
	} while(opcion!=3);
}

void salario(){
	int i,emple=0;
	float acumtotal =0, acumiggs=0;
	
	ofstream db;
	
	system("CLS");
	
	cout<<"\n";
	cout<<" A cuantos trabajadores desea registrar? ";
	cin>>emple;
	for(i=0;i<emple;i++){
		cout<<"\n";
		cout<<"Ingresa salario: ";
		cin>>e[i].salario;
		cout<<"Ingresa horas trabajadas: ";
		cin>>e[i].hrs;
		cout<<"Ingresa horas extras trabajadas: ";
		cin>>e[i].hrs_ext;
		
		e[i].hrs_salario = e[i].salario / e[i].hrs;
		
	
		e[i].hrst = e[i].hrs + e[i].hrs_ext;
		if(e[i].hrst > 40){
			
		e[i].salariot = ((e[i].hrs_salario * 1.5) * e[i].hrs_ext) + e[i].salario;
			
		}
		else{
			e[i].salariot = e[i].salario;
		}
		
		e[i].iggs = e[i].salariot * 0.0483;
		e[i].total= e[i].salariot - e[i].iggs;
		
		
		
	
		try{
			db.open("Progra1_P1_Problema_2.txt",ios::app);
			db<<e[i].salario<<"\t"<<e[i].hrs<<"\t"<<e[i].hrs_ext<<"\t"<<e[i].hrs_salario<<"\t"<<e[i].salariot<<"\t"<<e[i].iggs<<"\t"<<e[i].hrst<<"\t"<<e[i].total<<endl;
			db.close();
		}
		catch(exception X){
			cout<<"ERROR AL CARGAR ARCHIVO"<<endl;
			system("Pause");
		}
	}
	system("Pause");
}

void leer(){
	int i,emple=0;
	float planilla_tl=0;
	float total_sa, igss_acm;
	
	ifstream db;
	
	try{
		db.open("Progra1_P1_Problema_2.txt", ios::in);
		
		cout<<"			   ____________________________________________________________			"<<"\n"<<"\n";
		cout<<"					LISTA DE PLANILLA DE TRABAJADORES										"<<"\n";
		cout<<"			   ____________________________________________________________			"<<"\n"<<"\n"<<"\n";
		cout<<"SALARIO	|"<<"HORAS	|"<<"HORAS EXTRAS	|"<<"SALARIO HORA	|"<<"SALARIO TOTAL	|"<<"IGSS	|"<<"TOTAL HORAS	|"<<"SALARIO A RECIBIR"<<endl;
		cout<<"__________________________________________________________________________________________________________________"<<"\n"<<"\n";
		while(db>>e[i].salario>>e[i].hrs>>e[i].hrs_ext>>e[i].hrs_salario>>e[i].salariot>>e[i].iggs>>e[i].hrst>>e[i].total){
			cout<<e[i].salario<<"\t  "<<e[i].hrs<<"\t "<<e[i].hrs_ext<<"\t\t "<<e[i].hrs_salario<<"\t\t "<<e[i].salariot<<"\t\t"<<e[i].iggs<<"\t	"<<e[i].hrst<<"\t"<<e[i].total<<endl;
			igss_acm = igss_acm + e[i].iggs;
			total_sa = total_sa + e[i].total;
		}
		
		db.close();
	
		cout<<"__________________________________________________________________________________________________________________"<<"\n"<<"\n";
		cout<<"	TOTAL DE PLANILLA: "<<"Q"<<total_sa<<"\n"<<endl;
		cout<<"	PAGO TOTAL DE IGSS: "<<"Q"<<igss_acm<<"\n"<<endl;
		
		system("Pause");
	}
	
	catch(exception X){
		cout<<"ERROR AL CARGAR ARCHIVO..."<<endl;
		system("Pause");
	}
}

