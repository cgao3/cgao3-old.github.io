for  md in `ls *.md`   
do 
    md=${md%".md"}
    echo $md
#pandoc -f markdown -t html5 -o output.html $md -c style.css
    pandoc -f markdown -t html5 -o ${md}.html ${md}.md
done

mv homepage.html index.html
