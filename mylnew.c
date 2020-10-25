#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int myint()
{
int a;
int *p;

p = &a;

a=9;

printf("Value of a is %d\n", a);
printf("Address of a is %d\n", p);
printf("Value of a that p points to is %d\n", *p);
printf("Address of p is %d\n", &p);

*p = *p + 1;
printf("Value of a after adding 1 to *p is %d\n", a);
printf("Value of a that p points to is %d\n", *p);

}

void mychar()
{
char c[] = "HELLO";
int len = strlen(c);
printf("%s has %d number of chars\n",c,len);
}

void myarray()
{
  int A[6] = {12,14,10,23,11,43};
  int i=0;
  int *p;
  p = &A[0];
  printf("Value in p is %d\n", p);
  printf("Value in p+1 is %d\n", p+1);
  printf("Value p+1 points to is %d\n", *(p+1));
  printf("which is %d same as value of A[1]\n", A[1]);

  for(i=0;i<6;i++)
  {
//    printf("I is %d\n", i);
    printf("Value stored in Array member %d is %d\n", i, A[i]);
    printf("Address of Array member %d is %d\n", i, &A[i]);
    printf("Value stored in Array member %d is %d\n", i, *(A+i));
    printf("Address of Array member %d is %d\n", i, A+i);
  }
}

int mydoar(int *arp, int size)
{
  // we are using the pointer to the Array to get its values
int suma = 0;
int i=0;
printf("From mydoar Array %d\n", size);
  for (i=0; i<size; i++)
  {
    printf("Value in array ar[%d] is %d\n", i,*(arp+i) );
  suma = suma + *(arp + i) ;
  }
printf("Sum of values in Array is %d\n",suma);
} // end of mydoar

void mypasar()
{
  printf("From mypasar Array\n");
  int ar[5]={2,5,6,8,2};
  int size = 0;
  size = sizeof(ar) / sizeof(ar[0]);
  printf("%d\n", size);
  mydoar(ar, size);
} // end of mypasar

void mycharry()
{
printf("\nFunction to learn Characters and strings\n");
}


// ************************************ MAIN starts here *************
int main()
{
system("clear");
printf("Hello student\n");
// Call integer work
//myint();

// Characters
//mychar();

// Array
//myarray();

// Pass Array
mypasar();
// Char Array
mycharry();
}
