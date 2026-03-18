# Copy after build
add_custom_command(
    TARGET MyLib_static
    POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
        "$<TARGET_FILE:MyLib_static>"   # archive path
        "${QL_R64_LDIR}/"           	# Destination dir
    COMMENT "Copying archive/lib to ${QL_R64_LDIR}"
)