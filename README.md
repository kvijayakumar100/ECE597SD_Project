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

Link to Initial Proposed System Blocks: https://drive.google.com/file/d/1ixDvhlOIOK-N0A0fZdRHQio0wuEuPjwe/view?usp=sharing
Link to Solution Blocks: https://drive.google.com/file/d/1yQFXATZgPsjWHk1Y3_q0TogPomcdA53b/view?usp=sharing

Team Member Responsibilities (All will contribute some to each part):
 - Krishna Vijayakumar: Build the threat model for timing application that analyze potential attacks evaluate system under different CPU loads and varying clock granularity. 
 - Matt Buiser: Develop C application using assembly to build the timing service and find CPU and RAM percentage required for its usage when running in the background.
 - Gavin Baril: Write a processor intensive function to evaluate the timing service under different CPU loads.

Project Timeline:
  By check-in 2, we will have developed a secure timer. By the end of the semester, we will have tested the performance of the timer under different CPU loads and come up with a threat model for OS attacks. Also, we will try to propose and evaluate defenses against OS attempts to evict memory pages and CPU frequency manipulation attacks.
 
 
EvalutateTimer.c is the main code we use to develop and evaluate the system.
sampleApp.c runs counterEnable.c as a library to provide the timing service to an application.
  
  
