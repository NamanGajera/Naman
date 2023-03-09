
    #include <stdio.h>
    int main()
    {
 
        int i, j, a, number[30];
 
        
        for (i = 0; i < 5; ++i){
        	printf("Enter the %d numbers :",i);
            scanf("%d", &number[i]);
		}
    	
 
        for (i = 0; i < 5; ++i) 
        {
 
            for (j = i + 1; j < 5; ++j)
            {
 
                if (number[i] > number[j]) 
                {
 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
 
                }
 
            }
 
        }
 
        printf("\nThe numbers arranged in ascending order are given below \n");
        for (i = 0; i < 5; ++i)
        {
        	printf("%d\n", number[i]);
		}
		
		
		for (i = 0; i < 5; ++i) 
        {
 
            for (j = i + 1; j < 5; ++j)
            {
 
                if (number[i] < number[j]) 
                {
 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
 
                }
 
            }
 
        }
		printf("\nThe numbers arranged in descending order are given below \n");
        for (i = 0; i < 5; ++i)
        {
        	printf("%d\n", number[i]);
		}
		
 
    }
