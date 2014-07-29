#include "Projects.h"

void ProjectJon::setup(int width, int height) {
    Scene::setup(width, height);
    x10 = 0;    x20 = 0;    x30 = 0;    x40 = 0;    x50 = 0;    x60 = 0;    x70 = 0;    x80 = 0;    y10 = 0;    y20 = 0;    y30 = 0;    y40 = 0;
}
void ProjectJon::update() {
    
}
void ProjectJon::setImage(int idx) {
    this->idx = idx;
    if (idx == 0) {
        w1_doorway.loadImage("jon_images/1_doorway.png");
        w1_doorway.resize(getWidth(), getHeight());
    }
    else if (idx == 1) {
        w2_strip1.loadImage("jon_images/2_wallstrip1.png");
        w2_strip2.loadImage("jon_images/2_wallstrip2.png");
        w2_strip3.loadImage("jon_images/2_wallstrip3.png");
        
        w2_strip1.resize(175, 175 * w2_strip1.height / w2_strip1.width);
        w2_strip2.resize(175, 175 * w2_strip2.height / w2_strip2.width);
        w2_strip3.resize(175, 175 * w2_strip3.height / w2_strip3.width);
    }
    else if (idx == 2) {
        w3_strip1.loadImage("jon_images/3_Band 1 - Topmost-01.png");
        w3_strip2.loadImage("jon_images/3_Band 2.png");
        w3_strip3.loadImage("jon_images/3_Band 3.png");
        w3_strip4.loadImage("jon_images/3_Band 4.png");
        w3_strip5.loadImage("jon_images/3_Band 5.png");
        w3_strip6.loadImage("jon_images/3_Band 6.png");
        w3_strip7.loadImage("jon_images/3_Band 7.png");
        w3_strip8.loadImage("jon_images/3_Band 8 - Bottommost.png");
        
        w3_strip1.resize(75 * w3_strip1.width / w3_strip1.height, 75);
        w3_strip2.resize(75 * w3_strip2.width / w3_strip2.height, 75);
        w3_strip3.resize(75 * w3_strip3.width / w3_strip3.height, 75);
        w3_strip4.resize(75 * w3_strip4.width / w3_strip4.height, 75);
        w3_strip5.resize(75 * w3_strip5.width / w3_strip5.height, 75);
        w3_strip6.resize(75 * w3_strip6.width / w3_strip6.height, 75);
        w3_strip7.resize(75 * w3_strip7.width / w3_strip7.height, 75);
        w3_strip8.resize(75 * w3_strip8.width / w3_strip8.height, 75);        
    }
    else if (idx == 3) {
        w4_overlay.loadImage("jon_images/4_North Wall Overlay-08.png");
        w4_piece1.loadImage("jon_images/4_North Wall Pieces-01.png");
        w4_piece2.loadImage("jon_images/4_North Wall Pieces-02.png");
        w4_piece3.loadImage("jon_images/4_North Wall Pieces-03.png");
        w4_piece4.loadImage("jon_images/4_North Wall Pieces-04.png");
        w4_piece5.loadImage("jon_images/4_North Wall Pieces-05.png");
        w4_piece6.loadImage("jon_images/4_North Wall Pieces-06.png");
        w4_piece7.loadImage("jon_images/4_North Wall Pieces-07.png");
        w4_piece8.loadImage("jon_images/4_North Wall Pieces-08.png");
        w4_piece9.loadImage("jon_images/4_North Wall Pieces-09.png");
        w4_piece10.loadImage("jon_images/4_North Wall Pieces-10.png");
        w4_scroll.loadImage("jon_images/4_North Wall Scrolling Scipt.png");
        
        w4_overlay.resize(800, 600);
        w4_scroll.resize(50, 50 * w4_scroll.height / w4_scroll.width);
        w4_piece1.resize(50, 50);
        w4_piece2.resize(50, 50);
        w4_piece3.resize(50, 50);
        w4_piece4.resize(50, 50);
        w4_piece5.resize(50, 50);
        w4_piece6.resize(50, 50);
        w4_piece7.resize(50, 50);
        w4_piece8.resize(50, 50);
        w4_piece9.resize(50, 50);
        w4_piece10.resize(50, 50);
        
        w41.set(290, 520);
        w42.set(400, 430);
        w43.set(480, 520);
        w44.set(540, 420);
        w45.set(556, 320);
        w46.set(580, 490);
        w47.set(650, 400);
        w48.set(665, 305);
        w49.set(695, 520);
        w50.set(730, 445);
    }
}
void ProjectJon::toggleIdx() {
//    idx = (idx+1) % imgPaths.size();
    setImage(idx);
}

