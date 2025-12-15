# Assignment 3 notes
- For dialogue, approach the enemy and press E to interact (there are a few lines of dialogue haha)
- Unfortunately due to bugs from my original project, I had forked the lecture repository, and couldn't find the time to reimplement a lot of functionality.  Imagine if you could do the ammo/health stuff from my old repo...though I made some effort to reimplement some important components :)
- There are death states that trigger win/death screens (W_Death, W_Win) with restart buttons that reload the level.
- The enemy will follow the spline path/loiter to a random position if decorator inverse (cannot see player), but when it sees player it will move to player and attack (hold gun anim + shoot a projectile)
