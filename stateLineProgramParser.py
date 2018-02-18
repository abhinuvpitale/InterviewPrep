class Solver():
    def __init__(self):
        self.nInput = int(input('Enter Input #'))
        self.nOutput = int(input('Enter Output #'))
        self.nInter = int(input('Enter Inter #'))

        print('Input Equations')
        self.inputD = self.entryFx(self.nInput)
        print('Inter Equations')
        self.interD = self.entryFx(self.nInter)
        print('Output Equations')
        self.outputD = self.entryFx(self.nOutput)

        self.inputVariables = self.inputD.keys()
        self.interVariables = self.interD.keys()
        self.outputVariables = self.outputD.keys()


    def entryFx(self,n):
        dicter = {}
        for idx in range(n):
            string = input('enter equation')
            key,value = string.split('=')
            dicter[key] = value
        return dicter

    def solveAll(self):
        for key in self.interD:
            print(key)
            print(self.interSolver(key))

    def interSolver(self,key):
        lister = self.expReduce(self.interD[key])
        return self.solver_(lister)

    def solver_(self,innerlister):
        strg = '('
        for item in innerlister:
            if self.checkInter(item):
                strg = strg + self.interSolver(item)
            else:
                strg = strg + item
        return strg + ')'

    def checkInter(self,item):
        if item in self.interVariables:
            return True
        else:
            return False



    def expReduce(self,string):
        var = []
        expr = []
        tempStr = ''
        for item in string:
            if item == '+' or item  == '*' or item == '#':
                var.append(tempStr)
                tempStr = ''
                expr.append(item)
            else:
                tempStr = tempStr + str(item)
        if tempStr:
            var.append(tempStr)
        finalList = []
        finalList.append(var[0])
        count = 1
        for item in expr:
            finalList.append(item)
            finalList.append(var[count])
            count = count+1
        return finalList


Sol = Solver()
Sol.solveAll()
print(1)
