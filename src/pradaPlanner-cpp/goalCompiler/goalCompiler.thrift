#goalCompiler.thrift

service goalCompiler_IDLserver
{
    /**
    * Quit the module.
    * Abruptly terminates the module and the rpc port
    **/
    bool quit();

    /**
    * Orders goalCompiler to wait for a new instruction from Praxicon.
    * goalCompiler will keep reading from the port until ordered to stop.
    * @returns a string:
    * "done" upon receiving the instructions;
    * "failed_objects" if it fails to load objects;
    * "failed_Praxicon" if it times-out (5 minutes) or the connection to Praxicon is terminated;
    * "unknown" if there is an object in the instructions not present in the planner object list;
    * "empty_bottle" if it reads an empty bottle from the Praxicon.
    **/
    string waitPraxicon();

    /**
    * Instructs the goalCompiler to compile the goals.
    * It will execute all necessary functions (compile, translate, checkConsistency, etc).
    * @returns a string:
    * "done" upon completing the goal compiling;
    * "failed_objects" if it fails to load objects;
    * "failed_rules" if it fails to open rules.dat file;
    * "failed_instructions" if it fails to understand instructions received previously (or if they are empty);
    * "failed_compiling" if it fails to create a complete sub-goal list;
    * "failed_translation" if it fails to translate labels to object numerical IDs;
    * "failed_consistency" if the sub-goals don't pass the consistency test;
    * "failed_pruning" if it fails pruning unnecessary sub-goals;
    * "failed_writing" if it fails to write the subgoals.dat file;
    **/
    string compileGoals();
}
