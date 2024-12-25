def romanToInt(s):
        toContinue = False
        finalNumber = 0
        for i in range(len(s)):
            if toContinue == True:
                toContinue = False
                continue
            if s[i] == "I":
                if i+1 < len(s) and s[i+1] == "V":
                    finalNumber = finalNumber + 3 #so that it adds up to four when running the next line
                    i = i + 1
                    toContinue = True
                elif i+1 < len(s) and s[i+1] == "X":
                    finalNumber = finalNumber + 8
                    i = i + 1
                    toContinue = True
                finalNumber = finalNumber + 1
                continue
            elif s[i] == "V":
                finalNumber= finalNumber + 5
            elif s[i] == "X":
                if i+1 < len(s) and s[i+1] == "L":
                    finalNumber = finalNumber + 30
                    i = i + 1
                    toContinue = True
                elif i+1 < len(s) and s[i+1] == "C":
                    finalNumber = finalNumber + 80
                    i = i + 1
                    toContinue = True
                finalNumber= finalNumber + 10
                continue
            elif s[i] == "L":
                finalNumber= finalNumber + 50
            elif s[i] == "C":
                if i+1 < len(s) and s[i+1] == "D":
                    finalNumber = finalNumber + 300
                    i = i + 1
                    toContinue = True
                elif i+1 < len(s) and s[i+1] == "M":
                    finalNumber = finalNumber + 800
                    i = i + 1
                    toContinue = True
                finalNumber= finalNumber + 100
                continue
            elif s[i] == "D":
                finalNumber= finalNumber + 500
            elif s[i] == "M":
                finalNumber= finalNumber + 1000
        return finalNumber

#Main Method
print ("")
print ("🏛️  Welcome to the Roman Number Converter! 🏛️")
inputed = input("Please type in your roman number: ")
print ("Your roman number as an integer is ", romanToInt(inputed.upper()))

