4. int a = 1, b = 2, c = 3, d = 4;

**a += b + c; // Valor final de a = 6**

a += (b + c) → (b + c) = 5  
a += 5 → a = a + 5  
a = 1 + 5 = 6

**Novo valor das variáveis: a = 6, b = 2, c = 3, d = 4**

---

**b \*= c = d + 2; // Valores finais de b = 12 e c = 6**

c = (d + 2) → c = 6  
b \*= 6  
b = b \* 6  
b = 2 \* 6 = 12

**Novo valor das variáveis: a = 6, b = 12, c = 6, d = 4**

---

**d %= a + a + a; // Valor final de d = 4**

d %= 6 + 6 + 6  
d %= 18  
d = d % 18  
d = 4 % 18 = 4

**Novo valor das variáveis: a = 6, b = 12, c = 6, d = 4**

---

**d -= c -= b -= a; // Valores finais de d = 4, c = 0 e b = 6**

b -= a → b = b - a → b = 12 - 6 → b = 6  
c -= b → c = c - b → c = 6 - 6 → c = 0  
d -= c → d = d - c → d = 4 - 0 = 4

**Novo valor das variáveis: a = 6, b = 6, c = 0, d = 4**

---

**a += b += c += 7; // Valores finais de a = 19, b = 13 e c = 7**

c += 7 → c = c + 7 → c = 0 + 7 = 7  
b += 7 → b = b + 7 → b = 6 + 7 = 13  
a += 13 → a = a + 13 → a = 6 + 13 = 19

**Novo valor das variáveis: a = 19, b = 13, c = 7, d = 4**