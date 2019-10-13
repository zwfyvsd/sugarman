# sugarman
Sugarman is a computer simulation of evolution. A map is created and each block contains certain amount of sugar. Sugar grows constantly. A sugarman will move around and take in as much sugar as possible. If his weight goes down to 0, he dies. Sugarmans have a limited sight. In each stage, a sugarman will move to the block which contains the most sugar among blocks he can see. He then occupies the block and takes in all the sugar. Any block can only be occupied by one sugarman.

Sugarmans can reproduce and have certain reproducing speeds. When reproduce, a sugarman randomly create another sugarman having "almost" the same characteristics as him and zero weight. The newly created sugarman will be placed next to his father - either up, down, left or right.

Currently, reproducing and dying is not supported. The map and charateristics are randomly generated. Constants are hard coded.

Todo
- Flexibility
    - Customizable constants without recompiling.
    - Customizable maps.
    - Customizable sugarman characteristics.
- Saving the work
    - Saving to file.
    - Resuming from file.
- Better representation of real world environment
    - Mountains
    - Rivers
    - ...
- Better representation of evolution
    - Death when weight reachs 0.
    - Reproduction.
    - Adding more characteristics.
    - Using characteristics describing strings (emulating DNA).
    - Sexual reproduction.
    - Better competition mechanism.
        - Predator-prey model.
        - Cooperation.
        - ...
    - Speciation and sexual separation.
    - ...
- ...
