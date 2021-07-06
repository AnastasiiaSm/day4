#include <iostream>

struct Image {
  int mx;
  int my;
  int* points; //картинка размером mx*my
};

//Выделить память размером tmx*tmy
void createImage(Image* img,int tmx, int tmy) {
	img->my = tmy;
	img->mx = tmx;
	int->points = new int [tmx * tmy];
}


// Отображения изображения на экран в pnm формате
//  0 0 0 0 1 0
//  0 0 0 0 1 0
//  0 0 0 0 1 0
//  0 0 0 0 1 0
//  0 0 0 0 1 0
//  0 0 0 0 1 0
//  1 0 0 0 1 0
//  0 1 1 1 0 0
//  0 0 0 0 0 0
//  0 0 0 0 0 0

//Вывести картинку на экран

void showImage(Image* img) {
	int a;
	for (int k = 0; k < tmy; k++) {
		for (int t = 0; t < tmx; t++){
			a = (k * tmx + t)
			std::cout << img->mx [tmx * tmy];
		}
	}
}


// Изменения точки на изображения
//  Необходимо изменить в массиве points - точку с координатами mx*y+x в цвето color
//  0 0 0 0 1 0  0 0 0 0 1 0  0 0 0 0 1 0  0 0 0 0 1 0  0 0 0 0 1 0  0 0 0 0 1 0  1 0 0 0 1 0  0 1 1 1 0 0  0 0 0 0 0 0  0 0 0 0 0 0
   

void setPointImage(Image* img,int x, int y,int color) {
	img->pix[(y * img->mx + x)] = color;
}


//Получение точки на изображение

int getPointImage(Image* img,int x, int y) {
	return img->pix[(y * img->mx + x)];
}

//Сохранить в pnm формате

void saveToPnmFile(Image* img, string fileName) {
	ofstream fout;
	fout.open(fileName);
	int t = 0;
	for(int n = 0; n < (img->mx*img->my); n++) {
    	if (t != img->mx-1) {
            std::fout << img->points[n];
            t = t + 1;
        }
        else {
            std::fout << img->points[n];
            std::fout << std::endl;
            t = 0;
        }
    }
    fout.close();
}

int TestCreateImage(Image* img, int tmx, int tmy) {
	if ((tmx <= 0) || (tmy <= 0))
		return -1;
	return 0;
}

void TestsetPointImage(Image* img,int x, int y,int color) {
	if ((color < 0) || (color > 255))
		return -1;
}

int TestSetPointImage1(Image* img,int x, int y,int color) {
	if ((x > tmx) || (y > tmy))
		return -1;
}

int main() {
  return 0;
}
