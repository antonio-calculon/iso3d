#

SUBDIRS = iso3d

pkgconfig_DATA = iso3d.pc

iso3d.pc: iso3d.pc.in
	$(top_builddir)/config.status --file=$@:$^

.PHONY: listdirs

listdirs:
	@echo "prefix:     '$(prefix)'"
	@echo "datadir:    '$(datadir)'"
	@echo "pkgdatadir: '$(pkgdatadir)'"
	@echo "pkglibdir : '$(pkglibdir)'"
