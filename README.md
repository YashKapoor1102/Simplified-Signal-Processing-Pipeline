**Author:** Yash Kapoor  
**Email:** YashKapoor@cmail.carleton.ca

This repository contains a streamlined Signal Processing Pipeline, specifically crafted for the SYSC 4906 C Winter 2024 programming assignment. 
A detailed description of this project can be found below.
This project demonstrates a range of C++ skills from elementary to complex. 
It features the use of standard generic algorithms in the execution phase, employs concepts for verifying the order of Processing Units (PUs),
and ensures exception safety throughout all stages of execution.

Note: The Catch2 framework is required for running tests on the sspp_test.cpp file.

This project is about building a Simple Signal Processing Pipeline (SSPP).

Our pipeline has several Processing Units (PU) that change the signal one after the other.

In each step, the SSPP takes in a new signal and gives out a new result. 
However, in the first few steps, it doesn't give out any result.

Every PU must have two essential functions: one to take in new signals and another to send out the result  
from the last PU in line. The processing can happen during either of these functions or both, depending  
on how the PU is set up.

At each step, the SSPP uses the output functions of all PUs; the result from the last PU  
is what the SSPP considers its result for that step. Then, it calls all the input functions  
of the PUs, using the previous step's result as the new input, except for the first PU which  
gets its input directly from the SSPP's execute step function.

A call to the SSPP's execute step function starts each step. This function also takes  
new input.

The types of inputs and outputs for the PU functions can vary. However, the first PU's input  
type must be the same as the input for the SSPP's execute step function, and it should be easy  
to match the output type from the last step with the SSPP’s output.
