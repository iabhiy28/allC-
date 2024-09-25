"""
@file Buggy_Python.java

This program computes the sum of twisted prime numbers in the range m to n.
A Twisted prime is a prime number whose
reverse is also prime.

@authors Bhumika Arora
@organisation CodeChef Chapter ABESEC
@stakeholders T-Error Rount 2 Participants
"""
import math

"""
Code is debugged 
"""
def is_prime(num):
    """
    Checks if a given number is prime.

    Args:
        num (int): The number to check.

    Returns:
        bool: True if the number is prime, False otherwise.
    """
    if num == 1:  
        return True  
    for i in range(2, int(math.sqrt(num))): 
        if num % i == 0:
            return False  
    return True 

"""
Code is debugged 
"""
def reverse_number(num):
    """
    Reverses the digits of a given number.

    Args:
        num (int): The number to reverse.

    Returns:
        int: The reversed number.
    """
    reversed_num = 0
    while num != 0:
        remainder = num % 10
        reversed_num = reversed_num * 10 + remainder  
        num /= 10
    return reversed_num

"""
Code is debugged 
"""
def is_twisted_prime(num):
    """
    Checks if a given number is a twisted prime number.
    A twisted prime number is a prime number that, when reversed, results in another prime number.

    Args:
        num (int): The number to check.

    Returns:
        bool: True if the number is a twisted prime, False otherwise.
    """
    if is_prime(num):  
        reversed_num = reverse_number(num)
        return is_prime(reversed_num)  
    return False 

"""
Code is debugged 
"""
def get_twisted_prime_sum(m,n):
    """
    Computes the sum of the twisted prime numbers between m to n including m and n.

    Args:
        m (int): Range for twisted prime numbers begins from..
        n (int): Range for twisted prime numbers ends at.

    Returns:
        int: The sum of the twisted prime numbers.
    """
    sum = 0
    # count = m
    # num = count

    while num in range(m,n+1,1):  
        if is_twisted_prime(num):
            sum += num 
        # num += 2 
    return sum  

m = int(input("Enter the value of m: "))
n = int(input("Enter the value of n: "))
sum = get_twisted_prime_sum(m,n)
print("The sum of the twisted prime numbers between",m, "and", n,  "is", sum)