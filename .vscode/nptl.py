# def intreverse(n):
    
#     res=0
    
#     while(n > 0):
        
#         lastDig = n %10
#         res = res *10 + lastDig
#         n = n //10
#     return res
def sumprimes(I):
    
  
 # Function for check that the number is prime
    def check_prime(number):
        
    
    
 # Negative numbers and 1 are not simple
        if number < 2:
            
    
            return False
 # Check all dividers before sqrt(number)
        for i in range(2, int(number ** 0.5) + 1):
    
    
 # If the number has divisor it is not prime
            if not number % i:
    
                return False
            return True
 # Sum primes
    total = 0
 # Check all number in the list
    for i in I:
        
  
  
 # If number is prime add it to result
        if check_prime(i):
    
    
            total += i
    
        return total
