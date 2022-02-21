#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "first_interfaces/msg/log.hpp"
using std::placeholders::_1;

class LogSubscriber : public rclcpp::Node
{
public:
    LogSubscriber()
    : Node("log_subscriber")
    {
        subscription_ = this->create_subscription<first_interfaces::msg::Log>(
            "topic", 10, std::bind(&LogSubscriber::topic_callback, this, _1)
        );
    }

private:
    void topic_callback(const first_interfaces::msg::Log::SharedPtr msg) const
    {
        RCLCPP_INFO(this->get_logger(), "filename: '%s'\nmessage log: '%s'\nlevel: '%s'",
        msg->filename, msg->message_log, msg->level);
    }
    rclcpp::Subscription<first_interfaces::msg::Log>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<LogSubscriber>());
    rclcpp::shutdown();

    return 0;
}