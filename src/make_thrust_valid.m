function [u_cmd, a_cmd] = make_thrust_valid(u, a)
% Flips angle and thrust if thrust is negative

if u(1) < 0
    % flip thrust
    u_cmd(1) = - u(1);
    
    % flip angle
    if a(1) < 0
        a_cmd(1) = a(1) + pi;
    else
        a_cmd(1) = a(1) - pi;
    end
else
    a_cmd(1) = a(1);
    u_cmd(1) = u(1);
end
    
if u(2) < 0
    % flip thrust
    u_cmd(2) = - u(2);
    
    % flip angle
    if a(2) < 0
        a_cmd(2) = a(2) + pi;
    else
        a_cmd(2) = a(2) - pi;
    end
else
    a_cmd(2) = a(2);
    u_cmd(2) = u(2);
end

u_cmd(3) = u(3);
    
end

