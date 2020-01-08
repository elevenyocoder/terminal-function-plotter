#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <windows.h>
#define l 30
#define L 100
int main(){
	int graph[l][L];
	int x;
	int y; 

	system("cls");

	for(x = 0;x < l;x++){      //make the table blank
		for(y = 0;y < L;y++){
			graph[x][y] = 0;
		}
	}
	for(x = 0;x < l;x++){      //just put visible point on the graph
		for(y = 0;y < L;y++){
			graph[x][y] = 0;
			if(graph[x][y] == 0){
				printf(".");
			}
		}
	printf("\n");
    }
	return 0;
}
