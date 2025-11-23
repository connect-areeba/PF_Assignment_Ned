for num in range(25, 50):
    if num > 1:
        IsPrime = True
        for i in range(2, num):
            if num % i == 0:  
                IsPrime = False
                break
        if IsPrime:
            print(num)
