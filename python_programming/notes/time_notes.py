#ah 7th time notes

import time
import datetime
epoch = time.time()
redable_time = time.ctime(epoch)
print(f"the time in secomds since jan 1 1970: {epoch}")
print(f"the time is: {redable_time}")
now = datetime.datetime.now()
print(f"the time is: {now}")
hour = now.hour
print(f"the hour is: {hour}")