clear
close all

%% Get problem specification
mdp = Puddleworld;
episodes_eval = 500;
steps_eval = 50;
steps_learn = 50;

% Normalization in [-1,1]
range = [mdp.stateLB, mdp.stateUB];
m = mean(range,2);
range_centered = bsxfun(@minus,range,m);
preprocessS = @(s)bsxfun(@times, bsxfun(@minus,s,m), 1./range_centered(:,2))';

% Normalization in [-1,0]
preprocessR = @(r)(r(1,:)/41);

dimL1 = 30;
