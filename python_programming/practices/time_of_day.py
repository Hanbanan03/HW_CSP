# HW 7th time of day


import datetime

now = datetime.datetime.now()
hour = now.hour

print(f"The hour is {hour}")

if hour >= 17:
    print("Good evening!")
elif hour >= 12:
    print("Good afternoon!")
elif hour >= 7:
    print("Good morning!")
else:
    print("Good night!")