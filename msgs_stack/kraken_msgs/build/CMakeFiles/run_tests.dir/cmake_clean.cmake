file(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../msg_gen"
  "../srv_gen"
  "../src/kraken_msgs/msg"
  "../src/kraken_msgs/srv"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/run_tests.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
