#include <stdio.h>
#include <assert.h>
#include "col.h"

const int MAX_COLORPAIR_NAME_CHARS = 16;
const char* MajorColorNames[] = { "White", "Red", "Black", "Yellow", "Violet" };
const char* MinorColorNames[] = { "Blue", "Orange", "Green", "Brown", "Slate" };
int numberOfMajorColors =  sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
int pairNumber = 1;

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
