int a = 2, b = 4, c = 5, d = 10;
a += b + c; // Valor final de a = 11
b *= c = d - 2; // Valores finais de b = 32 e c =8
d %= a + 3; // Valor final de d = 10
a += b += c += 5; // Valores finais de a = 56, b = 45 , c = 13

---
resolução:
a += b + c
a = a + (b+c)
a = 2 + (4+5)
a = 11

---
**int a = 11, b = 4, c = 5, d = 10;**
b *= c = d - 2
b = b * (c = (d-2))
b = b * (c = (10-2))
b = b * (c = 8)
b = 4 * 8
b = 32

---
**int a = 11, b = 32, c = 8, d = 10;**
d %= a + 3
d = d % (a +3)
d =  d % 14
d = 10 % 14
d = 10

---
**int a = 11, b = 32, c = 8, d = 10;**
a += b += c += 5
a = a + (b = b + ( c = c + 5))
a = a + (b = b + ( c = 8 + 5))
a = a + (b = b + ( c = 13))
a = a + (b = b + 13)
a = a + (b = 32 + 13)
a = a + (b = 45)
a = 11 + 45
a = 56

**int a = 56, b = 45 , c = 13, d = 10;**