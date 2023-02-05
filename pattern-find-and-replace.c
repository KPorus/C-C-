#include<stdio.h>
int main(){
    int len=0;     // for pattern lenth
    int i=0;int j=0,o=0,n=0;
    int to[20];
    char TEXT[]="pattern matching algorithm ";    //TEXT

    char PATTERN[10]="pattern "; //pattern to match

    char NEW[10]="o" ;  // initializing the replacing pattern array
    printf("TEXT[]=  %s \n",TEXT);
    printf("search your pattern :");
   scanf("%s",&PATTERN);
     printf("replace with :");
   scanf("%s",&NEW);

        while( PATTERN[len]!='\0'){len++;}; //while loop to find pattern lenth

            while( TEXT[i]!='\0'){     // while loop to check all the index

                while(TEXT[i]==PATTERN[j]){ // while text and pattern index match loop will continue;
                                               to[j]=i;     i++;j++;  // j++ is for measure how many index is correct ;

        if (j==len){ // if the j's value matched the len value then all the index match to the TEXT
                for(int l=to[0];l<i;l++){

                    TEXT[l]=NEW[n];n++; // replacing here
                }
                printf("pattern matched from index %d to index %d\n TEXT =",to[0],i-1);
                while(TEXT[o]!='\0'){

                     printf("%c",TEXT[o]);o++;
                }

                return 0; // for getting executing the program
                }

            }

            i++;j=0;// if index don't match continue to next index

}

printf("PATTERNT DOSENT MATCH TO YOUR TEXT");







    }

