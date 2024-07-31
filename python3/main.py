n = int(input())
def is_prime(n):
  for i in range(2,n):
    if (n%i) == 0:
      return False
  return True
print(sum(is_prime(j)for j in range(2, n + 1)))