.PHONY: clean All

All:
	@echo "----------Building project:[ WebCGI - Debug ]----------"
	@cd "WebCGI" && "$(MAKE)" -f  "WebCGI.mk"
clean:
	@echo "----------Cleaning project:[ WebCGI - Debug ]----------"
	@cd "WebCGI" && "$(MAKE)" -f  "WebCGI.mk" clean
