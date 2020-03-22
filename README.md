# PokemonProject
Recreation of Pokemon Red/Blue within the constraints of the terminal with no GUI

1. Project Description
    Our project is based on the original Pokémon games, Red, Blue, and Yellow (First Generation). In Red/Blue/Yellow
    there are several aspects that require a map and/or are related to being able to visually see and interact with a UI,
    but these aspects will be removed ( such as moving around on a map or talking to NPC’s ). Instead, we will focus
    on the aspects that fall under any of the following: battling, finding items, buying items, selling items, and
    encountering wild Pokémon.

2. User Interface ~ Gameplay
    To explain the gameplay, I will split it up into three stages. The first is when the user is greeted. Here they will be
    greeted and asked for their name and age. After a simple dialogue, they will be able to pick their starter which will
    be a permanent Pokémon they have. (The first POKEMON object in the array member of the PLAYER class).
    The second part to the game is the section that repeats until a certain condition is met. (This condition that allows
    the user to begin the third ‘stage’ is having battled and won against a specified number of NPC’s). In this looping
    middle section of the game, they will have a few options: “party”, “pokedex”, “bag”, and “walk”. The “pokedex” option
    will let them view a formatted table of all of the Pokémon that they have encountered and puts “????” for the ones
    they have not seen yet. The “Party” option allows them to view their current Pokémon. They can also view the
    moves or stats of any individual Pokémon they have alrighty caught. The “bag” option will allow them to view their
    items and there they can select an item to choose if they desire. The “walk” option will pseudo-randomly (some
    chances higher than others) set off one of four of the following actions: “town”, “itemFound”, “battle”, “wildPokemon”.
    If it is “town: the game will give them the dialogue that they have stumbled across a town that contains a pokemart
    and a pokecenter which in the first they may buy or sell items and the latter allows them to heal their Pokémon or
    access the PC, which contains all the pokemon they have caught that are not in their current party. If the selected
    action is “itemFound” they pick up an item and a description of the item is given to the user and is placed in their
    bag. If the selected action is “battle”, they face off in a battle with a new player (NPC Object) in which they may not
    run away from or catch a Pokémon from. They may use items or switch out their Pokémon but that is it. If all of the
    NPC’s pokemon die the user receives money and the game continues. If the user’s pokemon all run out of hp first,
    the user loses money and is told they have woken up at a pokecenter and from there they can continue the cycle. If
    it is the last action, “wildPokemon”, the user battles a pokemon and may try to catch it. Yet, the same thing happens
    if their pokemon all die. If the wildPokemon faints they do not get it and the game continues. The other options are
    they use a pokeball and they catch it and they get it if it succeeds but otherwise the pokemon is able to flee.
    The last stage of the game is able to begin after the use has successfully won about 10 Pokémon battles against
    trainers. When they reach this number of wins, they are asked if they want to battle the champion. If they do it is like
    a normal NPC battle, but the Pokémon and the stats are hardcoded in. The same thing happens as usual if their
    pokemon all lose. If they win, the user becomes the champion, wins the game, and the game is over.
