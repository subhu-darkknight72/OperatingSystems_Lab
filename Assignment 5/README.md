# Semaphores to synchronize between threads
A system with a hotel having _N rooms_ and _X cleaning staff_ and _Y guests_ with randomly allocated priorities. <code>Semaphores</code> will be used to allow multiple threads to access critical sessions, and there will be X threads modeling cleaning staff behavior and Y threads modeling guest behavior. Functionalities of main components are:

- **Main thread :** guest and cleaning staff threads are created, and semaphores are initialized to control access to hotel rooms for these threads.
- **Guest thread :** sleep for a random time, then request a room in the hotel for a duration of 10-30 seconds, allotted if conditions are met; repeats indefinitely until all rooms have at least had 2 occupants.
- **Cleaning Staff thread :** wakes up when all rooms are occupied 2 times  and the hotel needs to be cleaned. Selects a random room occupied since last cleaning, sleeps for an amount of time proportional to the time it was occupied, cleans the room and marks it as clean. This is done for all rooms in the hotel.
