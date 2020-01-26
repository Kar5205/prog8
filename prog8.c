#include  <stdio.h>
#define EOL '\n'

void  main (void)
{   
    char one = 1 ;
    char two = 2 ;
    char three = 3 ;

    char* onePointer = NULL ;
    char* twoPointer = NULL ;
    char* threePointer = NULL ;

    onePointer = &one ;
    twoPointer = &two ;
    threePointer = &three ;

    printf("%cone vailabe:%d%c",EOL,one,EOL);
    printf("two vailabe:%d%c",two,EOL);
    printf("three vailabe:%d%c",three,EOL);

    printf("%cone adress:0x%X%c",EOL,onePointer,EOL);
    printf("two adress:0x%X%c",twoPointer,EOL);
    printf("three adress:0x%X%c",threePointer,EOL);

    *onePointer = 10 ;
    *twoPointer = 20 ;
    *threePointer = 30 ;

    printf("%c one new:%d%c",EOL,one,EOL);
    printf(" two new:%d%c",two,EOL);
    printf(" three new:%d%c",three,EOL);
    
    printf("%cone adress:0x%X%c",EOL,&onePointer,EOL);
    printf("two adress:0x%X%c",&twoPointer,EOL);
    printf("three adress:0x%X%c",&threePointer,EOL);




	return;
}