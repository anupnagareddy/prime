#include <cstdio>
#include <cstdlib>

void print(int *buffer,const int &len) {

for (int i=0;i<len;i++) {
    if (!buffer[i])
      printf("%llu\n",i);
  }
}

void mark(int* buffer,const int &start,const int& len) {
  int coeff = 2;
  for(int i=start*coeff; i<len; i=start*coeff) {
    buffer[i] = 1;
    coeff++;
  }
}

int main(int argc,char *argv[]) {

int len  = atoi(argv[1]);
int *buffer = new int[len];

for (int i=2;i<len;i++) {
  if (!buffer[i])
    mark(buffer,i,len);
}

print(buffer,len);
delete[] buffer;

}
