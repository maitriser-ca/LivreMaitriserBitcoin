C3DIR=$1;

for ad in $C3DIR/*.asciidoc; do
    FN=${ad%.asciidoc};

    asciidoc -b docbook $ad;
    pandoc -f docbook -t markdown_strict ${FN}.xml -o ${FN}.md;
done;