void ProjectJon::draw(int x, int y) {
    ofPushMatrix();
    ofPushStyle();
    ofTranslate(x, y);
    
    ofBackground(0);
    
    ofTranslate(getWidth(), getHeight());//ofGetMouseX(), ofGetMouseY());
    ofRotate(180);
    
    if (idx == 0) {
        w1_doorway.draw(0, 0);//, getWidth(), getHeight());
    }
    else if (idx == 1) {
        y10 += 0.6;
        y20 += 0.5;
        y30 -= 0.4;
        int y1 = (int) y10 % w2_strip1.height;
        int y2 = (int) y20 % w2_strip2.height;
        int y3 = (int) y30 % w2_strip3.height;
        
        w2_strip1.draw(20, y1);
        w2_strip2.draw(200, y2);
        w2_strip3.draw(getWidth()-195, y3);
        
        w2_strip1.draw(20, y1 - w2_strip1.height);
        w2_strip2.draw(200, y2 - w2_strip2.height);
        w2_strip3.draw(getWidth()-195, y3 + w2_strip3.height);
    }
    else if (idx == 2) {
        x10 += 0.5;
        x20 += 0.4;
        x30 += 0.55;
        x40 += 0.45;
        x50 += 0.6;
        x60 += 0.56;
        x70 += 0.49;
        x80 += 0.53;
        int x1 = (int) x10 % w3_strip1.width;
        int x2 = (int) x20 % w3_strip2.width;
        int x3 = (int) x30 % w3_strip3.width;
        int x4 = (int) x40 % w3_strip4.width;
        int x5 = (int) x50 % w3_strip5.width;
        int x6 = (int) x60 % w3_strip6.width;
        int x7 = (int) x70 % w3_strip7.width;
        int x8 = (int) x80 % w3_strip8.width;
        
        w3_strip1.draw(x1, 0);
        w3_strip2.draw(x2, 75);
        w3_strip3.draw(x3, 150);
        w3_strip4.draw(x4, 225);
        w3_strip5.draw(x5, 300);
        w3_strip6.draw(x6, 375);
        w3_strip7.draw(x7, 450);
        w3_strip8.draw(x8, 525);

        w3_strip1.draw(x1 - w3_strip1.width, 0);
        w3_strip2.draw(x2 - w3_strip2.width, 75);
        w3_strip3.draw(x3 - w3_strip3.width, 150);
        w3_strip4.draw(x4 - w3_strip4.width, 225);
        w3_strip5.draw(x5 - w3_strip5.width, 300);
        w3_strip6.draw(x6 - w3_strip6.width, 375);
        w3_strip7.draw(x7 - w3_strip7.width, 450);
        w3_strip8.draw(x8 - w3_strip8.width, 525);
    }
    else if (idx == 3) {
        ofSetColor(255);
        y40 += 0.39;
        int y4 = (int) y40 % w4_scroll.height;
        w4_scroll.draw(120, y4);
        w4_scroll.draw(120, y4-w4_scroll.height);
        w4_overlay.draw(0, 0);
        
        ofSetColor(255, 127+127*sin(10+0.023*ofGetFrameNum()));
        w4_piece1.draw(w41.x, w41.y);
        ofSetColor(255, 127+127*sin(20+0.023*ofGetFrameNum()));
        w4_piece2.draw(w42.x, w42.y);
        ofSetColor(255, 127+127*sin(30+0.023*ofGetFrameNum()));
        w4_piece3.draw(w43.x, w43.y);
        ofSetColor(255, 127+127*sin(40+0.023*ofGetFrameNum()));
        w4_piece4.draw(w44.x, w44.y);
        ofSetColor(255, 127+127*sin(50+0.023*ofGetFrameNum()));
        w4_piece5.draw(w45.x, w45.y);
        ofSetColor(255, 127+127*sin(60+0.023*ofGetFrameNum()));
        w4_piece6.draw(w46.x, w46.y);
        ofSetColor(255, 127+127*sin(70+0.023*ofGetFrameNum()));
        w4_piece7.draw(w47.x, w47.y);
        ofSetColor(255, 127+127*sin(80+0.023*ofGetFrameNum()));
        w4_piece8.draw(w48.x, w48.y);
        ofSetColor(255, 127+127*sin(90+0.023*ofGetFrameNum()));
        w4_piece9.draw(w49.x, w49.y);
        ofSetColor(255, 127+127*sin(100+0.023*ofGetFrameNum()));
        w4_piece10.draw(w50.x, w50.y);
    }
    
    ofSetColor(255, 255);
    ofPopStyle();
    ofPopMatrix();
}



