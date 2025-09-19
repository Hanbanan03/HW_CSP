# HW 7th about getting the time

import time
import datetime

epoch=time.time()
readable_time = time.ctime(epoch)

print(f"The in seconds time since Jan 1, 1970 {epoch} ")
print(f"The time is: {readable_time}")
now = datetime.datetime.now()
hour = now.hour

now = datetime.datetime.now()
print(f"The time is {now}")
print(f"The hour is {hour}")
