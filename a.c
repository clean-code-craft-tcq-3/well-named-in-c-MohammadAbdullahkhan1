#include <stdio.h>
#include <assert.h>
#include "Color.h"

void ColorCatalogue()
{
  int lMajorColorIdx;
  int lMinorColorIdx =0;
  printf("PairNumber         MajorColor        MinorColor \n");  
  for( lMajorColorIdx = 0; lMajorColorIdx < numberOfMajorColors; lMajorColorIdx++ )
  {
        for( lMinorColorIdx = 0; lMinorColorIdx < numberOfMinorColors; lMinorColorIdx++ )
         {
             printf( "%d\t             %s\t            %s\t\n",pairNumber, MajorColorNames[lMajorColorIdx], MinorColorNames[lMinorColorIdx]);
             pairNumber++;
         }
  }
}
