#include <stdio.h>
#include <conio.h>
#include <string.h>


// Integrantes: Anyel Zhang 9-761-750, Joshua Rivas 8-996-842  Grupo: 1SF113

struct Estudiantes   //Inicia un Registro
{
    char name[20];       //Arreglo con los nombres de estudiantes
    char c[20];         //Arreglo con las cédulas como cadena para mejor impresión
    int cedulas[20];           //Arreglo con los números de la cedula
};

int Comparacion(int comp[12][2], int Anyel){
    //variables
    int ctr,u;
    // instruccion
    for (int i = 0; i < 13; ++i) {
      ctr=comp[i][1];
      if (Anyel == ctr){
        u=0;
        return u;
      }

    }
    u=1;
    return u;
}
int EncontrarNombre(int Joshua, int name){
    //variables
    int t=0;
    
    struct Estudiantes estu[] = {                       //Inicializa una variable Estu donde estaran la lista de estudiantes autorizados
    {"Maria Herranz", "3-778-2935", 37782935},
    {"Maxi Montes", "6-193-9015", 61939015},
    {"Eduardo Saavedra", "10-548-835", 10548835},
    {"Maricela Casado", "4-506-482", 4506482},
    {"Clarisa Lopez", "8-199-845", 8199845},
    {"Ana Belén", "8-946-3450", 89463450},
    {"Juanito Flores", "8-305-6098", 83056098},
    {"Christian Grimes", "8-667-888", 8667888},
    {"Víctor Gutierrez", "6-887-496", 6887496},
    {"Mario Sanchez", "8-654-1654", 86541654},
    {"Liliana Acosta", "3-984-9613", 39849613},
    {"Mónica Ramirez", "4-146-4654", 41464654},
    {"Julio Herrera", "7-178-8182", 71788182},
    {"Mario Perez", "8-945-679", 8945679},
    {"Alicia Garcia", "8-684-6514", 86846514},
    {"Luis Aguirre", "8-654-465", 8654465},
    {"Miguel Benitez", "9-651-633", 9651633},
    {"Cintia Romero", "9-614-9833", 96149833},
    {"Susana Gonzalez", "1-145-464", 1145464},
    {"Mirta Torres", "2-568-5330", 25685330},
    };
    //instruccion
                 do                         
                {
                 Joshua = *(estu[t].cedulas);
                 if (name == Joshua ){
                 name = t;
                 break;
                 }
                  t=t+1;
                }while (t<20);
    return name;
}

int RevisarComp(int comp[12][2]){
    // variables
     int ava, z, y;
    ava = 0;
    //instruccion
  for (int i = 0; i < 12; ++i) {
      z = comp[i][0];
      if (z==0){
        ava= ava+1;
      }
  }
  return ava;
}

int Autorizacion(int Joshua, int Anyel){
//variables
int nom, t, sys;
sys=0;
t=0;
struct Estudiantes estu[] = {                       //Inicializa una variable Estu donde estaran la lista de estudiantes autorizados
    {"Maria Herranz", "3-778-2935", 37782935},
    {"Maxi Montes", "6-193-9015", 61939015},
    {"Eduardo Saavedra", "10-548-835", 10548835},
    {"Maricela Casado", "4-506-482", 4506482},
    {"Clarisa Lopez", "8-199-845", 8199845},
    {"Ana Belén", "8-946-3450", 89463450},
    {"Juanito Flores", "8-305-6098", 83056098},
    {"Christian Grimes", "8-667-888", 8667888},
    {"Víctor Gutierrez", "6-887-496", 6887496},
    {"Mario Sanchez", "8-654-1654", 86541654},
    {"Liliana Acosta", "3-984-9613", 39849613},
    {"Mónica Ramirez", "4-146-4654", 41464654},
    {"Julio Herrera", "7-178-8182", 71788182},
    {"Mario Perez", "8-945-679", 8945679},
    {"Alicia Garcia", "8-684-6514", 86846514},
    {"Luis Aguirre", "8-654-465", 8654465},
    {"Miguel Benitez", "9-651-633", 9651633},
    {"Cintia Romero", "9-614-9833", 96149833},
    {"Susana Gonzalez", "1-145-464", 1145464},
    {"Mirta Torres", "2-568-5330", 25685330},
    };
//instruccion
    do                          //Revisa si la cedula ingresada esta autorizada 
    {
        Joshua = *(estu[t].cedulas);
        if (Anyel == Joshua ){
            nom = t;
            sys=1;
        }
        t=t+1;
    }
    while (t<20);
    return sys;
}



