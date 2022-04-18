#include <stdio.h>
#include <assert.h>
#include "col.h"

void PrintColorRefrence(int * MajorColorIdx)
{
   int lMajorColorIdx;
   int lMinorColorIdx =0;   
   lMajorColorIdx = *MajorColorIdx;
   for( lMinorColorIdx = 0; lMinorColorIdx < numberOfMinorColors; lMinorColorIdx++ )
   {
       printf( "%d\t             %s\t            %s\t\n",pairNumber, MajorColorNames[lMajorColorIdx], MinorColorNames[lMinorColorIdx]);
       pairNumber++;
   }
}

void ColorCatalogue()
{
  int lMajorColorIdx;  
  printf("PairNumber         MajorColor        MinorColor \n");  
  for( lMajorColorIdx = 0; lMajorColorIdx < numberOfMajorColors; lMajorColorIdx++ )
  {
     PrintColorRefrence(&lMajorColorIdx);
  }
}
