/*#include <stdio.h>

int main() {
  int x = 10;
  volatile const int *p = &x;
  *p = 20;
  printf("%d", x);
  return 0;
}
#include <stdio.h>

int main() {
  volatile int x = 10;
  int *p = &x;
  *p = 20;
  printf("%d", x);
  return 0;
}
#include <stdio.h>

int main() {
  int x = 10;
  const int *p = &x;
  x = 20;
  printf("%d", *p);
  return 0;
}

#include <stdio.h>

struct Point {int x, y};

int main()

{

   struct Point p1 = {1, 2}, *p2;

   p2 = &p1;

   printf("(%d, %d)", p2->x, p2->y);

   return 0;

}
#include <stdio.h>

int main() {
  int x = 10;
  const int *const p = &x;
  x = 20;
  printf("%d", *p);
  return 0;
}

#include <stdio.h>

int main()

{

   int x = 5, y = 2, z;

   z = x > y ? x : y;

   printf("%d", z);

   return 0;

}

#include <stdio.h>
#include <stdlib.h>

struct person {
  char name[50];
  int age;
};

int main() {
  struct person people[2];
  strcpy(people[0].name, "John");
  people[0].age = 30;
  struct person *p = malloc(2 * sizeof(struct person));
  p[0].age = 25;
  strcpy(p[1].name, "Jane");
  printf("%d %s", people[0].age + p[0].age, p[1].name);
  free(p);
  return 0;
}
#include <stdio.h>

int add(int x, int y) {
  return x + y;
}

int main() {
  int (*p)(int, int);
  p = add;
  printf("%d", p(10, 20));
  return 0;
}

#include <stdio.h>
#define MAX(x, y) ((x) > (y) ? (x) : (y))

int main() {
  int a = 10, b = 20;
  printf("%d", MAX(a++, b--));
  printf(" %d %d", a, b);
  return 0;
}
#include <stdio.h>

int main() {
  int x = 10;
  int *volatile p = &x;
  *p = 20;
  printf("%d", x);
  return 0;
}
#include <stdio.h>

int main() {
  int x = 10;
  const volatile int *p = &x;
  x = 20;
  printf("%d", *p);
  return 0;
}*/

#include <stdio.h>

int main() {
  int arr[3] = {10, 20, 30};
  int *p1 = arr;
  int **p2 = &p1;
  printf("%d", **p2 + 1);
  return 0;
}
