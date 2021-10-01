# ECE597SD_Project

 Motivation:
    Applications often rely on timing services provided by the OS to perform their intended task. Oftentimes, applications assume the OS to be trustworthy and secure. However, an adversary can manipulate the system's time services, defying the expected performance. A malicious OS can attack an application using CPU frequency manipulation and evicting memory pages used by the time keeping application, reulting in errors in scheduling and causality.
    
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
 - Krishna Vijayakumar: Build the threat model for timing application that analyze potential attacks and propose defense against frequency manipulation attacks
 - Matt Buiser: Develop C application using assembly to build the timing service and evaluate the performance with different CPU loads
 - Gavin Baril: Propose and evaluate defense against OS attempts to evict memory pages

Project Timeline:
  By check-in 1, we will try to develop the timing service using the device microarchitecture and test the resolution/uncertainty under different loads. By check-in 2, we will develop a threat model and propose defenses against the attack vectors. By the end of the semester, we will implement and evaluate the defense against the potential attacks and finish the project
 
 

  
  
