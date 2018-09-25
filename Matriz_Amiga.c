#include <stdio.h>
int main(){
int f, c,s1, s2, s3, s4, s5, s6, s7, s8;

int arreglo[3][3];
printf("Matriz 3x3\n");
//Ingresar valores a la matriz
for(f=0; f<3; f++){
	for(c=0; c<3; c++){
		printf("Ingrese el numero de la fila %d y columna %d: ", f+1,c+1);
		scanf("%d", &arreglo[f][c]);
		}
	}
		for(f=0; f<3;f++){
			printf("\n");
			for(c=0; c<3; c++){
				printf("%d\t", arreglo[f][c]);
				}
			}
			//Realizacion de calculos
			for( f=0; f<3; f++){
				for( c=0; c<3; c++){
					s1=(arreglo[0][0])+(arreglo[0][1])+(arreglo[0][2]);
					s2=(arreglo[1][0])+(arreglo[1][1])+(arreglo[1][2]);
					s3=(arreglo[2][0])+(arreglo[2][1])+(arreglo[2][2]);
					s4=(arreglo[0][0])+(arreglo[1][0])+(arreglo[2][0]);
					s5=(arreglo[0][1])+(arreglo[1][1])+(arreglo[2][1]);
					s6=(arreglo[0][2])+(arreglo[1][2])+(arreglo[2][2]);
					s7=(arreglo[0][0])+(arreglo[1][1])+(arreglo[2][2]);
					s8=(arreglo[2][0])+(arreglo[1][1])+(arreglo[0][2]);
					}
				}
				//Condicion para ver si es amiga
	if(s1==s2 && s1==s3 && s1==s4 && s1==s5 && s1==s6 && s1==s7 && s1==s8){
		printf("La matriz ingresada es Matriz Amiga");
		}else{
		printf("La matriz ingresada no es Matriz Amiga");
		return 0;
	}
}



