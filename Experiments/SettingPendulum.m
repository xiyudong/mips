clear all
close all

%% ===================================================================== %%
%  ======================== LOW LEVEL SETTINGS =========================  %
mdp = Pendulum;
robj = 1;

% bfs = @(varargin) basis_pixels(mdp,varargin{:});
bfs = @(varargin) basis_poly(1, mdp.dstate, 0, varargin{:});

A0 = zeros(mdp.daction,bfs()+1);
Sigma0 = 56*eye(mdp.daction);
policy = GaussianLinearDiag(bfs, mdp.daction, A0, Sigma0);
policy = GaussianLinearChol(bfs, mdp.daction, A0, Sigma0);


%% ===================================================================== %%
%  ======================= HIGH LEVEL SETTINGS =========================  %
makeDet = 1; % 1 to learn deterministic low level policies
n_params = policy.dparams*~makeDet + numel(A0)*makeDet;
mu0 = policy.theta(1:n_params);
Sigma0high = 100 * eye(n_params);
Sigma0high = Sigma0high + diag(abs(mu0)).^2;
Sigma0high = nearestSPD(Sigma0high);
policy_high = GaussianConstantChol(n_params, mu0, Sigma0high);
% policy_high = GaussianConstantDiag(n_params, mu0, Sigma0high);


%% ===================================================================== %%
%  ======================== LEARNING SETTINGS ==========================  %
episodes_eval = 1;
steps_eval = 1500;
episodes_learn = 50;
steps_learn = 500;
