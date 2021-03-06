#!/usr/bin/lua

require("yarp")
require("rfsm")
--require("iol_funcs")

yarp.Network()

-------
shouldExit = false

-- initilization
ispeak_port = yarp.BufferedPortBottle()
speechRecog_port = yarp.Port()
iol_port = yarp.Port()
object_port = yarp.Port()
poeticon_port = yarp.Port()

-- defining objects and actions vocabularies
objects = {"Rake", "Stick", "Ham", "Tomato", "Bun-bottom", "Bun-top"}
actions = {"{point at}", "{what is this}"}

-- defining speech grammar for Menu
grammar = "Make a sandwich | Return to home position | Calibrate on table | Where is the #Object | Take the #Object | Grasp the #Object | See you soon  | I will teach you a new object | "
       .."Touch the #Object | Push the #Object | Let me show you how to reach the #Object with your right arm | Let me show you how to reach the #Object with your left arm | "
        .."Forget #Object | Forget all objects | Execute a plan | What is this | Explore the #Object "

-- defining speech grammar for Reward
grammar_reward = "Yes you are | No here it is | Skip it"

-- defining speech grammar for teaching a new object
grammar_track = "There you go | Skip it"

-- defining speech grammar for what function (ack)
grammar_whatAck = "Yes you are | No you are not | Skip it | Wrong this is a #Object"

-- defining speech grammar for what function (nack)
grammar_whatNack = "This is a #Object | Skip it"

-- defining speech grammar teach reach
grammar_teach = "Yes I do | No I do not | Finished"


-- load state machine model and initalize it
rf = yarp.ResourceFinder()
-- rf:setDefaultContext("poeticon/lua")
rf:setDefaultContext("iol/lua")
rf:configure(arg)
-- fsm_file = rf:findFile("poeticon_root_fsm.lua")
fsm_file = rf:findFile("iol_root_fsm.lua")
fsm_model = rfsm.load(fsm_file)
fsm = rfsm.init(fsm_model)
rfsm.run(fsm)

repeat
    rfsm.run(fsm)
    yarp.Time_delay(0.1)
until shouldExit ~= false

print("finishing")
-- Deinitialize yarp network
yarp.Network_fini()
