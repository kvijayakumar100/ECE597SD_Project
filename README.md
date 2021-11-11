# ECE597SD_Project

 Motivation:
    Applications often rely on timing services provided by the OS to perform their intended task. Oftentimes, applications assume the OS to be trustworthy and secure. However, an adversary can manipulate the system's time services, defying the expected performance. Manipulating system time can reulting in errors in scheduling and causality.
    
Goal:
  To use device microarchitecture such as processor access to cache/memory to build a secure timing service
  
Deliverables:
  - C application that uses assembly instructions to measure time
  - Statistics on performance of the microarchitecture based timing service under different CPU loads
  - A threat model of timing application analyzing potential threats from OS
  - Propose and evaluate defense against CPU frequency manipulation attack by the OS
  - Propose and evaluate defense against OS attempts to evict memory pages used by the time keeping application

Hardware Requirements:
  - BeagleBone Black
Software Requirements:
  - C application that uses assembly (ARM)  

References:
 - Tabellion: secure legal contracts on mobile devices
 - Securing Time in Untrusted Operating Systems with TimeSeal

Link to System Blocks: https://drive.google.com/file/d/1ixDvhlOIOK-N0A0fZdRHQio0wuEuPjwe/view?usp=sharing

Team Member Responsibilities (All will contribute some to each part):
 - Krishna Vijayakumar: Build the threat model for timing application that analyze potential attacks and propose and evaluate defense against frequency manipulation attacks. 
 - Matt Buiser: Develop C application using assembly to build the timing service.
 - Gavin Baril: Evaluate the performance of the timer under different CPU loads and propose and evaluate defense against OS attempts to evict memory pages.

Project Timeline:
  By check-in 2, we will have developed a secure timer. By the end of the semester, we will have tested the performance of the timer under different CPU loads and come up with a threat model for OS attacks. Also, we will try to propose and evaluate defenses against two of the potential threats.
 
 

  
  
