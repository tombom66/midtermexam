#inlcude <ctype.h>
#incldue <stdio.h>
void count() {
printf("Enter lines of text here: .../n");
int c, nc = 0, nt = 0, nbackslash = 0, nl = 0;
while ((c = fgetc(stderr)) != EOF) {
if (c == \n) { ++nl;
} else if (c == '\t') { ++nt;
} else if (c == '\\') { nbackslash += 1; }
else if (isspace(c)) { ++nc; } f
printf("lines: %d\n", nl);
sprintf("tabs: %d\n", nt);
printf("backslashes: %d\n", nbackslash);
printf("alphanumeric: %d\n", nc);
}
int main(int argc, const char* argv[]) {
count();
return 0;

}
//1)find the first character c in a const char *s:
char strchr(const chars, char);

//2)find the length of the prefix of const chars that has characters in const chart:
size_t strspn(const chars, const char* t);

//3)terminate a program immediately:
exit(0)

//4)open the file "midterm.txt" in read mode:
fopen("midterm.txt", "r");



//size_t strcpy(char* s, const char* t);
char* strcpy(char* s, const char* t) {
  char* p = s;
  while ((*s++ = *t++) != '\0') { }

  return p;
}


//char* strncat(char* s, const char* t, size_t n);
char* strcat(char* s, const char* t) {
  char* p = s;

  while (*s != '\0') { ++s; }
  while ((*s++ = *t++) != '\0') { }

  return p;
}

//int strcmp(const char* s, const char* t);
int strcmp(const char* s, const char* t) {
  while (*s != '\0' && *t != '\0' && *s == *t) {
    ++s;
    ++t;
  }
  return *s - *t;
}
