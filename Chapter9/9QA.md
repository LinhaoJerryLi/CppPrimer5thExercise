# 9.1

# 9.2

```cpp
list<deque<int> > ldi;
```

# 9.3

begin <= end
on the same container.

# 9.6

```cpp
while(iter1 != iter2)
```

list iternator has no +/- and <> >= <= ...

# 9.7

```cpp
vector<int>::size_type
```

# 9.8

```cpp
list<string>::const_iterator //read
list<string>::iterator //write
```

# 9.9

begin takes const/nonconst and and returns the conrresponding iterator
cbegin takes const/nonconst and and returns const iterator

# 9.10

```cpp
vector<int>::iterator;
vector<int>::const_iterator;
vector<int>::const_iterator;
vector<int>::const_iterator;
```

# 9.12

iter constructor cannot be used on array init.
copy must have container type matched and value type matched
iter works as long as value type can convert.

# 9.17

must has < defined. same type as c2, must not be unordered asso container.

# 9.21

same behavior, very expensive.

# 9.23

same

# 9.29

resize it to 100 and use default initializer to create the following 75 elements
resize to 10 and eliminate the last 15 elements.

# 9.30

for class type vector, default constructor of that class should be provided.

# 9.32

no, the order of exection is undetermined.
