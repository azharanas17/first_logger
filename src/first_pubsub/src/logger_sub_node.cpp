#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <nlohmann/json.hpp>

using std::placeholders::_1;
#include "rclcpp/rclcpp.hpp"
#include "first_interfaces/msg/log.hpp"
// #include "first_pubsub/logger.hpp"
#include "first_pubsub/logger_sub_node.hpp"

using json = nlohmann::json;
using std::placeholders::_1;

enum level { DEBUG, INFO, WARN, ERROR, FATAL };


    LoggerSub::LoggerSub()
    : Node("logger_sub")
    {
        subscription_ = this->create_subscription<first_interfaces::msg::Log>(
            "topic", 10, std::bind(&LoggerSub::topic_callback, this, _1)
        );

        // logger = Logger();
        // logger.write_logger(msg);
    }


    void LoggerSub::topic_callback(const first_interfaces::msg::Log::SharedPtr msg) const
    {
        RCLCPP_INFO(this->get_logger(), "filename: '%s'\nmessage log: '%s'\nlevel: '%s'\ntime: '%s'",
        msg->filename, msg->message_log, msg->level, msg->time);

        if(msg->level == "INFO" || msg->level == "WARN" || msg->level == "ERROR" || msg->level == "FATAL")
        {
            std::ofstream file_log;
            file_log.open("logger.json", std::ios_base::app | std::ios_base::out);

            json json_log = json::array();

            json jsn_lg = {
                //{"", this->get_logger()},
                {"message_log", msg->message_log},
                {"level", msg->level},
                {"time", msg->time}
            };
            json_log.push_back(jsn_lg);

            file_log << json_log.dump(0);

            file_log.close();

        }

    }

    // void LoggerSub::filter_log(const first_interfaces::msg::Log::SharedPtr msg) const
    // {
    //     enum level { DEBUG, INFO, WARN, ERROR, FATAL };
    //     level level_log = msg->level;
    //     cout << msg->level;

    //     if (level_log >= 1)
    //     {

    //     }
    // }
