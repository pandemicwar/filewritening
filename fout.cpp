
{
    setlocale (LC_ALL, "Russian");
    std::string bufStr, text = "";
    std::ifstream inp("text.txt", std::ios::in);
    inp.seekg(0);
    if(!inp)
    {
        std::cout<<"Файла нет\n";
        system("pause");
        return 0;
    }
    while(!inp.eof())
    {
        getline(inp, bufStr, '\n');
        text += bufStr + '\n';
    }   
    std::cout<<text<<'\n';
    inp.close();
    std::ofstream out("text.txt", std::ios::app);
    out<<"\nЗапись завершена";
    out.close();
    system("pause");
    return 0;
}
