# ECE597SD_Project

 Motivation:
    Applications often rely on timing services provided by the OS to perform their intended task. Oftentimes, applications assume the OS to be trustworthy and secure. However, an adversary can manipulate the system's time services, defying the expected performance. A malicious OS can attack an application using CPU frequency manipulation and evicting memory pages used by the time keeping application, reulting in errors in scheduling and causality.
    
Goal:
  To use device microarchitecture such as processor access to cache/memory to build a secure timing service
  
Deliverables:
  C application that uses assembly instructions to measure time
  Statistics on performance of the microarchitecture based timing service under different CPU loads
  A threat model of timing application analyzing potential threats from OS
  Propose and evaluate defense against CPU frequency manipulation attack by the OS
  Propose and evaluate defense against OS attempts to evict memory pages used by the time keeping application

  
  
