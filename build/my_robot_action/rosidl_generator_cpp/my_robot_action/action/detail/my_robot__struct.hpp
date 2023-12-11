// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_robot_action:action/MyRobot.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_ACTION__ACTION__DETAIL__MY_ROBOT__STRUCT_HPP_
#define MY_ROBOT_ACTION__ACTION__DETAIL__MY_ROBOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_robot_action__action__MyRobot_Goal __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_action__action__MyRobot_Goal __declspec(deprecated)
#endif

namespace my_robot_action
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MyRobot_Goal_
{
  using Type = MyRobot_Goal_<ContainerAllocator>;

  explicit MyRobot_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_distance = 0.0f;
      this->timeout = 0.0f;
      this->precision = 0.0f;
    }
  }

  explicit MyRobot_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_distance = 0.0f;
      this->timeout = 0.0f;
      this->precision = 0.0f;
    }
  }

  // field types and members
  using _goal_distance_type =
    float;
  _goal_distance_type goal_distance;
  using _timeout_type =
    float;
  _timeout_type timeout;
  using _precision_type =
    float;
  _precision_type precision;

  // setters for named parameter idiom
  Type & set__goal_distance(
    const float & _arg)
  {
    this->goal_distance = _arg;
    return *this;
  }
  Type & set__timeout(
    const float & _arg)
  {
    this->timeout = _arg;
    return *this;
  }
  Type & set__precision(
    const float & _arg)
  {
    this->precision = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_action::action::MyRobot_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_action::action::MyRobot_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_action::action::MyRobot_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_action::action::MyRobot_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_action::action::MyRobot_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_action::action::MyRobot_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_action::action::MyRobot_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_action::action::MyRobot_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_action::action::MyRobot_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_action::action::MyRobot_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_action__action__MyRobot_Goal
    std::shared_ptr<my_robot_action::action::MyRobot_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_action__action__MyRobot_Goal
    std::shared_ptr<my_robot_action::action::MyRobot_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyRobot_Goal_ & other) const
  {
    if (this->goal_distance != other.goal_distance) {
      return false;
    }
    if (this->timeout != other.timeout) {
      return false;
    }
    if (this->precision != other.precision) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyRobot_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyRobot_Goal_

// alias to use template instance with default allocator
using MyRobot_Goal =
  my_robot_action::action::MyRobot_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_robot_action


#ifndef _WIN32
# define DEPRECATED__my_robot_action__action__MyRobot_Result __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_action__action__MyRobot_Result __declspec(deprecated)
#endif

namespace my_robot_action
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MyRobot_Result_
{
  using Type = MyRobot_Result_<ContainerAllocator>;

  explicit MyRobot_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->succeeded = false;
      this->final_precision = 0.0f;
      this->total_time = 0.0f;
    }
  }

  explicit MyRobot_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->succeeded = false;
      this->final_precision = 0.0f;
      this->total_time = 0.0f;
    }
  }

  // field types and members
  using _succeeded_type =
    bool;
  _succeeded_type succeeded;
  using _final_precision_type =
    float;
  _final_precision_type final_precision;
  using _total_time_type =
    float;
  _total_time_type total_time;

  // setters for named parameter idiom
  Type & set__succeeded(
    const bool & _arg)
  {
    this->succeeded = _arg;
    return *this;
  }
  Type & set__final_precision(
    const float & _arg)
  {
    this->final_precision = _arg;
    return *this;
  }
  Type & set__total_time(
    const float & _arg)
  {
    this->total_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_action::action::MyRobot_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_action::action::MyRobot_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_action::action::MyRobot_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_action::action::MyRobot_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_action::action::MyRobot_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_action::action::MyRobot_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_action::action::MyRobot_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_action::action::MyRobot_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_action::action::MyRobot_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_action::action::MyRobot_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_action__action__MyRobot_Result
    std::shared_ptr<my_robot_action::action::MyRobot_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_action__action__MyRobot_Result
    std::shared_ptr<my_robot_action::action::MyRobot_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyRobot_Result_ & other) const
  {
    if (this->succeeded != other.succeeded) {
      return false;
    }
    if (this->final_precision != other.final_precision) {
      return false;
    }
    if (this->total_time != other.total_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyRobot_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyRobot_Result_

// alias to use template instance with default allocator
using MyRobot_Result =
  my_robot_action::action::MyRobot_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_robot_action


#ifndef _WIN32
# define DEPRECATED__my_robot_action__action__MyRobot_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_action__action__MyRobot_Feedback __declspec(deprecated)
#endif

namespace my_robot_action
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MyRobot_Feedback_
{
  using Type = MyRobot_Feedback_<ContainerAllocator>;

  explicit MyRobot_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_distance = 0.0f;
      this->estimated_time = 0.0f;
    }
  }

  explicit MyRobot_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_distance = 0.0f;
      this->estimated_time = 0.0f;
    }
  }

  // field types and members
  using _current_distance_type =
    float;
  _current_distance_type current_distance;
  using _estimated_time_type =
    float;
  _estimated_time_type estimated_time;

  // setters for named parameter idiom
  Type & set__current_distance(
    const float & _arg)
  {
    this->current_distance = _arg;
    return *this;
  }
  Type & set__estimated_time(
    const float & _arg)
  {
    this->estimated_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_action::action::MyRobot_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_action::action::MyRobot_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_action::action::MyRobot_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_action::action::MyRobot_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_action::action::MyRobot_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_action::action::MyRobot_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_action::action::MyRobot_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_action::action::MyRobot_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_action::action::MyRobot_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_action::action::MyRobot_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_action__action__MyRobot_Feedback
    std::shared_ptr<my_robot_action::action::MyRobot_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_action__action__MyRobot_Feedback
    std::shared_ptr<my_robot_action::action::MyRobot_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyRobot_Feedback_ & other) const
  {
    if (this->current_distance != other.current_distance) {
      return false;
    }
    if (this->estimated_time != other.estimated_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyRobot_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyRobot_Feedback_

// alias to use template instance with default allocator
using MyRobot_Feedback =
  my_robot_action::action::MyRobot_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_robot_action


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "my_robot_action/action/detail/my_robot__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_robot_action__action__MyRobot_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_action__action__MyRobot_SendGoal_Request __declspec(deprecated)
#endif

namespace my_robot_action
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MyRobot_SendGoal_Request_
{
  using Type = MyRobot_SendGoal_Request_<ContainerAllocator>;

  explicit MyRobot_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit MyRobot_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    my_robot_action::action::MyRobot_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const my_robot_action::action::MyRobot_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_action::action::MyRobot_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_action::action::MyRobot_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_action::action::MyRobot_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_action::action::MyRobot_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_action::action::MyRobot_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_action::action::MyRobot_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_action::action::MyRobot_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_action::action::MyRobot_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_action::action::MyRobot_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_action::action::MyRobot_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_action__action__MyRobot_SendGoal_Request
    std::shared_ptr<my_robot_action::action::MyRobot_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_action__action__MyRobot_SendGoal_Request
    std::shared_ptr<my_robot_action::action::MyRobot_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyRobot_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyRobot_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyRobot_SendGoal_Request_

// alias to use template instance with default allocator
using MyRobot_SendGoal_Request =
  my_robot_action::action::MyRobot_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_robot_action


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_robot_action__action__MyRobot_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_action__action__MyRobot_SendGoal_Response __declspec(deprecated)
#endif

namespace my_robot_action
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MyRobot_SendGoal_Response_
{
  using Type = MyRobot_SendGoal_Response_<ContainerAllocator>;

  explicit MyRobot_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit MyRobot_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_action::action::MyRobot_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_action::action::MyRobot_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_action::action::MyRobot_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_action::action::MyRobot_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_action::action::MyRobot_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_action::action::MyRobot_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_action::action::MyRobot_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_action::action::MyRobot_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_action::action::MyRobot_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_action::action::MyRobot_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_action__action__MyRobot_SendGoal_Response
    std::shared_ptr<my_robot_action::action::MyRobot_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_action__action__MyRobot_SendGoal_Response
    std::shared_ptr<my_robot_action::action::MyRobot_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyRobot_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyRobot_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyRobot_SendGoal_Response_

// alias to use template instance with default allocator
using MyRobot_SendGoal_Response =
  my_robot_action::action::MyRobot_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_robot_action

namespace my_robot_action
{

namespace action
{

struct MyRobot_SendGoal
{
  using Request = my_robot_action::action::MyRobot_SendGoal_Request;
  using Response = my_robot_action::action::MyRobot_SendGoal_Response;
};

}  // namespace action

}  // namespace my_robot_action


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_robot_action__action__MyRobot_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_action__action__MyRobot_GetResult_Request __declspec(deprecated)
#endif

namespace my_robot_action
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MyRobot_GetResult_Request_
{
  using Type = MyRobot_GetResult_Request_<ContainerAllocator>;

  explicit MyRobot_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit MyRobot_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_action::action::MyRobot_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_action::action::MyRobot_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_action::action::MyRobot_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_action::action::MyRobot_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_action::action::MyRobot_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_action::action::MyRobot_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_action::action::MyRobot_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_action::action::MyRobot_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_action::action::MyRobot_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_action::action::MyRobot_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_action__action__MyRobot_GetResult_Request
    std::shared_ptr<my_robot_action::action::MyRobot_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_action__action__MyRobot_GetResult_Request
    std::shared_ptr<my_robot_action::action::MyRobot_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyRobot_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyRobot_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyRobot_GetResult_Request_

// alias to use template instance with default allocator
using MyRobot_GetResult_Request =
  my_robot_action::action::MyRobot_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_robot_action


// Include directives for member types
// Member 'result'
// already included above
// #include "my_robot_action/action/detail/my_robot__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_robot_action__action__MyRobot_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_action__action__MyRobot_GetResult_Response __declspec(deprecated)
#endif

namespace my_robot_action
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MyRobot_GetResult_Response_
{
  using Type = MyRobot_GetResult_Response_<ContainerAllocator>;

  explicit MyRobot_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit MyRobot_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    my_robot_action::action::MyRobot_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const my_robot_action::action::MyRobot_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_action::action::MyRobot_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_action::action::MyRobot_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_action::action::MyRobot_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_action::action::MyRobot_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_action::action::MyRobot_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_action::action::MyRobot_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_action::action::MyRobot_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_action::action::MyRobot_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_action::action::MyRobot_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_action::action::MyRobot_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_action__action__MyRobot_GetResult_Response
    std::shared_ptr<my_robot_action::action::MyRobot_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_action__action__MyRobot_GetResult_Response
    std::shared_ptr<my_robot_action::action::MyRobot_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyRobot_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyRobot_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyRobot_GetResult_Response_

// alias to use template instance with default allocator
using MyRobot_GetResult_Response =
  my_robot_action::action::MyRobot_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_robot_action

namespace my_robot_action
{

namespace action
{

struct MyRobot_GetResult
{
  using Request = my_robot_action::action::MyRobot_GetResult_Request;
  using Response = my_robot_action::action::MyRobot_GetResult_Response;
};

}  // namespace action

}  // namespace my_robot_action


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "my_robot_action/action/detail/my_robot__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_robot_action__action__MyRobot_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_action__action__MyRobot_FeedbackMessage __declspec(deprecated)
#endif

namespace my_robot_action
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MyRobot_FeedbackMessage_
{
  using Type = MyRobot_FeedbackMessage_<ContainerAllocator>;

  explicit MyRobot_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit MyRobot_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    my_robot_action::action::MyRobot_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const my_robot_action::action::MyRobot_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_action::action::MyRobot_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_action::action::MyRobot_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_action::action::MyRobot_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_action::action::MyRobot_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_action::action::MyRobot_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_action::action::MyRobot_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_action::action::MyRobot_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_action::action::MyRobot_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_action::action::MyRobot_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_action::action::MyRobot_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_action__action__MyRobot_FeedbackMessage
    std::shared_ptr<my_robot_action::action::MyRobot_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_action__action__MyRobot_FeedbackMessage
    std::shared_ptr<my_robot_action::action::MyRobot_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyRobot_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyRobot_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyRobot_FeedbackMessage_

// alias to use template instance with default allocator
using MyRobot_FeedbackMessage =
  my_robot_action::action::MyRobot_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_robot_action

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace my_robot_action
{

namespace action
{

struct MyRobot
{
  /// The goal message defined in the action definition.
  using Goal = my_robot_action::action::MyRobot_Goal;
  /// The result message defined in the action definition.
  using Result = my_robot_action::action::MyRobot_Result;
  /// The feedback message defined in the action definition.
  using Feedback = my_robot_action::action::MyRobot_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = my_robot_action::action::MyRobot_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = my_robot_action::action::MyRobot_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = my_robot_action::action::MyRobot_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct MyRobot MyRobot;

}  // namespace action

}  // namespace my_robot_action

#endif  // MY_ROBOT_ACTION__ACTION__DETAIL__MY_ROBOT__STRUCT_HPP_
