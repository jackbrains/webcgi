.PHONY: clean All

All:
	@echo "----------Building project:[ WebCGID - Debug ]----------"
	@cd "WebCGID" && "$(MAKE)" -f  "WebCGID.mk"
clean:
	@echo "----------Cleaning project:[ WebCGID - Debug ]----------"
	@cd "WebCGID" && "$(MAKE)" -f  "WebCGID.mk" clean
