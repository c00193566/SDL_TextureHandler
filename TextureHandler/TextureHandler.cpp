#include "TextureHandler.h"

TextureHandler * TextureHandler::THInstance = 0;

void TextureHandler::addTexture(string Tag, string Path, SDL_Renderer * Renderer)
{
	if (!IMG_Load(Path.c_str()))
	{
		cout << IMG_GetError << endl;
	}
	else
	{
		Textures[Tag] = IMG_LoadTexture(Renderer, Path.c_str());
		cout << "Texture : " << Tag << ", loaded successfully!" << endl;
	}
}

SDL_Texture * TextureHandler::getTexture(string Tag)
{
	return Textures[Tag];
}
