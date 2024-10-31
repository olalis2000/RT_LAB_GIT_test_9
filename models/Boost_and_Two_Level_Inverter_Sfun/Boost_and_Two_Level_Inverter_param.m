%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%       Simulation
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%   Set the simulation sample time
Ts = 20e-6;             % RT-LAB

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%       Breaker
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
Fault_tTrigger = 0.1;

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%       Boost
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%   Inputs
%*********************************
Boost_Vin = 100;
%
%   Switches
%*********************************
Boost_PWM_Freq = 10e3;
Boost_PWM_Duty = 0.7;


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%       2 Level Inverter
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%   Switches
%*********************************
Inv_PWM_CarrierFreq = 55000;
Inv_PWM_Out = 50;
Inv_PWM_Phases = [0 -2*pi/3 2*pi/3];
Inv_PWM_ModulationIndex = 0.8;
Inv_PWM_ShiftAngle = 0.2*2*pi/360;
%
%   BEMF
%*********************************
Inv_BEMF_Ampl = 25;