import os
import inspect
import importlib
import settings as cfg

ldir = os.path.join(cfg.mish, 'loads')
if not os.path.isdir(ldir):
	os.mkdir(ldir)
os.chdir(ldir)

for grp in ['cdf_2009', 'cdfsf_2009', 'marines_2009', 'det5_2009_eusof', 'det5_crates', 'soar_2009']:
	lib = importlib.import_module('loads.' + grp)
	for name, obj in inspect.getmembers(lib):
		if inspect.isclass(obj) and 'NoWrite' not in obj.__dict__:
			obj().write()
