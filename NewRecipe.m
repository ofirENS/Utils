function NewRecipe(recipeName)
% create a new recipe file to be used by the rouseSimulationFrameWork 
% this file create a new recipefile with the fields described by:
% PreSimulationBatchActions
% PreRunActions
% PostRunActions
% PostSimulationBatchActions

% The file is saved a .rcp file type which can be edited by the Matlab
% editor 
% note, always start a function with <func> and end a function with </func>

f = fopen(sprintf('%s%s',recipeName,'.rcp'),'wt');
fprintf(f,'%s\n','<description> Describe the simulation here... </description>');
fprintf(f,'%s\n','<func> SetRecipeParams </func>');
fprintf(f,'%s\n','<func> PreSimulationBatchActions </func>');
fprintf(f,'%s\n','<func> PreRunActions </func>');
fprintf(f,'%s\n','<func> PreStepActions </func>');
fprintf(f,'%s\n','<func> PostStepActions </func>');
fprintf(f,'%s\n','<func> PostRunActions </func>');
fprintf(f,'%s\n','<func> PostSimulationBatchActions </func>');
fclose(f);

edit(sprintf('%s%s',recipeName,'.rcp'))
end