#include "Moteur.h"
#include "RGBException.h"

int main()
{
	Moteur m;
	ImageNG imgfin;
//	ImageNG img("../images/joconde.bmp");
//	img.setId(1);
//	m.Insere(&img);
//	ImageNG img1("../images/lena.bmp");
//	img1.setId(2);
//	m.Insere(&img1);
//	img1.setId(3);
//	img1.setNom("test");
//	m.Insere(&img1);
//	imgfin = m.GetImageNG(2);
//	//imgfin.Dessine();
//	
//	m.Affiche();
//	char c = getchar();
//	//m.SupprimeImage(2);
//	//imgfin.Dessine();
//	cout << "on commence" << endl;
//	m.Affiche();
//	imgfin = m.GetImageNG(1);
//	imgfin.Dessine();
//	imgfin = m.GetImageNG(2);
//	imgfin.Dessine();
//	imgfin = m.GetImageNG(1);
//	imgfin.Dessine();
//	
//	m.SupprimeImage(3);
//	m.SupprimeImage(2);
//	m.SupprimeImage(1);

//	m.Affiche();

/* ------------ les 2 bugguent ----------------*/
	ListeTriee<ImageNG> liste;
  	Iterateur<ImageNG> it(liste);

  	ImageNG::setComparaison(ImageNG::LUMINANCE);
	ImageNG *im = NULL;
  cout << "On insere quelques images..." << endl;
  
  	im = new ImageNG(1,"Test",Dimension(255,255));
  im->setBackground(128);
  m.Insere(im);
// 	im = new ImageNG(2,"autre",Dimension(255,255));
//  m.Insere(im);
//  
//  	im = new ImageNG(3,"testing",Dimension(266,266));
//  m.Insere(im);
  

  m.Affiche();

 cout << endl;

  cout << "On supprime de la liste..." << endl;
 m.SupprimeImage(1);
//  m.Affiche();  
  m.SupprimeImage(2);
	
	
	
	return 0;
}
