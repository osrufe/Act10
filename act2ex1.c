#include <stdio.h>
#include <stdlib.h>

    int main(){

        //creem variables
        int opcion;
        int diners;
        int saldo = 1000;

        //comencem do while
        do{
            //creem el menú, per començar
            printf("1. Consultar saldo\n");
            printf("2. Retirar diners\n");
            printf("3. Ingressar diners\n");
            printf("4. Sortir\n");

            //fem que ens pregunti opció

            printf("Selecciona una opcio: \n");
            scanf("%d", &opcion);
            //comencem un switch per programar que farà cada opció
            switch (opcion)
            {
            case 1://aquest cas només ens diu quants diners tenim guardats
                printf("El teu saldo es de %d euros.\n", saldo);
                break;

            case 2://aquí hem de fer scanf per preguntar quants diners volem treure del saldo
                printf("Selecciona quants diners vols retirar: \n");
                scanf("%d", &diners);
                //operem el saldo que tenim guardat menys els diners que volem treure. Ara el saldo tindrà un altre número.
                saldo = saldo - diners;
                break;

            case 3://el mateix que el cas 2, però sumant
                printf("Selecciona quants diners vols introduir: \n");
                scanf("%d", &diners);

                saldo = saldo + diners;
                break;
            case 4://el programa s'acaba, és a dir que ja no vols ni introduir ni treure diners
                break;
            
            default://el default és per quan introdueixes una opció inexistent
                printf("T'has equivocat d'opcio\n");
                break;
                
            }//el while al final, és perquè el programa faci tot allò que ja hem possat, MENTRES que "opcion" no sigui 4,
             //és a dir la opció 4, la qual termina el programa.
        }while(opcion != 4);

        return 0;
    }