#include <stdio.h>

/*Lets define the struct*/
struct Person {
	char name[30];
	int age;
};

/* OR
typedef struct Person {
	char name[30];
	int age;
}Person;


/*
	To avoid use "struct Person" each time we want to create an object/struct Person, we define "struct Person" using typedef
*/
typedef struct Person Person;

/*You can even do this */
typedef int number;

int main(int argv, char *argc[] ){
	/*instead of struct Person, we do*/
	Person promise;

	promise.age = 50;
	printf("age :%d\n", promise.age);

	/*instead of 'int number = 5';, we can do*/
	number five = 5;
	printf("five = %d\n", five );

	return 0;
}
