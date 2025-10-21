//-----------------------------------
// game : ctkc-1987
// utility.h, Praise The Lord Not Me
// author : ???
//-----------------------------------

namespace game
{
  int _gId = 0;

  namespace utility
  {

    class level {
    public:
        level();
        virtual ~level();

        int _mlvlId = 0;

        const char* _mlvlname;
        char lvlBuff[1024];

        float _mlvltick = 0.0f;


        bool blvlLoaded;
    };


class ai{
public:
 ai();
 virtual ~ai();

 int _mAiId = 0;



 const char* _mAiImage;




 bool bAiMovable;




 //===============
 //  functions()
 virtual void _funcSpawnAi(Ai& ai) = 0;
 Ai& _funcReturnAi(Ai& ai);


}




  };


};