void ProjectAnne::setup(int width, int height) {
    Scene::setup(width, height);
    font.loadFont("AndaleMono.ttf", 22);
    idx = 0;
}

void ProjectAnne::setScreen(int idx) {
    if (idx==0) {
        loadImages1();
        isText = true;
    } else if (idx == 1) {
        loadImages2();
        isText = true;
    }
}

void ProjectAnne::update() {
    int t = ofGetFrameNum()-last;
    if (t == 0.5*interval) {
        idx = (idx + 1) % slides.size();
        if (slides[idx].imagePath=="") {
            text = slides[idx].textString;
            isText = true;
        }
        else {
            img.loadImage(slides[idx].imagePath);
            isText = false;
        }
    }
    alpha = ofClamp(ofMap(abs(t - 0.5*interval), 0, 0.5*interval, 0, 255), 0, 255);
}

void ProjectAnne::next() {
    last = ofGetFrameNum();
}

void ProjectAnne::back() {
    last = ofGetFrameNum();
    idx = idx - 1;
}

void ProjectAnne::draw(int x, int y) {
    ofPushMatrix();
    ofPushStyle();
    ofTranslate(x, y);
    
    ofBackground(0);
  
    // projector 2 no projection
    
    ofTranslate(getWidth(), getHeight());//ofGetMouseX(), ofGetMouseY());
    ofRotate(180);
    
    ofSetColor(255, alpha);
    if (isText) {
        font.drawString(text, 14, 120);
    }
    else {
        if (img.width > img.height) {
            int h = img.height * getWidth() / img.width;
            img.draw(0, 0.5*(getHeight()-h), getWidth(), h);
        }
        else {
            int w = img.width * getHeight() / img.height;
            img.draw(0.5*(getWidth()-w), 0, w, getHeight());
        }
    }
    
    
    
    ofPopStyle();
    ofPopMatrix();
}


void ProjectChaozza::setup(int width, int height) {
    Scene::setup(width, height);
}
void ProjectChaozza::setVideo(int idx) {
    if (idx==0) {
        player.loadMovie("terri_videos/Sequence_01-960x540.mp4");
    }
    else if (idx == 1) {
        player.loadMovie("terri_videos/Sequence_02-960x540.mp4");
    }
    else if (idx == 2) {
        player.loadMovie("terri_videos/Sequence_03-960x540.mp4");
    }
    else if (idx == 3) {
        player.loadMovie("terri_videos/Sequence_04-960x540.mp4");   
    }
    player.setLoopState(OF_LOOP_NORMAL);
    player.play();
}

void ProjectChaozza::update() {
    player.update();
}

void ProjectChaozza::draw(int x, int y) {
    ofPushMatrix();
    ofPushStyle();
    ofTranslate(x, y);
    
    ofTranslate(getWidth(), getHeight());//ofGetMouseX(), ofGetMouseY());
    ofRotate(180);
    
    ofSetColor(255);
    
    player.draw(0, 0, getWidth(), getHeight());

    
    ofPopStyle();
    ofPopMatrix();
}





