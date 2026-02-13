What I am doing in this question was storing the len of integer n using log10(num)+1 but it will give memory erro bcz
10^k which is very large for memory so to overcome this problem I used remainder to check if n is divisble by k or not and before that I just using num = num*10+1 which 

⭐ THE KEY INSIGHT
You should never store the number 11111... itself.
You only store its remainder:

✔ So the two problems with your approach:
🚫 1. num = num * 10 + 1 → OVERFLOW → wrong number
🚫 2. log10(num) + 1 → WRONG length after overflow

So, to overcome this problem I store remainders only and compare with len variable by inc+ len in every iteration