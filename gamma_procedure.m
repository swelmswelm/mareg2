function [u, angles] = gamma_procedure(u_decomposed)
% param u_decomposed = [u1_x, u1_y, u2_x, u2_y, u3]
% this function maps u_decomposed to its thruster input and angles

% TODO: limit output u to [0,1]?

u1_x = u_decomposed(1);
u1_y = u_decomposed(2);
u2_x = u_decomposed(3);
u2_y = u_decomposed(4);
u(3) = u_decomposed(5);

angles(1) = atan2(u1_y, u1_x);
angles(2) = atan2(u2_y, u2_x);

u(1) = norm([u1_x, u1_y]);
u(2) = norm([u2_x, u2_y]);

end