void main(void)
{
    //Declaración de Variables
    char registroUso[13][20];
    int i, Anyel, Joshua, z, sys,main, nom, acum,j,a,disponible, x, reserv, nombreReservado, t,u;
    int comp[12][2]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    struct Estudiantes estu[] = {                       //Inicializa una variable Estu donde estaran la lista de estudiantes autorizados
    {"Maria Herranz", "3-778-2935", 37782935},
    {"Maxi Montes", "6-193-9015", 61939015},
    {"Eduardo Saavedra", "10-548-835", 10548835},
    {"Maricela Casado", "4-506-482", 4506482},
    {"Clarisa Lopez", "8-199-845", 8199845},
    {"Ana Belén", "8-946-3450", 89463450},
    {"Juanito Flores", "8-305-6098", 83056098},
    {"Christian Grimes", "8-667-888", 8667888},
    {"Víctor Gutierrez", "6-887-496", 6887496},
    {"Mario Sanchez", "8-654-1654", 86541654},
    {"Liliana Acosta", "3-984-9613", 39849613},
    {"Mónica Ramirez", "4-146-4654", 41464654},
    {"Julio Herrera", "7-178-8182", 71788182},
    {"Mario Perez", "8-945-679", 8945679},
    {"Alicia Garcia", "8-684-6514", 86846514},
    {"Luis Aguirre", "8-654-465", 8654465},
    {"Miguel Benitez", "9-651-633", 9651633},
    {"Cintia Romero", "9-614-9833", 96149833},
    {"Susana Gonzalez", "1-145-464", 1145464},
    {"Mirta Torres", "2-568-5330", 25685330},
    };


    //Declaración de Instruciones
    acum = 0; disponible=0;
    i=0;Joshua=0;main=0; nom=0; sys=1;
  
while (sys==1){
    printf("\e[1;1H\e[2J");   //Screen Wipe
    printf("Bienvenido al Prototipo Reservación de Laboratorio \n");
    printf("Menu \n 1. Ver los puestos de las computadoras ocupadas y disponibles. \n 2. Reservar una computadora. \n 3. Salir del laboratorio.");
    printf("\n 4. Registro del uso del laboratorio. \n 5. Ver el listado de los estudiantes autorizado para usar el laboratorio. \n 6. Salir del sistema.");
    printf("\n\n Se encuentra con %d computadoras disponibles", RevisarComp(comp));
    printf("\n \nSeleccione una opción: ");
    scanf("%d", &z);
  
    switch(z){
        case 1:
        printf("\e[1;1H\e[2J");   //Screen Wipe
        printf("\n\nDisponible: oo    Ocupado: **");
        for (int i = 0; i < 12; ++i) {
            disponible=comp[i][0];
             if (disponible==0){
                printf("\n Puesto #%d oo", i+1);
             }
             else  if (disponible==1){
                nombreReservado = EncontrarNombre(Joshua,comp[i][1]);
                printf("\n Puesto #%d **     %s", i+1,estu[nombreReservado].name);
                
             }
        }
           printf("\nPresione 1 para regresar \n");
        scanf(" %d",&a);
        if (a==1){
             continue;
        }
        else{
            continue;
        }

    case 2:
        printf("\e[1;1H\e[2J");   //Screen Wipe
        printf("Disponible: oo    Ocupado: **");
        for (int i = 0; i < 12; ++i) {
            disponible=comp[i][0];
             if (disponible==0){
                printf("\n Puesto #%d oo", i+1);
             }
             else  if (disponible==1){
                nombreReservado = EncontrarNombre(Joshua,comp[i][1]);
                printf("\n Puesto #%d **     %s", i+1,estu[nombreReservado].name);
             }
        }
        printf("\n Ingrese su cédula sin los guiones:");
        scanf("%d", &Anyel);
        printf("\e[1;1H\e[2J");   //Screen Wipe
        x=Autorizacion(Joshua, Anyel);
        u=Comparacion(comp, Anyel);
        if (x==1 && u==1){
           
            for (int i = 0; i < 13; ++i) {
            disponible=comp[i][0];
             if (disponible==0){
                comp[i][0]=1;
                comp[i][1]=Anyel;
                reserv = i;
                x=0;
                printf("\n \nSe reservó el puesto #%d", i+1);
                 nombreReservado = EncontrarNombre(Joshua,comp[i][1]);
                strcpy(registroUso[acum], estu[nombreReservado].name);
                acum = acum + 1;
                break;
             }
             }
             
            } else{
            printf("Cédula NO Autorizada o Ya estas Reservado!!!!!!");
        }

    

         printf("\n\nDisponible: oo    Ocupado: **");
        for (int i = 0; i < 12; ++i) {
            disponible=comp[i][0];
             if (disponible==0){
                printf("\n Puesto #%d oo", i+1);
             }
             else  if (disponible==1){
                nombreReservado = EncontrarNombre(Joshua,comp[i][1]);
                printf("\n Puesto #%d **     %s", i+1,estu[nombreReservado].name);
             }
        }
        
     
          printf("\nPresione 1 para regresar \n");
        scanf(" %d",&a);
        if (a==1){
             continue;
        }
        else{
            continue;
        }

        case 3:
        printf("\e[1;1H\e[2J");   //Screen Wipe
        printf("\n Ingrese su cédula sin los guiones:");
        scanf("%d", &Anyel);
        printf("\e[1;1H\e[2J");   //Screen Wipe
        x=Autorizacion(Joshua, Anyel);

        if (x==1){
            
            for (int i = 0; i < 13; ++i) {
            disponible=comp[i][0];
             if (disponible==1){
                if (Anyel == comp[i][1]){
                comp[i][0]=0;
                comp[i][1]=0;
                break;
                }
            
               
             }
             
            } 
        }else{
            printf("\n\nCédula NO Autorizada!!!!!!\n");
        }
        printf("\nSe ha salido del laboratorio exitosamente");
        printf("\nPresione 1 para regresar \n");
        scanf(" %d",&a);
        if (a==1){
             continue;
        }
        else{
            continue;
        }
        break;

    case 4:
        printf("\e[1;1H\e[2J");   //Screen Wipe
        printf("Registro: \n");
        j=0;
        do
        {
            printf("%s \n", registroUso[j]);
            j = j+1;
        } while (j<acum);
    
       
        printf("Presione 1 para regresar \n");
        scanf(" %d",&a);
        if (a==1){
             continue;
        }
        else{
            continue;
        }

        case 5:
        printf("\e[1;1H\e[2J"); //Screen Wipe
        i=0;
        do
         {
             printf("Nombre: %s     Cédula: %s \n", estu[i].name , estu[i].c);
              i=i+1;
         }
         while (i<20);
        
        printf("Presione 1 para regresar \n");
        scanf(" %d",&a);
        if (a==1){
             continue;
        }
        else{
            continue;
        }

        case 6:
        sys = 0;
        break;

        default:
        printf("\nNo elegistes una opción disponible\n");
       printf("Presione 1 para regresar \n");
        scanf(" %d",&a);
        if (a==1){
             continue;
        }
        else{
            continue;
        }


    }
    }


    }
    
  
    
    
    

