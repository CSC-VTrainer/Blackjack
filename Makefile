open: Architecture.png
	xdg-open Architecture.png

Architecture.png: Architecture.puml
	plantuml -tpng Architecture.puml

.PHONY: open
