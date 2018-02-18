class Solution:
    # @param A : integer
    # @return a list of integers
    def primesum(self, A):
        self.A = A
        primes = self.getPrime()
        for item in primes:
            if A-item in primes:
                return (item,A-item)


    def getPrime(self):
        self.sieve = self.A*[False]
        self.sieve[0] = True
        primes = set()
        for idx in range(2,self.A):
            if self.sieve[idx-1] == False:
                primes.add(idx)
                self.setSieve(idx)
        return primes

    def setSieve(self,n):
        curr = 2*n
        while curr<=self.A:
            self.sieve[curr-1] = True
            curr = curr + n
