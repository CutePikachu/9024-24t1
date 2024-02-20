#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("hello world");
    return 1;
}
// name - first name last name

typedef struct {
  char firstname[21];
  char lastname[21];
} Name;

typedef char[11] PhoneNumber;

typedef struct {
  short streetNumber;
  char streenName[31];
  char suburb[16];
  char state[4];
  short postcode;
} Address;

typedef struct {
  short day;
  short month;
  short year;
} DoB;

typedef struct {
  Name name;
  Address address;
  DoB dob;
  PhoneNumber phone;
  Char email[31];
} Contact;
