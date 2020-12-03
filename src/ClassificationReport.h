

#ifndef DEF_CLASSIFICATIONREPORT
#define DEF_CLASSIFICATIONREPORT


class ClassificationReport
{
public:
  void ClassificationReport();
  std::string toString;

private:
    _confusion;
    int _nbTags;
    bool _nok;
    bool _ok;
};


#endif
