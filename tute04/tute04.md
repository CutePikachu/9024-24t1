## q1
```c
int data[12] = {5, 3, 6, 2, 7, 4, 9, 1, 8};
// assuming that &data[0] == 0x10000, what are the values of the following expressions 
data + 4 = 0x10000 + 4 * 4= 0x10010
*data + 4 = data[0] + 4 = 5 
*(data + 4) = * (0x10010) = data[4] = 7 
data[4] = 7 
*(data + *(data + 3)) = *(data + (data[3])) = *(data + 2) = data[2] = 6 
data[data[2]] = data[6] = 9
```

## q2
### a

```c

int a = 5;                    // line 1
int b = 123;                  // line 2

int *pa = &a;                 // line 4
int *pb = &b;                 // line 5

*pa = 6;                      // line 7
*pb = 234;                    // line 8

int c = *pa;                  // line 10
*pa = *pb;                    // line 11
*pb = c;                      // line 12

pa = pb;                      // line 14
*pa = 345;                    // line 15
```
What's the state of the memory after each line is excuted?

After line 2:
a: 5  b: 123

After line 4:
a: 5  b:123
^     ^
pa    pb

After line 8:
a: 6  b: 234
^     ^
pa    pb

After line 12:
a: 234 b: 6 c: 6
^      ^
pa     pb

After line 15:
a: 234 b: 345 c:6
       ^   ^
       pa  pb


### b
```c

typedef struct {
   int   studentID;
   int   age;
   char  gender;
   float WAM;
} PersonT;

PersonT per1;
PersonT per2;
PersonT *ptr;

ptr = &per1;
per1.studentID = 3141592;
ptr->gender = 'M';
ptr = &per2;
ptr->studentID = 2718281;
ptr->gender = 'F';
per1.age = 25;
per2.age = 24;
ptr = &per1;
per2.WAM = 86.0;
ptr->WAM = 72.625;
```

What are the values of the fields in per1 and per2 after the execution of the above statements

p1: {
  studentID: 3141592 
  age: 25 
  gender: 'M'
  WAM: 72.625 
}

p2: {
  stduentID: 2718281 
  age: 24 
  gender: 'F'
  WAM: 86.0
}
