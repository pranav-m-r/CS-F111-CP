#include <stdio.h>

int main() 
{

  int apples,mangoes,oranges,costApples,costMangoes,costOranges;

  //Take Input of quantities
  scanf("%d %d %d",&apples,&mangoes,&oranges);

  //Take Input of cost per dozen
  scanf("%d %d %d",&costApples,&costMangoes,&costOranges);

  //Calculating Cost of each fruit
  int totalCostApples=apples/12*costApples;
  int totalCostMangoes=mangoes/12*costMangoes;
  int totalCostOranges=oranges/12*costOranges;

  //Calculating Remaining quantity in each Fruit
  int leftApples=apples%12;
  int leftMangoes=mangoes%12;
  int leftOranges=oranges%12;

  //Output
  printf("Cost of Apples-%d\n",totalCostApples); 
  printf("Cost of Mangoes-%d\n",totalCostMangoes);
  printf("Cost of Oranges-%d\n",totalCostOranges);
  printf("Total Cost-%d\n",totalCostApples+totalCostMangoes+totalCostOranges);
  printf("Remaining Apples-%d\n",leftApples);
  printf("Remaining Mangoes-%d\n",leftMangoes);
  printf("Remaining Oranges-%d\n",leftOranges);


  return 0;
}