void ProjectAnne::loadImages1() {
    slides.push_back(Slide("", ""));
    slides.push_back(Slide("", ""));
    slides.push_back(Slide("","“Are all rocks alive?” That was the question \nthat Irving Hallowell, an American \nanthropologist, asked an old Anishinaabe man \nhe was visiting in southern central Canada \nin the 1940s."));
    slides.push_back(Slide("","In the old man’s mother-tongue, rocks are \nanimate. How far does this Anishinaabe animism \ngo? Are rocks really alive or is it just a \nlinguistic conceit? Hallowell wanted to know if \nthis was something deliberate in the old man’s \nunderstanding or if it was just a peculiarity \nof an inherited language."));
    slides.push_back(Slide("","The important question isn’t a philosophical \nabstraction. Rather, the vital question for the \nold man was, “How do we engage respectfully \nwith rocks?” You see, generally speaking, rocks \nare animate, they are “persons” in the sense \nthat the language marks them as such – just as \nFrench marks tables as feminine."));
    slides.push_back(Slide("","It’s important to note that most of the time \nAnishinaabeg people treat rocks in much the \nsame way that Europeans do. They walk on them, \nthrow them, make things from them. Admittedly, \nAnishinaabeg are likely to offer rocks a gift \nof tobacco or other herbs before using them. \nBut, generally speaking, just because rocks are \npersons doesn’t mean you have to greet each one \nevery day."));
    slides.push_back(Slide("","See, it’s just like humanists: just because \nthey respect other humans doesn’t mean they \nshake hands with everyone they see, most often \nthey show respect by giving others space in \nwhich to be themselves."));
    slides.push_back(Slide("","What’s this got to do with computers? Well, it \nisn’t only rocks that can be spoken about as \nanimate beings. Many human-made artefacts are \nalso treated as alive and related in animist \ncultures too."));
    slides.push_back(Slide("","And it isn’t just indigenous people who treat \nobjects this way. Many of us give our cars \nnames, and talk to them when they won’t start \nat the first go. Many of us swear at our \ncomputers when they deliberately, it seems, \nrefuse to do what they’ve done a thousand times \nbefore, until now when there’s a deadline to \nmeet… Now they pretend not to know what that \nclick means!"));
    slides.push_back(Slide("","It isn’t children or fools who treat rocks, \nbaskets, cars and computers as alive, as \nrelational beings. It is those who know these \nthings well."));
    slides.push_back(Slide("anne_images/00 Coper-Canyon1.jpg", ""));
    slides.push_back(Slide("anne_images/02 Cuivre_natif1_(USA).jpg", ""));
    slides.push_back(Slide("anne_images/03 lead04.jpg", ""));
    slides.push_back(Slide("anne_images/04.pl660305-baryum_ferro_de_silicium_avec_spheroidization_maximum_additif_de_sid_rurgie_de_0_1_de_0_5mm.jpg", ""));
    slides.push_back(Slide("","Yes. We require all of our suppliers \nto certify in writing that they use \nconflict few materials. But honestly \nthere is no way for them to be sure. \nUntil someone invents a way to \nchemically trace minerals from the \nsource mine, it’s a very difficult \nproblem."));
    slides.push_back(Slide("anne_images/05beryllium.JPG", ""));
    slides.push_back(Slide("anne_images/07 T gold-miners-are-getting-destroyed.jpg", ""));
    slides.push_back(Slide("anne_images/07_gold_mining_congo_ap_605.jpg", ""));
    slides.push_back(Slide("anne_images/08  coltan-mine.jpg", ""));
    slides.push_back(Slide("anne_images/08 congo_mining_labor.jpeg", ""));
    slides.push_back(Slide("anne_images/08 graphite_mining--621x414.jpg", ""));
    slides.push_back(Slide("anne_images/08 iyoU4jiSJz2g.jpg", ""));
    slides.push_back(Slide("anne_images/08 m ilitiaphotoedit.jpg", ""));
    slides.push_back(Slide("anne_images/08 Mine_to_Mobile_photo_3.jpg", ""));
    slides.push_back(Slide("anne_images/08 tin35__01__630x420.jpg", ""));
    slides.push_back(Slide("anne_images/08 wdsc1576.jpg", ""));
    slides.push_back(Slide("anne_images/08 ww .jpg", ""));
    slides.push_back(Slide("","Les ordinateurs touchent a de \nl'immateriel, de la parole, du savoir. \nIls sont consideres comme des biens \nculturels. Nous avons donc l'impression \nqu'eux-memes sont immateriels. Ensuite, a \ncause des pubs et du marketing, notre \nattention est totalement detournee des \nprocessus qui ne concernent pas leurs \nusages: en clair, leur fabrication, mais \naussi leur fin de vie."));
    slides.push_back(Slide("anne_images/09 a bhm6.jpg", ""));
    slides.push_back(Slide("anne_images/09 Apple-Foxconn-MacBook-Pro-assembly-thumb-550xauto-82205.jpg", ""));
    slides.push_back(Slide("anne_images/09 b Foxconn-factory-China-004.jpg", ""));
    slides.push_back(Slide("anne_images/09 Foxconn-master675.jpg", ""));
    slides.push_back(Slide("anne_images/09 w haxlr8r-huaqiangbei.jpeg", ""));
    slides.push_back(Slide("anne_images/10 110 P1260624.JPG", ""));
    slides.push_back(Slide("anne_images/10 111 a IMG_2641.JPG", ""));
    slides.push_back(Slide("","We can fly like eagles, see like \nout of body experience, see like a \nlynx, speak at a distance, move objects \nfrom afar, access the combined knowledge \nof generations, freeze time and rewind. \nPerhaps it is only the capacity to \npredict the future that has resisted \ntechnology - although the capacity of super \ncomputers to model complex phenomena brings \nus closer to that most archetypal of \nshamanic capacities."));
    slides.push_back(Slide("anne_images/10 111 IMG_2646.JPG", ""));
    slides.push_back(Slide("anne_images/10 20140212_081650.jpg", ""));
    slides.push_back(Slide("anne_images/10 20140212_081810.jpg", ""));
    slides.push_back(Slide("anne_images/10 20140217_031640.jpg", ""));
    slides.push_back(Slide("anne_images/10 20140217_034958.jpg", ""));
    slides.push_back(Slide("anne_images/10 a img a MoboB.jpg", ""));
    slides.push_back(Slide("anne_images/10 a img foxconn_blackops.jpg", ""));
    slides.push_back(Slide("","But there is one immense difference \nbetween magic and technology - the latter, \nunderstood as machines, computers and so \non, have a strong impact on our natural \nworld. For years now experts and activists have \nbeen advising that Gaia is sick, the \ncomplex ecosystem of the planet is \nbreaking down. The technological encompasses \nnot only the means to particular ends, \nbut a whole set of relationships in the world. \nWe are living in what is known as the \n6th Extinction"));
    slides.push_back(Slide("anne_images/10 aFoxconn_Quantum_Force_Front.jpg", ""));
    slides.push_back(Slide("anne_images/10 b bestbuyhomeenergy3.jpg", ""));
    slides.push_back(Slide("anne_images/10 cg-courtyard-2.jpg", ""));
    slides.push_back(Slide("anne_images/10 d m 53973.jpg", ""));
    slides.push_back(Slide("anne_images/10 pictures-look-inside-the-new-google-showrooms-that-will-challenge-apples-stores.jpg", ""));
    slides.push_back(Slide("anne_images/10 w g4_transistor_soldering.jpg", ""));
    slides.push_back(Slide("anne_images/11 a10 HSgarbage.png", ""));
    slides.push_back(Slide("","Johnny has now moved into a tech-\nalchimist-hacker space. One of his projects, \nRecrystalisation, is resumed thus : \n1] Attempting to recover minerals and \nmetals (including copper, gold and silver) \nfrom abandoned computers through execution of \nvarious volatile and chemical processes.  \n2] The re-crystallisation of these \nminerals in novel arrays using raw/renditioned \nmineral assemblies including piezoelectrics, \npositive feedback, colloidal dispersions. \n3] The re-purposing and embedding of \ncomponents and structures within wider \ngeological and geophysical systems"));
    slides.push_back(Slide("anne_images/11 ab.jpg", ""));
    slides.push_back(Slide("anne_images/11 abElectronic_waste.jpg", ""));
    slides.push_back(Slide("anne_images/11 b 3564_large.jpg", ""));
    slides.push_back(Slide("anne_images/11 b India_Victor_Grigas_2011-13.jpg", ""));
    slides.push_back(Slide("anne_images/11 d 45e7f55251791e213f0f6a706700c0f0.jpg", ""));
    slides.push_back(Slide("anne_images/11 e-waste-circuitboards-univ640.jpg", ""));
    slides.push_back(Slide("","Everything has electromagnetic fields, \nour bodies, the planet, the universe \nitself. It is everywhere. Some suggested \nthat it was the \"glue\" that held all \nthe universe together and others that \nit was the divine light itself."));
    slides.push_back(Slide("anne_images/11 ewaste2.jpg", ""));
    slides.push_back(Slide("anne_images/11 le-waste.jpg", ""));
    slides.push_back(Slide("anne_images/11 m.jpg", ""));
    slides.push_back(Slide("anne_images/11 mburning-plastics.jpg", ""));
    slides.push_back(Slide("","New technologies of perception and \ncommunication open up new spaces, \nand these spaces are always mapped, on \none level or another, through the \nimagination. Or would it be the other \nway round? Technology trys to fulfil our \nimagination. Our poor technology, so \ndestructive and crude compared to the \nrefinement of our Great Art - the \nmeeting of science and imagination, \nnature and will."));
    slides.push_back(Slide("anne_images/11 n EWaste_GhanaDudes_big.jpg", ""));
    slides.push_back(Slide("anne_images/11 panos-image.jpg", ""));
    slides.push_back(Slide("anne_images/11 Picture-064.jpg", ""));
    slides.push_back(Slide("anne_images/11 state_in_the_Alley_(Silver_Spring,_MD).jpg", ""));
    slides.push_back(Slide("anne_images/11 urban-gold-mining.jpg", ""));
    slides.push_back(Slide("","And if the machines could speak what \nwould they say ? "));
    slides.push_back(Slide("anne_images/11 x recycled_scrap_q_48863.jpg", ""));
    slides.push_back(Slide("","TEXTS FROM:\nSteve Job.  Sent from my iPhone.06/2010.\nSudo, Zen computer, Mindfulness and \nthe Machine, 1999\nPS. Tecnomagxs, Cinco variaciones \nde circunstancias fónicas y una pausa. 2012/13\nGraham Harvey, Is your computer alive? Why we should treat rocks with respect. The \nevolver. 07/2010.\nSacha Loeve, Nos ordinateurs sèment la mort, Géo, 10/2012\n"));
}
void ProjectAnne::loadImages2() {
    slides.push_back(Slide("", ""));
    slides.push_back(Slide("", ""));
    slides.push_back(Slide("", ""));
    slides.push_back(Slide("", ""));
    slides.push_back(Slide("", ""));
    slides.push_back(Slide("", ""));
    slides.push_back(Slide("", ""));
    slides.push_back(Slide("", ""));
    slides.push_back(Slide("", ""));
    slides.push_back(Slide("", ""));
    slides.push_back(Slide("", ""));
    slides.push_back(Slide("anne_images/01 coper.jpg",""));
    slides.push_back(Slide("anne_images/03 lead_ore_40_50_60.jpg",""));
    slides.push_back(Slide("","“It is only because miners sweat their \nguts out that superior persons can \nremain superior."));
    slides.push_back(Slide("anne_images/03 plomb.jpg",""));
    slides.push_back(Slide("anne_images/04.Witherit.jpg",""));
    slides.push_back(Slide("anne_images/06cadmium.jpg",""));
    slides.push_back(Slide("anne_images/07 u 201309-an-employee-holds-gold-samples-at-the-ariab-mine.jpg",""));
    slides.push_back(Slide("anne_images/07gold.jpeg",""));
    slides.push_back(Slide("anne_images/07Rosia_Montana_Roman_Gold_Mines_2011_-_Wall_Detail-10.jpg",""));
    slides.push_back(Slide("anne_images/08 coltan-mining-democratic-republic-congo.jpg",""));
    slides.push_back(Slide("anne_images/08 golt.jpg",""));
    slides.push_back(Slide("anne_images/08 hqdefault.jpg",""));
    slides.push_back(Slide("","Technology is the concretisation of the \nvisions of shamans and magicians. \nEverything we use today was accomplished, \nimagined or dreamed, in ancient times. "));
    slides.push_back(Slide("anne_images/08 kdrc_mining.jpg",""));
    slides.push_back(Slide("anne_images/08 mark-craemer-mine.jpg",""));
    slides.push_back(Slide("anne_images/08 o congo rape victim.jpg",""));
    slides.push_back(Slide("anne_images/08 v conflict-mineral-min-two-men.jpg",""));
    slides.push_back(Slide("anne_images/08 whyImage.jpg",""));
    slides.push_back(Slide("anne_images/08_we ming.png",""));
    slides.push_back(Slide("anne_images/09 a bhma 34321730.jpg",""));
    slides.push_back(Slide("anne_images/09 a furl.jpeg",""));
    slides.push_back(Slide("anne_images/09 b 4833837888_cd495bdcb3_b.jpg",""));
    slides.push_back(Slide("anne_images/09 d 0311WIFFJOEL002.jpg",""));
    slides.push_back(Slide("","What is interesting is the use of the \nsmoke signal as a way of making the \nconnection reminding us of how technology \nserves to make the connection but the \ncommunication is in us. Magic has often \nbeen dismissed as illusion \nand technology as truth but their \nrelationship is far more complex than \nthis position would suggest. "));
    slides.push_back(Slide("anne_images/09 s PCB_manufacturing_plant_6.jpg",""));
    slides.push_back(Slide("anne_images/10 100 P1260622.JPG",""));
    slides.push_back(Slide("anne_images/10 111  IMG a electronics.jpg",""));
    slides.push_back(Slide("anne_images/10 111 IMG_2571.JPG",""));
    slides.push_back(Slide("anne_images/10 111 IMG_2716.JPG",""));
    slides.push_back(Slide("anne_images/10 20140212_081721.jpg",""));
    slides.push_back(Slide("anne_images/10 20140217_031631.jpg",""));
    slides.push_back(Slide("anne_images/10 20140217_034939.jpg",""));
    slides.push_back(Slide("anne_images/10 20140217_053248.jpg",""));
    slides.push_back(Slide("anne_images/10 a img c 20111211_ATT_Store_D3Sa-2011-12-11-10-55-06-TTP_5453_-Tony-Tang.jpg",""));
    slides.push_back(Slide("anne_images/10 a IMG_3153.JPG",""));
    slides.push_back(Slide("","However machines and electronics are made \nof the same materials as the earth itself, \nit is all connected. Marine creatures \nextract trace minerals from seawater to \nconstruct their shells, like we mine rare \nmetals for batteries. Technology is not \nsomething alien. Technology is the \nknowledge of doing. "));
    slides.push_back(Slide("anne_images/10 ah4.jpg",""));
    slides.push_back(Slide("anne_images/10 b electronics-merchandising-computer-displays.jpg",""));
    slides.push_back(Slide("anne_images/10 ciPad-5-in-Store-Release-Day-Render.jpg",""));
    slides.push_back(Slide("anne_images/10 dApple-Store.jpg",""));
    slides.push_back(Slide("anne_images/10 u Apple_Store_Grand_Central_027.jpg",""));
    slides.push_back(Slide("anne_images/11 a broken-circuit-board.jpg",""));
    slides.push_back(Slide("anne_images/11 a162794364-picture-taken-on-february-27-2013-shows-computer-parts.jpg.CROP.promo-mediumlarge.jpg",""));
    slides.push_back(Slide("","The aborigenal movements of Latin America \nhave resumed their ancestral technologies \nin the phrase Buen Vivir (to live well). \nThis \"living well\" is due to the intimate \ninterconnection with all living things - \nnot considering any form of life as \nsuperior to any other but, on the contrary, \nconsidering all with equal rights. Only \ndestruction can come from the anthropocentric \nview that all other forms of life are \nto be exploited without consideration \nfor the complex webs of life that \nall beings weave right down to the \nquantum level where Magic works"));
    slides.push_back(Slide("anne_images/11 ab3568_large.jpg",""));
    slides.push_back(Slide("anne_images/11 aee-waste.jpg",""));
    slides.push_back(Slide("anne_images/11 b 5085052062_dc608382b6_b.jpg",""));
    slides.push_back(Slide("anne_images/11 base64c0f3d6c8d15fc123.png",""));
    slides.push_back(Slide("anne_images/11 d Isaiah-a-still-from-TERRA-BLIGHT-a-documentary-directed-by-Isaac-Brown.jpg",""));
    slides.push_back(Slide("","For Paula Pin, the machine is no longer \nseperate but an intimate part of a new \ncyborg identity, the creation of a \nmetabody that englobes mechanical, mineral \nand organic life. She refers to the electronic \nprotheses that she creates as “alchemical \ninstruments” for understanding and revealing these \nnew natures. She also works with plants, \nwith performance and with noise - \nall concerned with opening out our \nidentity into what she calls \n“queer nature”."));
    slides.push_back(Slide("anne_images/11 E-waste-In-North-East.jpg",""));
    slides.push_back(Slide("anne_images/11 g.jpg",""));
    slides.push_back(Slide("anne_images/11 img3.jpg",""));
    slides.push_back(Slide("anne_images/11 lEwaste.jpg",""));
    slides.push_back(Slide("anne_images/11 ma ewaste1.gif",""));
    slides.push_back(Slide("anne_images/11 mm 3571_large.jpg",""));
    slides.push_back(Slide("anne_images/11 n Wire-Scrap.jpg",""));
    slides.push_back(Slide("anne_images/11 phone17.jpg",""));
    slides.push_back(Slide("anne_images/11 plastics-from-e-waste-from-national-geographic-photographer.jpg",""));
    slides.push_back(Slide("","Taking science into our own hands, DIY \nwithout waiting for approval, \nre-enchantment of the world and generation of \nunsuspected war machines. The cyborg as \narticulation of seperate ontologies - \ncreating monsters and angels, collapsing the \npatriarchal project of seperation. Queer \nas hacking of the gender system, perhaps \nthe most urgent of tecnomagical tasks. \nBiotech as pharmatech, automedicating \nourselves with chemical technologies, \ntuning our body chemistries, falling in \nlove, so the the magic can flow."));
};





