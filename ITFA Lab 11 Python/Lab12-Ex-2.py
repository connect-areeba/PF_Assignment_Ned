numbers = [34, 12,56,789,543,400,600,90,45]

for num in numbers:
    if num % 5 == 0:
        print(num)
    if num > 150:
        continue
    if num > 500:
        break
