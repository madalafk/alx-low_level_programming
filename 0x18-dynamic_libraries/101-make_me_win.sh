#!/bin/bash
echo '/bin/true' > /tmp/gm; chmod +x /tmp/gm; export LD_PRELOAD=/tmp/gm
