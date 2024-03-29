# uuid4
A tiny C library for generating [uuid4](http://www.ietf.org/rfc/rfc4122.txt) strings.

Depends on OpenSSL random generator.

### Usage
[uuid4.c](src/uuid4.c?raw=1) and [uuid4.h](src/uuid4.h?raw=1) should be coppied into an existing project. The library contains two functions:
one to initialize the library and one to generate a uuid4 string and store it in a buffer of at least `UUID4_LEN` in size.

```c
char buf[UUID4_LEN];
uuid4_init();
uuid4_generate(buf);
printf("%s\n", buf);
```

`uuid4_generate()` is not thread-safe.

Based on https://github.com/rxi/uuid4
