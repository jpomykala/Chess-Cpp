#include "DynamicObject.h"

class Rook : public DynamicObject
{
public:
	Rook(){ setSize(TILE_SIZE); }

	void set(SDL_Renderer *ren, int pos_x, int pos_y, COLOR_ENUM value)
	{
		int boardStartX = ((800 - 8 * TILE_SIZE) / 2);
		int boardStartY = ((600 - 8 * TILE_SIZE) / 2);
		loadTexture(ren, ((value == WHITE) ? "WRook.png" : "BRook.png")); // je�li prawda (WHITE) to �aduje bia�ego pionka
		setPosition(boardStartX + TILE_SIZE * pos_x, boardStartY + TILE_SIZE * pos_y);

		color = value;
	}
};