# Ah 7th time asimint

import datetime
now = datetime.datetime.now()
hour = now.hour

print(f"the time is {now}")
if hour >= 7 and hour <= 12 :
    print(f"Good morining")
elif hour >= 12 and hour <= 19:
    print(f"Good afternoon")
elif hour >= 19 and hour <= 21:
    print(f"Good evening")
else:
    print(f"GOOD NIGHT! GO TO SLEEP!")