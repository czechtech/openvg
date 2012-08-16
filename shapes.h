extern void Translate(VGfloat, VGfloat);
extern void Rotate(VGfloat);
extern void Shear(VGfloat, VGfloat);
extern void Scale(VGfloat, VGfloat);
extern void Text(VGfloat, VGfloat, char *, Fontinfo, int, VGfloat[4]);
extern void Cbezier( VGfloat, VGfloat, VGfloat, VGfloat, VGfloat, VGfloat, VGfloat, VGfloat);
extern void Qbezier(VGfloat, VGfloat, VGfloat, VGfloat, VGfloat, VGfloat);
extern void Polygon(VGfloat *, VGfloat *, VGint);
extern void Polyline(VGfloat *, VGfloat *, VGint);
extern void Rect(VGfloat, VGfloat, VGfloat, VGfloat);
extern void Line(VGfloat, VGfloat, VGfloat, VGfloat);
extern void Roundrect(VGfloat, VGfloat, VGfloat, VGfloat, VGfloat, VGfloat); 
extern void Ellipse(VGfloat, VGfloat, VGfloat, VGfloat);
extern void Circle(VGfloat, VGfloat, VGfloat);
extern void Arc(VGfloat, VGfloat, VGfloat, VGfloat, VGfloat, VGfloat);
extern void Image(VGfloat, VGfloat, int, int, char *);
extern void Start(int, int, VGfloat[4]);
extern void End();
extern void SaveEnd(void);
extern void Background(int, int, VGfloat[4]);
extern void init(int*, int*);
extern void finish();
extern void setfill(VGfloat [4]);
extern void setstroke(VGfloat [4]);
extern void strokeWidth(VGfloat);
extern Fontinfo loadfont(const int *, const int *, const unsigned char *, const int *, const int *, const int *, const short *, int); 
extern void unloadfont(VGPath, int);
extern VGfloat textwidth(char *, Fontinfo, VGfloat);
