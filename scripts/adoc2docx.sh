INPUT_ADOC=$1
asciidoctor -a stylesheet=default.css --backend docbook --out-file - $INPUT_ADOC|pandoc --from docbook --to docx --output $INPUT_ADOC.docx