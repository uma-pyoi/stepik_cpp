### my notes

#### arrays

```c++
int* m = new int[10];
m[i] == *(m + i) // TRUE because m is a pointer to m[0]
```

so the value of m is the same as &m[0], as it is a pointer that stores the address of m[0]

##### 2d matrix

a 2d int matrix is an array of pointers of length <rows> where each element points to an array of ints:

```c++
int data[rows][cols] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};
int *m[rows];
for (int i = 0; i < rows; ++i)
    m[i] = data[i];

```

#### &

here & is used to create a reference, an alias

```c++
int foo{5};
int & bar = foo; // bar is now an alias for foo
```

another example:

```c++
class Cat {
    int& getData(size_t i) { return data[i];}
    
    int* data{new int[10]};
};
```

here int& is the returned type, and it returns an alias to data[i] that we can work with
for example we could assign the return value to a simple int value:

```c++
int meow{getData(i)}; // => copies value of data[i] into meow
```

or we could create an alias for the returned value:

```c++
int& meow{getData(i)}; // => meow is now an aliase for data[i], which allows us to change it directly
```

###### & alias for temp objects

for temporary objects, only const references can be made. (because non-const aliases will be unsafe).
moreover, the temporary object will have its life prolonged as long as the const alias is in scope.

```c++
Foo &get_foo(char *msg) {
    const Foo& fooALias = FooDerived(msg);; // const references are allowed for temp objects
    return fooALias;
}
```

#### classes

##### inheritance

- the constructor of Child class always calls the constructor of Parent class. (if we don't specify which Parent
  constructor is called, the default one will be called)
- when nearing the end of its lifetime, first the child's destructor is called and then the parent's
- an instance of Child can be copied into an instance of Parent, the fields inherited from Parent get passed into the
  new Parent object, and the rest (Child fields) are ignored

#### overloading rules (simplified)

1. Parameters match perfectly - the exact matching function gets called
2. Matching function cannot be found even after considering type conversion - an error is generated (e.g. if all
   functions expect 2 parameters but we're only passing 1)
3. Parameters don't match perfectly but a function can be called after converting the parameters
    1. Type widening: char -> int, float -> double (least expensive)
    2. Standard conversion: double -> int, Child class * -> Parent class *
    3. User conversion: if class A has constructor with class B, then class B can be converted into class A (most
       expensive conversion)

overloading happens at compile time, after compilation the functions will be replaced with the addresses to call at
runtime.
