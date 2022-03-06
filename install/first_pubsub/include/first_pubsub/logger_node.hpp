#ifndef FIRST_PUBSUB__LOGGER_NODE_HPP_
#define FIRST_PUBSUB__LOGGER_NODE_HPP_

#include "rclcpp/rclcpp.hpp"
#include "first_interfaces/msg/log.hpp"
#include "first_pubsub/logger.hpp"

class LoggerNode : public rclcpp::Node
{
public:
    LoggerNode();

private:
    void topic_callback(const first_interfaces::msg::Log::SharedPtr msg) const;

    Logger logger;

    rclcpp::Subscription<first_interfaces::msg::Log>::SharedPtr subscription_;
};
#endif