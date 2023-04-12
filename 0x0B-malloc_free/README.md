In summary, malloc is used to allocate dynamic memory during runtime,
and free is used to deallocate that memory when it is no longer needed,
helping to manage memory efficiently in C programs.

Valgrind uses a technique called "dynamic binary instrumentation"
to analyze the behavior of a program as it runs.
It instruments the program's binary code at runtime,
inserting additional code that tracks memory allocations,
deallocations, and accesses.
This allows Valgrind to detect memory errors and provide detailed
reports with information on the source code locations where the errors occurred.
