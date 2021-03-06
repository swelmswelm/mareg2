function [u_cmd, a_cmd] = thrust_allocation_2(t_ref, angles)
% Calculates thrust and vsp angles for set angles

% Parameters
lx_1 = 0.3875;
lx_2 = -0.4574;
ly_1 = 0.055;
ly_2 = -0.055;

K1 = 1.03;
K2 = K1;
K3 = 2.629;

a1 = angles(1);
a2 = angles(2);

B = [cos(a1) cos(a2) 0; 
    sin(a1) sin(a2) 1; 
    lx_2*sin(a1)-ly_1*cos(a2) lx_2*sin(a2)-ly_2*cos(a2) lx_1];
K = diag([K1, K2, K3]);

% Calculate u with pseudo inverse method
u_star = pinv(B*K) * t_ref;

% Make sure no thrust cmd is negative
[u_cmd, a_cmd] = make_thrust_valid(u_star, angles);

end

