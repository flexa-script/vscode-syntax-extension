# VSCode Synthax Highlight

## Known Bugs
- It's nor recognizing dotted libs eg `using cp.core.console;`
- Should recognize as struct def `var ex: cp::Exception`
- Its not recognizing cp `throw cp::Exception{error="generated unpacked struct error"};` / `var file2: cp::File = cp::File{};` / `cp::close(file2);`
