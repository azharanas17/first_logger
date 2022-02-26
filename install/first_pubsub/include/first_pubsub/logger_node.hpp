#ifndef LOGGER_H
#define LOGGER_H

#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "first_interfaces/msg/log.hpp"
#include "first_pubsub/logger.hpp"
using std::placeholders::_1;

class LoggerNode : public rclcpp::Node
{
public:
    LoggerNode();

private:
    void topic_callback(const first_interfaces::msg::Log::SharedPtr msg) const;

    Logger logger;
    logger.write_logger();
    rclcpp::Subscription<first_interfaces::msg::Log>::SharedPtr subscription_;
};
#endif