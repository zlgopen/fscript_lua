import os
os.environ['TKC_ONLY'] = 'True'
import scripts.app_helper as app

helper = app.Helper(ARGUMENTS)
helper.set_tkc_only().add_libs(['fscript_lua'])
helper.add_ccflags("-DLUA_COMPAT_MODULE=1 ");
helper.add_platform_libs("Linux", ["pthread"])
helper.set_dll_def('src/fscript_lua.def').call(DefaultEnvironment)
SConsFiles = [
    'src/SConscript',
    'lua/SConscript',
    'demos/SConscript',
    'tests/SConscript',
]

SConscript(SConsFiles)
