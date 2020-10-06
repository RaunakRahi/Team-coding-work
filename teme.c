#include<stdio.h>
#include<conio.h>

void main(){
  int arr[10],size,i,Element;

  //ask the user for the size of the the array
  printf("Enter size of the array: ");
  scanf("%d",&size);

  // ask user to provide values of array
  printf("Enter any %d integer values: ",size);
 
  //save user values in arr[] array
  for(i = 0; i < size; i++)
  {
    scanf("%d",&arr[i]);
  }

  printf("Enter the element to be Search: ");
  scanf("%d",&Element);
  
  // loop each element of the array and check if element is equal to the element
  //we need to find
  for(i = 0; i < size; i++)
  {
     if(Element == arr[i])
     {
      // show element found message with it's position
        printf("Element is found at %d index", i);
        break;
     }
  }
  //check if we have reached the end of the list and not found element yet
  if(i == size)
  {
     printf("Given element is not found in the array!!!");
  }
  getch();
}
