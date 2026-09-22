class Solution:

    def sumofSquareOfDigits(self,n):
        total =0

        while n>0:
            dig=n%10
            total =total+(dig*dig)
            n=n//10
        return total

    def isHappy(self, n: int) -> bool:

        slow=n
        fast=n

        while fast!=1:
           slow =self.sumofSquareOfDigits(slow)

           fast=self.sumofSquareOfDigits(self.sumofSquareOfDigits(fast))
           if fast ==1:
              return True
           if slow==fast:
              return False
        return True   
        