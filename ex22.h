#ifndef _ex22_h
#define _ex22_h

//makes THE_SIZE available to other files.
extern int THE_SIZE;

//gets and sets internal static variable in ex22
int get_age();
void set_age(int age);

//updates a static variable inside update_ratio
double update_ratio(double ratio);

void print_size();

#endif
