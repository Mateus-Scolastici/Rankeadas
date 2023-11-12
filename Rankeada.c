#include <stdio.h>

int Level(int vit, int derr);
void Classification(int status, char name[]);

void main()
{
	char name[20];
	int vit, derr, status;
	printf("Digite o nome do Heroi: ");
	scanf("%s", &name);
	printf("Digite a quatidade de Vitórias: ");
	scanf("%d", &vit);
	printf("Digite a quatidade de Derrotas: ");
	scanf("%d", &derr);
	
	status = Level(vit, derr);
	
	Classification(status, name);
}

int Level(int vit, int derr)
{
	int status = vit - derr;
	
	 return status;
}

void Classification(int status, char name[])
{
	char lvl[10];
	
	if (status <= 10){
        lvl[10] = "Ferro";
	}
    else if (status <= 20){
        lvl[10] = "Bronze";
	}
    else if (status <= 50){
        lvl[10] = "Prata";
	}
    else if (status <= 80){
        lvl[10] = "Ouro";
    }
    else if (status <= 90){
        lvl[10] = "Diamante";
    }
    else if (status <= 100){
        lvl[10] = "Lendario";
    }
    else{
        lvl[10] = "Imortal";
    }
    
    printf("O heroi de nome %s esta no nivel %c", name, lvl);
}

