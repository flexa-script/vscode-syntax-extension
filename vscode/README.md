# VSCode Synthax Highlight

## Known Bugs
- [X] It's nor recognizing dotted libs eg `using cp.core.console;`
- [X] It's not recognizing struct name `var ex: cp::Exception`
- [ ] It's not recognizing namespaces
    - [X] `throw cp::Exception{error="generated unpacked struct error"};`
    - [X] `var file2: cp::File = cp::File{};`
    - [X] `cp::close(file2);`
