def roman(num):
    s = num
    digits = [0,0,0,0];
    roman = []
    for i in range (0,4):
        digits[3-i] = s%10 * 10**i
        s = int(s / 10)
    if (digits[0] != 0):
        if (999 < digits[0] and digits[0] < 4000):
            for i in range (0, int(digits[0]/1000)):
                roman.append("M")
        elif (digits[0] == 4000):
            roman.append("MV_")
        elif (4000 < digits[0] and digits[0] < 9000):
            roman.append("V_")
            for i in range (0, int(digits[0]/1000) - 5):
                roman.append("M")
        elif(digits[0] == 9000):
            roman.append("MX_")
    if (digits[1] != 0):
        if (99 < digits[1] and digits[1] < 400):
            for i in range (0, digits[1]/100):
                roman.append("C")
        elif (digits[1] == 400):
            roman.append("CD")
        elif (digits[1] == 500):
            roman.append("D")
        elif (500 < digits[1] and digits[1] < 900):
            roman.append("D")
            for i in range (0, int(digits[1] / 100) - 5):
                roman.append("C")
        elif (digits[1] == 900):
                roman.append("CM")
        if (digits[2] != 0):
            if (9 < digits[2] and digits[2] < 40):
                for i in range (0, int(digits[2] / 10)):
                    roman.append("X")
            elif (digits[2] == 40):
                roman.append("XL")
            elif (digits[2] == 50):
                roman.append("L")
            elif (50 < digits[2] and digits[2] < 90):
                roman.append("L")
                for i in range (0, int(digits[2]/10) - 5):
                    roman.append("X")
            elif (digits[2] == 90):
                roman.append("X")        
        if (digits[3] != 0):
            if (0 < digits[3] and digits[3] < 4):
                for i in range (0, digits[3]):
                    roman.append("I")        
            elif (digits[3] == 4):
                roman.append("IV")
            elif (digits[3] == 5):
                roman.append("V")
            elif (5 < digits[3] and digits[3] < 9):
                roman.append("V")
                for i in range (0, digits[3] - 5):
                    roman.append("I")
            elif (digits[3] == 9):
                roman.append("IX")
        str1 = ""  
        for ele in roman:  
           str1 += ele
        print(digits)
        print("The Roman number is: " + str1)

roman(int(input("Enter the number\n")))
