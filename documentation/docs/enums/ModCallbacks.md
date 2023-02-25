# Enum "ModCallbacks"
List of added callbacks

### MC_PRE_ADD_COLLECTIBLE
Optional argument: `[CollectibleType](https://wofsauge.github.io/IsaacDocs/rep/enums/CollectibleType.html) Type`

Accepts a table of parameters: `{Type, Charge, FirstTime, Slot, VarData}`

Example, which turns every item into Money = Power: `return {[CollectibleType](https://wofsauge.github.io/IsaacDocs/rep/enums/CollectibleType.html).COLLECTIBLE_MONEY_EQUALS_POWER, Charge, FirstTime, Slot, VarData}`

Alternatively accepts an integer to change the [CollectibleType](https://wofsauge.github.io/IsaacDocs/rep/enums/CollectibleType.html) without changing any other parameters (effectively shorthand for the above)

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PRE_ADD_COLLECTIBLE {: .copyable } | ([CollectibleType](https://wofsauge.github.io/IsaacDocs/rep/enums/CollectibleType.html) Type, int Charge, boolean FirstTime, int Slot, int VarData)| - | table |

### MC_HUD_UPDATE {: .copyable }
Accepts no return parameters.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_HUD_UPDATE {: .copyable } | ([CollectibleType](https://wofsauge.github.io/IsaacDocs/rep/enums/CollectibleType.html) Type, int Charge, boolean FirstTime, int Slot, int VarData)| - | void |

### MC_HUD_POST_UPDATE {: .copyable }
Accepts no return parameters.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_HUD_POST_UPDATE {: .copyable } | ([CollectibleType](https://wofsauge.github.io/IsaacDocs/rep/enums/CollectibleType.html) Type, int Charge, boolean FirstTime, int Slot, int VarData)| - | void |

### MC_HUD_RENDER {: .copyable }
Accepts no return parameters.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_HUD_RENDER {: .copyable } | ([CollectibleType](https://wofsauge.github.io/IsaacDocs/rep/enums/CollectibleType.html) Type, int Charge, boolean FirstTime, int Slot, int VarData)| - | void |

### MC_CHARACTER_MENU_RENDER {: .copyable }
Accepts no return parameters.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_CHARACTER_MENU_RENDER {: .copyable } | ([CollectibleType](https://wofsauge.github.io/IsaacDocs/rep/enums/CollectibleType.html) Type, int Charge, boolean FirstTime, int Slot, int VarData)| - | void |

### MC_PRE_SFX_PLAY
Optional argument: `SoundEffect Sound`

Accepts a table of parameters: `{ID, Volume, FrameDelay, Loop, Pitch, Pan}`

Example, which forcibly loops every sound: `return {ID, Volume, FrameDelay, true, Pitch, Pan}`

Alternatively accepts `false` to cancel the sound

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PRE_SFX_PLAY {: .copyable } | (int ID, float Volume, int FrameDelay, boolean Loop, float Pitch, float Pan)| - | void |

### MC_POST_SFX_PLAY
Optional argument: `SoundEffect Sound`

Accepts no return parameters.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_POST_SFX_PLAY {: .copyable } | (int ID, float Volume, int FrameDelay, boolean Loop, float Pitch, float Pan)| - | void |

### MC_PRE_MUSIC_PLAY
Accepts a table of parameters: `{ID, Volume}`

Example, which replaces every song with the Flooded Caves track: `return {Music.MUSIC_FLOODED_CAVES, Volume}`

Alternatively accepts a single number to change the track without changing volume (effectively shorthand for the above)

Alternatively accepts `false` to cancel the track

This callback is called for *both* MusicManager::Play *and* MusicManager::Crossfade! `IsFade` is provided to distinguish the two.


|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PRE_MUSIC_PLAY {: .copyable } | (int ID, float Volume OR float FadeRate (see below), boolean IsFade)| - | void |

### MC_PRE_RENDER_PLAYER_HEAD
Accepts an override `vector` for renderpos.

Alternatively accepts a `false` to stop the rendering.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PRE_RENDER_PLAYER_HEAD {: .copyable } | ([EntityPlayer](https://wofsauge.github.io/IsaacDocs/rep/EntityPlayer.html) player, [Vector](https://wofsauge.github.io/IsaacDocs/rep/Vector.html) renderpos)| - | void |

### MC_PRE_RENDER_PLAYER_BODY
Accepts an override `vector` for renderpos.

Alternatively accepts a `false` to stop the rendering.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PRE_RENDER_PLAYER_BODY {: .copyable } | ([EntityPlayer](https://wofsauge.github.io/IsaacDocs/rep/EntityPlayer.html) player, [Vector](https://wofsauge.github.io/IsaacDocs/rep/Vector.html) renderpos)| - | void |


### MC_PRE_ENTITY_THROW
Accepts a `Vector` which will modify the velocity of the thrown entity.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PRE_ENTITY_THROW {: .copyable } | ([EntityPlayer](https://wofsauge.github.io/IsaacDocs/rep/EntityPlayer.html) ThrowingPlayer, Entity HeldEntity, [Vector](https://wofsauge.github.io/IsaacDocs/rep/Vector.html) Velocity)| - | void |

### MC_POST_ENTITY_THROW
Accepts no return parameters.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_POST_ENTITY_THROW {: .copyable } | ([EntityPlayer](https://wofsauge.github.io/IsaacDocs/rep/EntityPlayer.html) ThrowingPlayer, Entity ThrownEntity, [Vector](https://wofsauge.github.io/IsaacDocs/rep/Vector.html) Velocity)| - | void |

### MC_PLAYER_INIT_POST_LEVEL_INIT_STATS {: .copyable }
Accepts no return parameters.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PLAYER_INIT_POST_LEVEL_INIT_STATS {: .copyable } | - | - | void |

### MC_PRE_ROOM_EXIT
Accepts no return parameters.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PRE_ROOM_EXIT {: .copyable } | ([EntityPlayer](https://wofsauge.github.io/IsaacDocs/rep/EntityPlayer.html) Player, boolean Unknown)| - | void |

### MC_PRE_LEVEL_INIT {: .copyable }
Accepts no return parameters.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PRE_LEVEL_INIT {: .copyable } | - | - | void |

### MC_PRE_TRIGGER_PLAYER_DEATH
Accepts `false` to cancel the death, reviving the player in-place, `true` or `nil` to allow the death to go through.

**BUG!** Much like the vanilla Lua Revive() function, this removes the current run's ability to save. This is being investigated.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PRE_TRIGGER_PLAYER_DEATH {: .copyable } | ([EntityPlayer](https://wofsauge.github.io/IsaacDocs/rep/EntityPlayer.html) Player)| - | void |

### MC_PRE_RESTOCK_SHOP
Accepts `false` to cancel the restock, blocking shop rerolls from restock machines or restocks from Restock altogether.

This callback is called for *both* Room::ShopRestockFull *and* Room::ShopRestockPartial! `Partial` is provided to distinguish the two.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PRE_RESTOCK_SHOP {: .copyable } | (boolean Partial)| - | void |

### MC_POST_RESTOCK_SHOP
Accepts no return parameters.

This callback is called for *both* Room::ShopRestockFull *and* Room::ShopRestockPartial! `Partial` is provided to distinguish the two.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_POST_RESTOCK_SHOP {: .copyable } | (boolean Partial)| - | void |

### MC_PRE_CHANGE_ROOM
Accepts a table of parameters: `{TargetRoomIdx, Dimension}`

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PRE_CHANGE_ROOM {: .copyable } | (int TargetRoomIdx, int Dimension)| - | void |

### MC_POST_PICKUP_SHOP_PURCHASE
Accepts no return parameters.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_POST_PICKUP_SHOP_PURCHASE {: .copyable } | (EntityPickup Pickup, [EntityPlayer](https://wofsauge.github.io/IsaacDocs/rep/EntityPlayer.html) Player, int MoneySpent)| - | void |

### MC_GET_FOLLOWER_PRIORITY
Accepts FollowerPriority to give familiar priority. Can accept any int.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_GET_FOLLOWER_PRIORITY {: .copyable } | (EntityFamiliar Familiar)| - | void |

### MC_PRE_PICKUP_MORPH
Accepts a table of parameters: `{EntityType, Variant, SubType, KeepPrice, KeepSeed, IgnoreModifiers}` or just `{EntityType, Variant, SubType}`. Returning `false` cancels the morph.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PRE_PICKUP_MORPH {: .copyable } | (EntityPickup Pickup,int EntityType,int Variant,int SubType,boolean KeepPrice,boolean KeepSeed,boolean IgnoreModifiers)| - | void |

### MC_PRE_NPC_MORPH
Accepts a table of parameters: `{EntityType, Variant, SubType, Championid}` or just `{EntityType, Variant, SubType}`. Returning `false` cancels the morph.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PRE_NPC_MORPH {: .copyable } | (int EntityType,int Variant,int SubType,int Championid)| - | void |

### MC_PRE_USE_CARD
Accepts `true` to cancel card use.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PRE_USE_CARD {: .copyable } | (Card ID, [EntityPlayer](https://wofsauge.github.io/IsaacDocs/rep/EntityPlayer.html) Player, int UseFlag)| - | void |

### MC_PRE_USE_PILL
Accepts `true` to cancel pill use.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PRE_USE_PILL {: .copyable } | (PillEffect ID, PillColor PillColor, [EntityPlayer](https://wofsauge.github.io/IsaacDocs/rep/EntityPlayer.html) Player, int UseFlag)| - | void |

### MC_GET_SHOP_ITEM_PRICE
Accepts an integer to change the price of the item.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_GET_SHOP_ITEM_PRICE {: .copyable } | (int EntityVariant, int EntitySubType, int ShopItemID)| - | void |

### MC_PLAYER_GET_HEALTH_TYPE
Accepts an integer to change health type for the character.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PLAYER_GET_HEALTH_TYPE {: .copyable } | ([EntityPlayer](https://wofsauge.github.io/IsaacDocs/rep/EntityPlayer.html) Player)| - | void |

### MC_PRE_FAMILIAR_RENDER
Optional argument: `FamiliarVariant Variant`

Accepts a [Vector](https://wofsauge.github.io/IsaacDocs/rep/Vector.html) to modify render offset

Alternatively accepts `false` to cancel rendering

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PRE_FAMILIAR_RENDER {: .copyable } | (EntityFamiliar Familiar, [Vector](https://wofsauge.github.io/IsaacDocs/rep/Vector.html) Offset)| - | void |

### MC_PRE_NPC_RENDER
Optional argument: `EntityType Type`

Accepts a [Vector](https://wofsauge.github.io/IsaacDocs/rep/Vector.html) to modify render offset

Alternatively accepts `false` to cancel rendering

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PRE_NPC_RENDER {: .copyable } | (EntityNPC NPC, [Vector](https://wofsauge.github.io/IsaacDocs/rep/Vector.html) Offset)| - | void |

### MC_PRE_PLAYER_RENDER
Optional argument: `PlayerVariant Variant`

Accepts a [Vector](https://wofsauge.github.io/IsaacDocs/rep/Vector.html) to modify render offset

Alternatively accepts `false` to cancel rendering

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PRE_PLAYER_RENDER {: .copyable } | ([EntityPlayer](https://wofsauge.github.io/IsaacDocs/rep/EntityPlayer.html) Player, [Vector](https://wofsauge.github.io/IsaacDocs/rep/Vector.html) Offset)| - | void |

### MC_PRE_PICKUP_RENDER
Optional argument: `PickupVariant Variant`

Accepts a [Vector](https://wofsauge.github.io/IsaacDocs/rep/Vector.html) to modify render offset

Alternatively accepts `false` to cancel rendering

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PRE_PICKUP_RENDER {: .copyable } | (EntityPickup Pickup, [Vector](https://wofsauge.github.io/IsaacDocs/rep/Vector.html) Offset)| - | void |

### MC_PRE_TEAR_RENDER
Optional argument: `TearVariant Variant`

Accepts a [Vector](https://wofsauge.github.io/IsaacDocs/rep/Vector.html) to modify render offset

Alternatively accepts `false` to cancel rendering

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PRE_TEAR_RENDER {: .copyable } | (EntityTear Tear, [Vector](https://wofsauge.github.io/IsaacDocs/rep/Vector.html) Offset)| - | void |

### MC_PRE_PROJECTILE_RENDER
Optional argument: `ProjectileVariant Variant`

Accepts a [Vector](https://wofsauge.github.io/IsaacDocs/rep/Vector.html) to modify render offset

Alternatively accepts `false` to cancel rendering

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PRE_PROJECTILE_RENDER {: .copyable } | (EntityProjectile Projectile, [Vector](https://wofsauge.github.io/IsaacDocs/rep/Vector.html) Offset)| - | void |

### MC_PRE_KNIFE_RENDER
Optional argument: `ProjectileVariant Variant`

Accepts a [Vector](https://wofsauge.github.io/IsaacDocs/rep/Vector.html) to modify render offset

Alternatively accepts `false` to cancel rendering

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PRE_KNIFE_RENDER {: .copyable } | (EntityKnife Knife, [Vector](https://wofsauge.github.io/IsaacDocs/rep/Vector.html) Offset)| - | void |

### MC_PRE_EFFECT_RENDER
Optional argument: `EffectVariant Variant`

Accepts a [Vector](https://wofsauge.github.io/IsaacDocs/rep/Vector.html) to modify render offset

Alternatively accepts `false` to cancel rendering

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PRE_EFFECT_RENDER {: .copyable } | (EntityEffect Effect, [Vector](https://wofsauge.github.io/IsaacDocs/rep/Vector.html) Offset)| - | void |

### MC_PRE_BOMB_RENDER
Optional argument: `BombVariant Variant`

Accepts a [Vector](https://wofsauge.github.io/IsaacDocs/rep/Vector.html) to modify render offset

Alternatively accepts `false` to cancel rendering

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PRE_BOMB_RENDER {: .copyable } | (EntityBomb Bomb, [Vector](https://wofsauge.github.io/IsaacDocs/rep/Vector.html) Offset)| - | void |

### MC_PRE_SLOT_RENDER
Optional argument: `SlotVariant Variant`

As we don't (yet) have an EntitySlot metatable, this simply returns an Entity. Sorry! :(

Accepts a [Vector](https://wofsauge.github.io/IsaacDocs/rep/Vector.html) to modify render offset

Alternatively accepts `false` to cancel rendering

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PRE_SLOT_RENDER {: .copyable } | (Entity Slot, [Vector](https://wofsauge.github.io/IsaacDocs/rep/Vector.html) Offset)| - | void |

### MC_POST_SLOT_RENDER
Optional argument: `SlotVariant Variant`

As we don't (yet) have an EntitySlot metatable, this simply returns an Entity. Sorry! :(

Accepts a [Vector](https://wofsauge.github.io/IsaacDocs/rep/Vector.html) to modify render offset

Alternatively accepts `false` to cancel rendering

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_POST_SLOT_RENDER {: .copyable } | (Entity Slot, [Vector](https://wofsauge.github.io/IsaacDocs/rep/Vector.html) Offset)| - | void |

### MC_PRE_GRID_INIT
Optional argument: `GridEntityType Type`

This is called when a grid is being placed into a room for the first time.

Accepts `false` to cancel grid initialization and immediately remove the residual grid from the room. **This will cause the game to call PRE_GRID_INIT again the next time the room is entered.**

Alternatively accepts an int to modify the init seed.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PRE_GRID_INIT {: .copyable } | (GridEntity Grid, int Seed)| - | void |

### MC_POST_GRID_INIT
Optional argument: `GridEntityType Type`

Accepts no return parameters.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_POST_GRID_INIT {: .copyable } | (GridEntity Grid, int Seed)| - | void |

### MC_PRE_ROOM_TRIGGER_CLEAR
Accepts no return parameters.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PRE_ROOM_TRIGGER_CLEAR {: .copyable } | (boolean PlaySound)| - | void |

### MC_PRE_PLAYER_TRIGGER_ROOM_CLEAR
Accepts `false` to cancel trigger effects.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PRE_PLAYER_TRIGGER_ROOM_CLEAR {: .copyable } | ([EntityPlayer](https://wofsauge.github.io/IsaacDocs/rep/EntityPlayer.html) Player)| - | void |

### MC_PLAYER_GET_ACTIVE_MAX_CHARGE
Optional argument: `[CollectibleType](https://wofsauge.github.io/IsaacDocs/rep/enums/CollectibleType.html) Collectible`

Accepts an integer to change chargebar for the active item.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PLAYER_GET_ACTIVE_MAX_CHARGE {: .copyable } | ([CollectibleType](https://wofsauge.github.io/IsaacDocs/rep/enums/CollectibleType.html) Collectible, int VarData)| - | void |

### MC_PLAYER_GET_ACTIVE_MIN_USABLE_CHARGE
Optional argument: `[CollectibleType](https://wofsauge.github.io/IsaacDocs/rep/enums/CollectibleType.html) Collectible`

Accepts an integer to change the minimum charge to use the active item.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PLAYER_GET_ACTIVE_MIN_USABLE_CHARGE {: .copyable } | ([ActiveSlot](https://wofsauge.github.io/IsaacDocs/rep/enums/ActiveSlot.html) Slot)| - | void |

### MC_PRE_REPLACE_SPRITESHEET
Optional argument: `string ANM2Filename`

Accepts a table of parameters: `{int LayerID, string PNGFilename}`

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_PRE_REPLACE_SPRITESHEET {: .copyable } | (int LayerID, string PNGFilename)| - | void |

### MC_POST_REPLACE_SPRITESHEET
Optional argument: `string ANM2Filename`

Accepts no return parameters.

|DLC|Value|Name|Function Args|Optional Args|Return Type|
|:--|:--|:--|:--|:--|:--|
||- |MC_POST_REPLACE_SPRITESHEET {: .copyable } | (int LayerID, string PNGFilename)| - | void |