#include <stdio.h>
#include <stdiob.h>

void echo() {
    char buf[5];
    fgets(buf, sizeof(buf), stdin); 
    printf("%s\n", buf);
}

int main(){
  int x = 42;
  echo();
  return 0;
}
