#geometricGrounding.thrift

service geometricGrounding_IDLserver
{
    /**
    * Quit the module.
    * Abruptly terminates the module and the rpc port
    **/
    bool quit();

    /**
    * Orders geometricGrounding to ground a new set of rules.
    * goalCompiler will reply upon completion or failure.
    * @returns a string:
    * "done" upon finishing the grounding;
    * "failed_objects" if it fails to load objects;
    * "failed_prerules" if it fails to read the pre_rules.dat file;
    * "failed_presymbols" if it fails to read the pre_symbols.dat file;
    * "failed_affordances" if it fails to communicate with the affordanceCommunication module;
    * "failed_writing" if it fails to write the rules.dat and the symbols.dat files.
    **/
    string ground();
}
