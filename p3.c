#include <stdio.h>
#include <string.h>
int main (){
    int contador = 1, menu = 0, mesas2 = 5, mesas4 = 5,mesas6 = 5, mesa, aux = 1, num;
    char user[10], password[10];
    while (contador < 4)
    {
        printf("Ingrese su usuario \n");
        scanf("%s", user);
        printf("Ingrese su contrasenia \n");
        scanf("%s", password);
    
        if ((strcmp(user,"user")== 0 && strcmp(password,"password")== 0)||strcmp(user,"usuario")==0 && strcmp(password,"contra")== 0||strcmp(user,"test")==0&&strcmp(password,"default")== 0)
        {
            contador = 5;
        }
        else
        {
            contador++;
            if (contador <= 3)
            {
                printf("Usuario o contrasenia incorrectos, intento #%d \n", contador);
            }
            else
            {
                printf("Usuario o contrasenia incorrectos \n");
            }
        }
        
    }
    if (contador == 4)
    {
        printf("Imposible ingresar \n");
        return 0;
    }
    else
    {
        printf("Bienvenido \n");
    }
    while (menu != 3)
    {
        printf("1. Reservar mesa \n2. Estadisticas de reserva\n3. Salir\n");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            contador = 1;
            while (contador <= 5)
            {
            aux = 1;
            printf("Ingrese el tipo de mesa que quiere reservar \n");
            printf("2. Mesa para 2 \n4. Mesa para 4\n6. Mesa para 6\n0. Salir \n");
            scanf("%d", &mesa);
            switch (mesa)
            {
            case 0:
                contador = 6;
                break;
            case 2:
                if (mesas2 > 0)
                {
                     while (aux != 0)
                    {
                        printf("Ingrese el numero de mesas que desea ordenar o 0 para salir, hay %d mesas disponibles \n", mesas2);
                        scanf("%d",&num);
                        if (num == 0)
                        {
                            aux = 0;
                        }
                        
                        if (num >0 && num <= mesas2)
                        {                       
                            mesas2-=num;
                            contador++;
                            aux = 0;
                        }
                        else
                        {
                            printf("Ingrese un numero valido de mesas\n");
                        }
                    }
                }
                else
                {
                    printf("No hay mesas para 2 disponibles\n");
                }
                break;
            case 4:
                if (mesas4 > 0)
                {
                    while (aux != 0)
                    {
                        printf("Ingrese el numero de mesas que desea ordenar o 0 para salir, hay %d mesas disponibles\n", mesas4);
                        scanf("%d",&num);
                        if (num == 0)
                        {
                            aux = 0;
                        }
                        
                        if (num >0 && num <= mesas4)
                        {                       
                            mesas4-=num;
                            contador++;
                            aux = 0;
                        }
                        else
                        {
                            printf("Ingrese un numero valido de mesas\n");
                        }
                    }
                }
                else
                {
                    printf("No hay mesas para 4 disponibles\n");
                }
                break;
            case 6:
               if (mesas6 > 0)
                {
                     while (aux != 0)
                    {
                        printf("Ingrese el numero de mesas que desea ordenar o 0 para salir, hay %d mesas disponibles\n", mesas6);
                        scanf("%d",&num);
                        if (num == 0)
                        {
                            aux = 0;
                        }
                        if (num >0 && num <= mesas6)
                        {                       
                            mesas6-=num;
                            contador++;
                            aux = 0;
                        }
                        else
                        {
                            printf("Ingrese un numero valido de mesas\n");
                        }
                    }
                }
                else
                {
                    printf("No hay mesas para 6 disponibles\n");
                }  
                break;
            default:
                printf("Ingrese una opcion correcta\n");
                break;
            }
            }
            break;
        case 2:
            printf("Hay %d mesas reservadas, y se espera %d comensales \n",15-mesas2 - mesas4 - mesas6, (5-mesas2)*2+(5-mesas4)*4+(5-mesas6)*6);
            break;
        case 3:
            printf("Gracias por usar");
            break;        
        default:
            printf("Ingrese una opcion correcta\n");
            break;
        }
    }
    
    return 0;
}