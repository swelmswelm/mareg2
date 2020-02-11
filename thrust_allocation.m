t_ref = [1 1 0.5]';

% parameters
lx_1 = 0.3875;
lx_2 = -0.4574;
ly_1 = 0.055;
ly_2 = -0.055;

K1 = 1.03;
K2 = K1;
K3 = 2.629;

% check matrixes
K = diag([K1, K1, K2, K2, K3]);
B = [
    1 0 1 0 0;
    0 1 0 1 1;
    ly_1 lx_2 ly_2 lx_2 lx_1;
];

u_star = pinv(B*K)*t_ref;

[u_cmd, a_cmd] = gamma_procedure(u_star);

u_cmd
a_cmd
