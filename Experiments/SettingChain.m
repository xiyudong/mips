clear all
close all

%% ===================================================================== %%
%  ======================== LOW LEVEL SETTINGS =========================  %
mdp = Chainwalk;
robj = 1;
dreward = mdp.dreward;
gamma = mdp.gamma;
nactions = size(mdp.allactions,2);

bfs = @(varargin)basis_tiles(mdp.stateUB, [mdp.stateLB, mdp.stateUB], 0, varargin{:});
policy = Gibbs(bfs, zeros((bfs()+1)*(nactions-1),1), mdp.actionLB:mdp.actionUB);

%% ===================================================================== %%
%  ======================== LEARNING SETTINGS ==========================  %
episodes_eval = 5000;
steps_eval = 100;
episodes_learn = 250;
steps_learn = 240;
