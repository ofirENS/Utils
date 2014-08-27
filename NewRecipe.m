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
fprintf(f,'%s\n','%Insert parameters as obj.params.[paramsName]=[paramsValue]');

fprintf(f,'%s\n','<func> PreSimulationBatchActions </func>');
fprintf(f,'%s\n','%Actions performed before each simulation batch');

fprintf(f,'%s\n','<func> PreRunActions </func>');
fprintf(f,'%s\n','%Actions performed before each simulation run.');
fprintf(f,'%s\n','Note that Simplerouse class is initialized before each simulation');

fprintf(f,'%s\n','<func> PreStepActions </func>');
fprintf(f,'%s\n','%Actions performed before each step of the Rouse chain.');

fprintf(f,'%s\n','<func> PostStepActions </func>');
fprintf(f,'%s\n','%Actions performed before each step of the Rouse chain.');

fprintf(f,'%s\n','<func> PostRunActions </func>');
fprintf(f,'%s\n','%Actions performed sfter each simulation run.');

fprintf(f,'%s\n','<func> PostSimulationBatchActions </func>');
fprintf(f,'%s\n','%Actions performed before each simulation batch.');

fclose(f);

edit(sprintf('%s%s',recipeName,'.rcp'))
end