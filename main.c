#include <stdio.h>
#include <time.h>
#define HALLOWEEN_UNIX_TIMESTAMP 1635683760

int main(void)
{
  int spoopy_date = (int)time(NULL);
  int is_halloween = 0;
  
  if (spoopy_date == HALLOWEEN_UNIX_TIMESTAMP) {
    is_halloween = 1;
    printf("happy halloween\n");
  } else {
    printf("not yet halloween\n");
  }
}
