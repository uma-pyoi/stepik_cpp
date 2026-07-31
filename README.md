### my notes

#### arrays
```c++
int* m = new int[10];
m[i] == *(m + i) // TRUE because m is a pointer to m[0]
```

so the value of m is the same as &m[0], as it is a pointer that stores the address of m[0]


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
int& meow{getData(i)}; // => meow is now an aliase for data[i]
```

