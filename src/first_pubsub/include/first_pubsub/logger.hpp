#ifndef LOGGER_H
#define LOGGER_H

#include <fstream>
#include <iostream>

#include "rclcpp/rclcpp.hpp"
#include "first_interfaces/msg/log.hpp"

class Logger
{
    public:
        Logger();
        void write_logger(const first_interfaces::msg::Log::SharedPtr msg) const;
        
    private:

};
#endif