void ProjectIsabelle::setup(int width, int height) {
    Scene::setup(width, height);
    font.loadFont("AndaleMono.ttf", 22);
    idx = 0;
}

void ProjectIsabelle::setScreen(int theScreen) {
    
    if (theScreen==0) {
        player.loadMovie("terri_videos/Sequence_01-960x540.mp4");
    }
    else if (theScreen == 1) {
        player.loadMovie("terri_videos/Sequence_02-960x540.mp4");
    }
    else if (theScreen == 2) {
        player.loadMovie("terri_videos/Sequence_03-960x540.mp4");
    }
    else if (theScreen == 3) {
        player.loadMovie("terri_videos/Sequence_04-960x540.mp4");
    }
    player.setLoopState(OF_LOOP_NORMAL);
    player.play();

    
    imgPaths1.push_back("isabelle_pictures/nature/5474953677_8b1528452f_o.jpg");
    imgPaths1.push_back("isabelle_pictures/nature/5937558249_11c9a12962_o.jpg");
    imgPaths1.push_back("isabelle_pictures/nature/13801996963_0020392990_k.jpg");
    imgPaths1.push_back("isabelle_pictures/nature/14044773428_5caf961871_k.jpg");
    imgPaths1.push_back("isabelle_pictures/nature/before tar sands.jpg");
    imgPaths1.push_back("isabelle_pictures/nature/couchers-de-soleil-paysages-nature-animaux-photographie-zèbres-de-lAfrique.jpg");
    imgPaths1.push_back("isabelle_pictures/nature/The-incredible-nature-animal-photography-1.jpg");
    
    imgPaths2.push_back("isabelle_pictures/destruction/1280px-Corduroy_road_01_by_Pengo.jpg");
    imgPaths2.push_back("isabelle_pictures/destruction/beef.jpg");
    imgPaths2.push_back("isabelle_pictures/destruction/energy-oil-pumps.jpg");
    imgPaths2.push_back("isabelle_pictures/destruction/Garth Lenz TarSands- .jpg");
    imgPaths2.push_back("isabelle_pictures/destruction/ocean-waves-picture-170.jpg");
    imgPaths2.push_back("isabelle_pictures/destruction/ocean.jpg");
    imgPaths2.push_back("isabelle_pictures/destruction/overfish.jpg");
    imgPaths2.push_back("isabelle_pictures/destruction/poultry.jpg");
    imgPaths2.push_back("isabelle_pictures/destruction/tar sands.jpg");
    
    for (int i=0; i<imgPaths1.size(); i++) {
        ofImage img;
        img.loadImage(imgPaths1[i]);
        img.resize(800, 800 * img.width / img.height);
        imgs1.push_back(img);
    }
    for (int i=0; i<imgPaths2.size(); i++) {
        ofImage img;
        img.loadImage(imgPaths2[i]);
        img.resize(800, 800 * img.width / img.height);
        imgs2.push_back(img);
    }
}

