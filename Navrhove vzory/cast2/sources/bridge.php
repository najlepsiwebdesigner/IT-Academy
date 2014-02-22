interface DrawingAPI {
    function drawCircle($dX, $dY, $dRadius);
}
 
class DrawingAPI1 implements DrawingAPI {
 
    public function drawCircle($dX, $dY, $dRadius) {
        echo "API1.circle at ".$dX.":".$dY." radius ".$dRadius."<br/>";
    }
}
 
class DrawingAPI2 implements DrawingAPI {
 
    public function drawCircle($dX, $dY, $dRadius) {
        echo "API2.circle at ".$dX.":".$dY." radius ".$dRadius."<br/>";
    }
}
 
abstract class Shape {
 
    protected $oDrawingAPI;
 
    public abstract function draw();
    public abstract function resizeByPercentage($dPct);
 
    protected function __construct(DrawingAPI $oDrawingAPI) {
        $this->oDrawingAPI = $oDrawingAPI;
    }
}
 
class CircleShape extends Shape {
 
    private $dX;
    private $dY;
    private $dRadius;
 
    public function __construct(
            $dX, $dY,
            $dRadius,
            DrawingAPI $oDrawingAPI
    ) {
        parent::__construct($oDrawingAPI);
        $this->dX = $dX;
        $this->dY = $dY;
        $this->dRadius = $dRadius;
    }
 
    public function draw() {
        $this->oDrawingAPI->drawCircle(
                $this->dX,
                $this->dY,
                $this->dRadius
        );
    }
 
    public function resizeByPercentage($dPct) {
        $this->dRadius *= $dPct;
    }
}
 
class Tester {
 
    public static function main()  {
        $aShapes = array(
            new CircleShape(1, 3, 7,  new DrawingAPI1()),
            new CircleShape(5, 7, 11, new DrawingAPI2()),
        );
 
        foreach ($aShapes as $shape) {
            $shape->resizeByPercentage(2.5);
            $shape->draw();
        }
    }
}
 
Tester::main();