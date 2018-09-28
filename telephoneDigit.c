#include<stdio.h>
#include<stdbool.h>

int main()
{
	char ch;


	//scanf("%c", &ch);
	bool flag = true;
	
	while( flag == true ) {
		scanf("%c", &ch);
		
		if(ch=='#')
			flag = false;
		else{
		switch(ch){
			case 'A': 
			case 'B': 
			case 'C': printf("1");
					  break;
			
			case 'D': 
			case 'E': 
			case 'F': printf("2");
					  break;
	 	
		}
		}
	}
	
	return 0;
}
