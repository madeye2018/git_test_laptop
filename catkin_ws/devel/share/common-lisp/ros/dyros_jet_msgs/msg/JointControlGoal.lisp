; Auto-generated. Do not edit!


(cl:in-package dyros_jet_msgs-msg)


;//! \htmlinclude JointControlGoal.msg.html

(cl:defclass <JointControlGoal> (roslisp-msg-protocol:ros-message)
  ((command
    :reader command
    :initarg :command
    :type dyros_jet_msgs-msg:JointCommand
    :initform (cl:make-instance 'dyros_jet_msgs-msg:JointCommand)))
)

(cl:defclass JointControlGoal (<JointControlGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <JointControlGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'JointControlGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dyros_jet_msgs-msg:<JointControlGoal> is deprecated: use dyros_jet_msgs-msg:JointControlGoal instead.")))

(cl:ensure-generic-function 'command-val :lambda-list '(m))
(cl:defmethod command-val ((m <JointControlGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dyros_jet_msgs-msg:command-val is deprecated.  Use dyros_jet_msgs-msg:command instead.")
  (command m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <JointControlGoal>) ostream)
  "Serializes a message object of type '<JointControlGoal>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'command) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <JointControlGoal>) istream)
  "Deserializes a message object of type '<JointControlGoal>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'command) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<JointControlGoal>)))
  "Returns string type for a message object of type '<JointControlGoal>"
  "dyros_jet_msgs/JointControlGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'JointControlGoal)))
  "Returns string type for a message object of type 'JointControlGoal"
  "dyros_jet_msgs/JointControlGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<JointControlGoal>)))
  "Returns md5sum for a message object of type '<JointControlGoal>"
  "874fb898b8ead1ed8aabbca492edc2e1")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'JointControlGoal)))
  "Returns md5sum for a message object of type 'JointControlGoal"
  "874fb898b8ead1ed8aabbca492edc2e1")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<JointControlGoal>)))
  "Returns full string definition for message of type '<JointControlGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%dyros_jet_msgs/JointCommand command~%~%================================================================================~%MSG: dyros_jet_msgs/JointCommand~%std_msgs/Header header~%~%string[] name~%float64[] position~%float64[] duration~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'JointControlGoal)))
  "Returns full string definition for message of type 'JointControlGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%dyros_jet_msgs/JointCommand command~%~%================================================================================~%MSG: dyros_jet_msgs/JointCommand~%std_msgs/Header header~%~%string[] name~%float64[] position~%float64[] duration~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <JointControlGoal>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'command))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <JointControlGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'JointControlGoal
    (cl:cons ':command (command msg))
))
