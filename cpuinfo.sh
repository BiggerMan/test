#!/bin/bash

echo -n "CPU numbers:"
cat /proc/cpuinfo | grep "processor" | wc -l

echo -n "core numbers in a physical cpu:"
core_per_phy_cpu=$( cat /proc/cpuinfo | grep "physical id" | sort | uniq | wc -l )
echo $core_per_phy_cpu
