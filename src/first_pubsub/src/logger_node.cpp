#ifndef LOGGER_H
#define LOGGER_H

#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "first_interfaces/msg/log.hpp"
#include "first_pubsub/logger.hpp"
#include "first_pubsub/logger_node.hpp"

using std::placeholders::_1;

class LoggerNode : public rclcpp::Node
{
public:
    LoggerNode()
    : Node("logger_node")
    {
        subscription_ = this->create_subscription<first_interfaces::msg::Log>(
            "topic", 10, std::bind(&LoggerNode::topic_callback, this, _1)
        );
    }

    

private:
    void topic_callback(const first_interfaces::msg::Log::SharedPtr msg) const
    {
        RCLCPP_INFO(this->get_logger(), "filename: '%s'\nmessage log: '%s'\nlevel: '%s'\ntime: '%s'",
        msg->filename, msg->message_log, msg->level, msg->time);
    }

    Logger::write_logger();
    rclcpp::Subscription<first_interfaces::msg::Log>::SharedPtr subscription_;
};

int main(int argc, char* argv[])
{

    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<LoggerNode>());
    rclcpp::shutdown();

    return 0;
}
#endif