# Assignment 3 notes
I dunno know if you can open this project on your own computer because I couldn't push everything (git size limit moment) but all the important files should be viewable.  I also added some screenshots!
- For dialogue, approach the enemy and press E to interact (there are a few lines of dialogue haha)
- Unfortunately due to bugs from my original project, I had forked the lecture repository, and couldn't find the time to reimplement a lot of functionality.  Imagine if you could do the ammo/health stuff from my old repo...though I made some effort to reimplement some important components :)
- There are death states that trigger win/death screens (W_Death, W_Win) with restart buttons that reload the level.
- The enemy will follow the spline path/loiter to a random position if decorator inverse (cannot see player), but when it sees player it will move to player and attack (hold gun anim + shoot a projectile)
<img width="671" height="392" alt="image" src="https://github.com/user-attachments/assets/270e62e9-ff8e-45c5-89b1-2d305d26e757" />
<img width="660" height="378" alt="image" src="https://github.com/user-attachments/assets/e35d6274-6812-47c5-897f-4619cfad2adf" />
<img width="753" height="609" alt="image" src="https://github.com/user-attachments/assets/3fc18410-96ea-484f-a15c-9e7850a4c573" />

# Assignment 4 notes
- spinning and rotating cube target (SpinningTarget class)
- Door class and PushButton class
- Because I set E to character dialogue interaction with npc, use Q for pushing the button instead
- Line trace functionality is tied to Q in BP_FirstPersonCharacter
<img width="366" height="495" alt="image" src="https://github.com/user-attachments/assets/277f7e3c-1d3e-4f97-aded-edeed9027b92" />
<img width="863" height="281" alt="image" src="https://github.com/user-attachments/assets/9ff18852-95d7-45dc-8643-4714b99cab5e" />
