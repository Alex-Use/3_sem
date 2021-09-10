#include <iostream>
#include <string>
using namespace std;

int strConteins(char *a, char* str){
	
	int i=0;
	int j=1;
	int z;
	int x=0;
	while(a[x] != '\0'){
		 x++;
		}
	while(str[i] != '\0'){
		if (str[i] == a[0])
		{
			z = i;
			while(a[j] != '\0')
			{
			 if(str[i+j] != a[j])
			 	{
			 	return -1;
			 	break;
			 	}
			 	j++;
				}
				if(j == x)
				{
					return (z+1);
					break;
					}
		}
		i++;
		
		}
		if(j!=x)
		return -1;
	
	}
	
