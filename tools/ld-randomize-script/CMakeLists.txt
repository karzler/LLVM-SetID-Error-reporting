set(LLVM_LINK_COMPONENTS ${LLVM_TARGETS_TO_BUILD})

add_llvm_tool(llc
  ld-randomize-script.cpp
  )