void ProjectIsabelle::setMode(int mode) {
    this->mode = mode;
    if (mode == 0) {
        
    }
    else if (mode == 1) {
        player.stop();
    }
    else if (mode == 2) {
        player.stop();
    }
}

void ProjectIsabelle::update() {
    if (mode == 0) {
        player.update();
    }
    else {
        int t = ofGetFrameNum()-last;
//        if (t == 0.5*interval) {
        if (toUpdate) {
            /*
            int idx2 = idx;
            while (idx2 == idx) {
                if      (mode == 0)  {}
                else if (mode == 1)  idx2 = (int) ofRandom(imgs1.size());
                else if (mode == 2)  idx2 = (int) ofRandom(imgs2.size());
            }
            idx = idx2;
             */
            if      (mode == 0)  {}
            else if (mode == 1)  idx = (idx+1) % imgs1.size();
            else if (mode == 2)  idx = (idx+1) % imgs2.size();
            toUpdate = false;
        }
        alpha = 255; // ofClamp(ofMap(abs(t - 0.5*interval), 0, 0.5*interval, 0, 255), 0, 255);
    }
}

void ProjectIsabelle::next() {
    last = ofGetFrameNum();
    toUpdate = true;
}

void ProjectIsabelle::draw(int x, int y) {
    ofPushMatrix();
    ofPushStyle();
    ofTranslate(x, y);
    
    ofBackground(0);
    
    // projector 2 no projection
    
    ofTranslate(getWidth(), getHeight());//ofGetMouseX(), ofGetMouseY());
    ofRotate(180);
    
    ofSetColor(255, alpha);
    if (mode == 0) {
        ofSetColor(255, 255);
        player.draw(0, 0, getWidth(), getHeight());
    }
    else if (mode == 1) {
        imgs1[idx].draw(0, 0.5*(getHeight()-imgs1[idx].height));
    }
    else if (mode == 2) {
        imgs2[idx].draw(0, 0.5*(getHeight()-imgs2[idx].height));
    }
    
    ofPopStyle();
    ofPopMatrix();
}
