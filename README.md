## Passgen

Passgen is a basic password generator written in ISO C99, by default it generates criptgraphically secure randomized 16 character passwords but can generate any lenght (that fits in a signed 32 bit integer) password by passing an integer as a command line argument.

Usage:
```
passgen.exe <password lenght>
```

Dependencies needed for compilation:
- libsodium (Installed with vcpkg) 
- Visual Studio 2022.

To build under Linux:
- Install libsodium
- cd into the passgen folder
- `cc passgen.c -lsodium -O3 -o passgen`