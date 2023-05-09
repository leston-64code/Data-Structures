// typedef is used to rename the datatype with our own type
// for example typedef int INTEGER :- In this case the inside void main we use INTEGER a=5 insted of int a=5
// Syntax of typedef is typedef original_type user_given_type

// Same in case of structures 
// struct employee{
//     char *name;
//     int age;
//     int salary;
//     char *role;
// };
// **** if we declare structure in this way then while inside main func when we intitialeze a sturcture we give as struct employee emp1
// To avoid that by using the typedef method we can do like this 
//  typedef struct employee{
//     char *name;
//     int age;
//     int salary;
//     char *role;
// } EMP;

// Now inside main function insted of struct employee emp1 we can just give EMP emp1