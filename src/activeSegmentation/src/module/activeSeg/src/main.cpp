/*
 * Copyright (C) 2011 Department of Robotics Brain and Cognitive Sciences - Istituto Italiano di Tecnologia
 * Author: Vadim Tikhanoff, Ajay Mishra
 * email:  vadim.tikhanoff@iit.it
 * Permission is granted to copy, distribute, and/or modify this program
 * under the terms of the GNU General Public License, version 2 or any
 * later version published by the Free Software Foundation.
 *
 * A copy of the license can be found at
 * http://www.robotcub.org/icub/license/gpl.txt
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
 * Public License for more details
 */

/**
\defgroup activeSeg Module that uses the activeSegmentation library
  @ingroup icub_activeSegmentation
 
\section intro_sec Description
 This module segments areas of interest based on a fixation point and sends segmentations via port. The algorithm consists of two steps: (1) a probabilistic boundary edge map is generated by merging the available visual information (e.g. intensity, color) and (2) the optimal contour is constructed by selecting the closed contour that minimizes a cost based on the continuity and overall shape of the candidate contours in the edge map.

 
 \section lib_sec Libraries
 - YARP.
 - ctrlLib.
 - activeSegmentation
 
 \section parameters_sec Parameters

 Command-line Parameters

 The following key-value pairs can be specified as command-line parameters by prefixing \c -- to the key
 (e.g. \c --from file.ini. The value part can be changed to suit your needs; the default values are shown below. *
 - \c from \c activeSeg.ini \n 
 specifies the configuration file

 - \c context \c activeSeg/conf \n
  specifies the sub-path from \c $ICUB_ROOT/icub/app to the configuration file

 - \c name \c activeSeg \n   
   specifies the name of the module (used to form the stem of module port names)  

 <b>Configuration File Parameters </b>

 The following key-value pairs can be specified as parameters in the configuration file 
 (they can also be specified as command-line parameters if you so wish). 
 The value part can be changed to suit your needs; the default values are shown below. 
   
 - \c inputNameImage \c /activeSeg/image:i \n    
   specifies the input port name (this string will be prefixed by \c /activeSeg 
   or whatever else is specifed by the name parameter
   
 - \c fixationNamePort \c /activeSeg/fixPoint:i \n    
   specifies the input port name (this string will be prefixed by \c /activeSeg 
   or whatever else is specifed by the name parameter

 - \c outputNameSeg \c /activeSeg/image:o \n  
   specifies the output port name (this string will be prefixed by \c /activeSeg 
 or whatever else is specifed by the name parameter

- \c outputNameSegCrop \c /activeSeg/imageCrop:o \n
specifies the output port name (this string will be prefixed by \c /activeSeg
or whatever else is specifed by the name parameter

The commands required for the segmetations are sent to /activeSeg/fixPoint:i

this send the command to segment what is located at x and y, with a crop size (default is 50)
"fix x y crop_width crop_height"

to resend the previous template just send:
"again"

 \section portsa_sec Ports Accessed

 - None

\section portsc_sec Ports Created

 <b>Input ports</b>

- \c /activeSeg \n
    This port is used to change the parameters of the module at run time or stop the module. \n
    The following commands are available


    Note that the name of this port mirrors whatever is provided by the \c --name parameter value
    The port is attached to the terminal so that you can type in commands and receive replies.

- \c /activeSeg/image:i \n
- \c /activeSeg/fixPoint:i \n

 <b>Output ports</b>

 - \c /activeSeg \n
    see above

 - \c /activeSeg/image:o \n
 - \c /activeSeg/imageCrop:o

 <b>Port types </b>

 \section in_files_sec Input Data Files

 None

 \section out_data_sec Output Data Files

 None
 
 \section tested_os_sec Tested OS
 
 Linux: Ubuntu 9.10, Debian Stable, windows and MacOS
 
 \section example_sec Example Instantiation of the Module
 
 <tt>activeSeg --name activeSeg --context activeSeg --from activeSeg.ini </tt>
 
 \author 
 
 Vadim Tikhanoff
 
 Copyright (C) 2009 RobotCub Consortium

 CopyPolicy: Released under the terms of the GNU GPL v2.0.

 */


#include "iCub/objSegMod.h" 

using namespace yarp::os;

int main(int argc, char * argv[])
{
    /* initialize yarp network */ 
    Network yarp;

    /* create the module */
    objSegMod module; 

    /* prepare and configure the resource finder */
    ResourceFinder rf;
    rf.setVerbose( true );
    rf.setDefaultContext( "activeSegmentation" );
    rf.setDefaultConfigFile( "activeSegmentation.ini" );
    rf.setDefault("name","activeSeg");
    rf.configure( argc, argv );
 
    /* run the module: runModule() calls configure first and, if successful, it then runs */
    module.runModule(rf);

    return 0;
}
