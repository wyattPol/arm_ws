// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_action:action/MyRobot.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_ACTION__ACTION__DETAIL__MY_ROBOT__BUILDER_HPP_
#define MY_ROBOT_ACTION__ACTION__DETAIL__MY_ROBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_action/action/detail/my_robot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_action
{

namespace action
{

namespace builder
{

class Init_MyRobot_Goal_precision
{
public:
  explicit Init_MyRobot_Goal_precision(::my_robot_action::action::MyRobot_Goal & msg)
  : msg_(msg)
  {}
  ::my_robot_action::action::MyRobot_Goal precision(::my_robot_action::action::MyRobot_Goal::_precision_type arg)
  {
    msg_.precision = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_action::action::MyRobot_Goal msg_;
};

class Init_MyRobot_Goal_timeout
{
public:
  explicit Init_MyRobot_Goal_timeout(::my_robot_action::action::MyRobot_Goal & msg)
  : msg_(msg)
  {}
  Init_MyRobot_Goal_precision timeout(::my_robot_action::action::MyRobot_Goal::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return Init_MyRobot_Goal_precision(msg_);
  }

private:
  ::my_robot_action::action::MyRobot_Goal msg_;
};

class Init_MyRobot_Goal_goal_distance
{
public:
  Init_MyRobot_Goal_goal_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyRobot_Goal_timeout goal_distance(::my_robot_action::action::MyRobot_Goal::_goal_distance_type arg)
  {
    msg_.goal_distance = std::move(arg);
    return Init_MyRobot_Goal_timeout(msg_);
  }

private:
  ::my_robot_action::action::MyRobot_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_action::action::MyRobot_Goal>()
{
  return my_robot_action::action::builder::Init_MyRobot_Goal_goal_distance();
}

}  // namespace my_robot_action


namespace my_robot_action
{

namespace action
{

namespace builder
{

class Init_MyRobot_Result_total_time
{
public:
  explicit Init_MyRobot_Result_total_time(::my_robot_action::action::MyRobot_Result & msg)
  : msg_(msg)
  {}
  ::my_robot_action::action::MyRobot_Result total_time(::my_robot_action::action::MyRobot_Result::_total_time_type arg)
  {
    msg_.total_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_action::action::MyRobot_Result msg_;
};

class Init_MyRobot_Result_final_precision
{
public:
  explicit Init_MyRobot_Result_final_precision(::my_robot_action::action::MyRobot_Result & msg)
  : msg_(msg)
  {}
  Init_MyRobot_Result_total_time final_precision(::my_robot_action::action::MyRobot_Result::_final_precision_type arg)
  {
    msg_.final_precision = std::move(arg);
    return Init_MyRobot_Result_total_time(msg_);
  }

private:
  ::my_robot_action::action::MyRobot_Result msg_;
};

class Init_MyRobot_Result_succeeded
{
public:
  Init_MyRobot_Result_succeeded()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyRobot_Result_final_precision succeeded(::my_robot_action::action::MyRobot_Result::_succeeded_type arg)
  {
    msg_.succeeded = std::move(arg);
    return Init_MyRobot_Result_final_precision(msg_);
  }

private:
  ::my_robot_action::action::MyRobot_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_action::action::MyRobot_Result>()
{
  return my_robot_action::action::builder::Init_MyRobot_Result_succeeded();
}

}  // namespace my_robot_action


namespace my_robot_action
{

namespace action
{

namespace builder
{

class Init_MyRobot_Feedback_estimated_time
{
public:
  explicit Init_MyRobot_Feedback_estimated_time(::my_robot_action::action::MyRobot_Feedback & msg)
  : msg_(msg)
  {}
  ::my_robot_action::action::MyRobot_Feedback estimated_time(::my_robot_action::action::MyRobot_Feedback::_estimated_time_type arg)
  {
    msg_.estimated_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_action::action::MyRobot_Feedback msg_;
};

class Init_MyRobot_Feedback_current_distance
{
public:
  Init_MyRobot_Feedback_current_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyRobot_Feedback_estimated_time current_distance(::my_robot_action::action::MyRobot_Feedback::_current_distance_type arg)
  {
    msg_.current_distance = std::move(arg);
    return Init_MyRobot_Feedback_estimated_time(msg_);
  }

private:
  ::my_robot_action::action::MyRobot_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_action::action::MyRobot_Feedback>()
{
  return my_robot_action::action::builder::Init_MyRobot_Feedback_current_distance();
}

}  // namespace my_robot_action


namespace my_robot_action
{

namespace action
{

namespace builder
{

class Init_MyRobot_SendGoal_Request_goal
{
public:
  explicit Init_MyRobot_SendGoal_Request_goal(::my_robot_action::action::MyRobot_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::my_robot_action::action::MyRobot_SendGoal_Request goal(::my_robot_action::action::MyRobot_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_action::action::MyRobot_SendGoal_Request msg_;
};

class Init_MyRobot_SendGoal_Request_goal_id
{
public:
  Init_MyRobot_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyRobot_SendGoal_Request_goal goal_id(::my_robot_action::action::MyRobot_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MyRobot_SendGoal_Request_goal(msg_);
  }

private:
  ::my_robot_action::action::MyRobot_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_action::action::MyRobot_SendGoal_Request>()
{
  return my_robot_action::action::builder::Init_MyRobot_SendGoal_Request_goal_id();
}

}  // namespace my_robot_action


namespace my_robot_action
{

namespace action
{

namespace builder
{

class Init_MyRobot_SendGoal_Response_stamp
{
public:
  explicit Init_MyRobot_SendGoal_Response_stamp(::my_robot_action::action::MyRobot_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::my_robot_action::action::MyRobot_SendGoal_Response stamp(::my_robot_action::action::MyRobot_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_action::action::MyRobot_SendGoal_Response msg_;
};

class Init_MyRobot_SendGoal_Response_accepted
{
public:
  Init_MyRobot_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyRobot_SendGoal_Response_stamp accepted(::my_robot_action::action::MyRobot_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MyRobot_SendGoal_Response_stamp(msg_);
  }

private:
  ::my_robot_action::action::MyRobot_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_action::action::MyRobot_SendGoal_Response>()
{
  return my_robot_action::action::builder::Init_MyRobot_SendGoal_Response_accepted();
}

}  // namespace my_robot_action


namespace my_robot_action
{

namespace action
{

namespace builder
{

class Init_MyRobot_GetResult_Request_goal_id
{
public:
  Init_MyRobot_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_action::action::MyRobot_GetResult_Request goal_id(::my_robot_action::action::MyRobot_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_action::action::MyRobot_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_action::action::MyRobot_GetResult_Request>()
{
  return my_robot_action::action::builder::Init_MyRobot_GetResult_Request_goal_id();
}

}  // namespace my_robot_action


namespace my_robot_action
{

namespace action
{

namespace builder
{

class Init_MyRobot_GetResult_Response_result
{
public:
  explicit Init_MyRobot_GetResult_Response_result(::my_robot_action::action::MyRobot_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::my_robot_action::action::MyRobot_GetResult_Response result(::my_robot_action::action::MyRobot_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_action::action::MyRobot_GetResult_Response msg_;
};

class Init_MyRobot_GetResult_Response_status
{
public:
  Init_MyRobot_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyRobot_GetResult_Response_result status(::my_robot_action::action::MyRobot_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MyRobot_GetResult_Response_result(msg_);
  }

private:
  ::my_robot_action::action::MyRobot_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_action::action::MyRobot_GetResult_Response>()
{
  return my_robot_action::action::builder::Init_MyRobot_GetResult_Response_status();
}

}  // namespace my_robot_action


namespace my_robot_action
{

namespace action
{

namespace builder
{

class Init_MyRobot_FeedbackMessage_feedback
{
public:
  explicit Init_MyRobot_FeedbackMessage_feedback(::my_robot_action::action::MyRobot_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::my_robot_action::action::MyRobot_FeedbackMessage feedback(::my_robot_action::action::MyRobot_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_action::action::MyRobot_FeedbackMessage msg_;
};

class Init_MyRobot_FeedbackMessage_goal_id
{
public:
  Init_MyRobot_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyRobot_FeedbackMessage_feedback goal_id(::my_robot_action::action::MyRobot_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MyRobot_FeedbackMessage_feedback(msg_);
  }

private:
  ::my_robot_action::action::MyRobot_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_action::action::MyRobot_FeedbackMessage>()
{
  return my_robot_action::action::builder::Init_MyRobot_FeedbackMessage_goal_id();
}

}  // namespace my_robot_action

#endif  // MY_ROBOT_ACTION__ACTION__DETAIL__MY_ROBOT__BUILDER_HPP_
