//
// Created by federico on 28/02/22.
//

#ifndef CNN_XILINX_CONV_WEIGHTS_H
#define CNN_XILINX_CONV_WEIGHTS_H

float conv_bias[32] = { -4.277520999312400818e-02,-4.995345603674650192e-03,-3.847566246986389160e-01,-1.897756941616535187e-02,-1.909808814525604248e-02,-2.122625857591629028e-01,-1.276428997516632080e-01,9.670273959636688232e-02,-9.135927259922027588e-02,-1.733137667179107666e-01,-1.585222966969013214e-02,-6.168414372950792313e-03,1.600201800465583801e-02,-2.216261476278305054e-01,-1.020839139819145203e-01,-1.767002046108245850e-01,-9.742478281259536743e-02,-4.061908423900604248e-01,7.145161926746368408e-02,5.192263051867485046e-02,-7.369531691074371338e-02,-1.802464872598648071e-01,-1.009753793478012085e-01,-3.059919178485870361e-01,-2.596011459827423096e-01,-2.097806483507156372e-01,-2.223958373069763184e-01,-8.172205649316310883e-03,-7.292307913303375244e-02,-5.723609775304794312e-02,-7.841642946004867554e-02,-1.361318975687026978e-01};
float conv_weights[3][3][1][32] = {-5.256499052047729492e-01,-4.377189278602600098e-01,3.739455342292785645e-01,-5.258729457855224609e-01,-6.063981447368860245e-03,3.354029655456542969e-01,-1.519874483346939087e-01,-1.096003413200378418e+00,2.677171230316162109e-01,9.120374917984008789e-02,9.432397782802581787e-02,-3.844707608222961426e-01,-7.233453989028930664e-01,3.455648943781852722e-02,3.437091596424579620e-03,2.068047523498535156e-01,1.175515875220298767e-01,4.007558822631835938e-01,-1.043203234672546387e+00,8.046048693358898163e-03,-1.559087634086608887e-01,-5.401154160499572754e-01,-1.643329560756683350e-01,3.169970214366912842e-01,3.283802866935729980e-01,-4.122816622257232666e-01,2.666144073009490967e-01,3.114705681800842285e-01,-6.515624523162841797e-01,7.883231341838836670e-02,2.816916704177856445e-01,-4.303025826811790466e-02,-4.135587513446807861e-01,-3.852725327014923096e-01,-9.462354332208633423e-02,-6.157976388931274414e-01,-3.671535849571228027e-01,2.180954664945602417e-01,1.717366427183151245e-01,-5.333556532859802246e-01,-3.699253201484680176e-01,9.515629708766937256e-02,1.661214232444763184e-01,-7.689849138259887695e-01,-3.085497319698333740e-01,1.473682820796966553e-01,-1.175157376565039158e-03,4.507988989353179932e-01,-3.697722554206848145e-01,-2.140931785106658936e-01,-5.493876934051513672e-01,4.182265996932983398e-01,9.386564046144485474e-02,1.128459349274635315e-01,-7.805351167917251587e-02,2.911490201950073242e-01,-7.880919612944126129e-03,-2.399330586194992065e-01,1.253826916217803955e-01,2.974299788475036621e-01,-6.742764711380004883e-01,-6.642374396324157715e-01,1.692690253257751465e-01,5.359205976128578186e-02,-6.217719987034797668e-02,-1.884543299674987793e-01,-3.674996793270111084e-01,-4.542679488658905029e-01,-1.994993537664413452e-01,-6.967394948005676270e-01,4.833475127816200256e-02,-7.172833681106567383e-01,7.474086433649063110e-02,-1.219544187188148499e-01,4.076150357723236084e-01,-2.537479102611541748e-01,-1.191035881638526917e-01,1.406394243240356445e-01,9.738059714436531067e-03,2.573719024658203125e-01,-7.469586133956909180e-01,-5.797618031501770020e-01,7.369150966405868530e-02,5.248786807060241699e-01,-3.215258195996284485e-02,3.956222832202911377e-01,9.186635166406631470e-02,2.236804552376270294e-02,-5.536444187164306641e-01,8.313307166099548340e-02,-2.776216864585876465e-01,-8.463416695594787598e-01,-6.226404309272766113e-01,3.539159297943115234e-01,-8.279225975275039673e-02,1.236707791686058044e-01,-2.248570621013641357e-01,4.285678267478942871e-01,1.729618459939956665e-01,3.699485957622528076e-02,2.135252766311168671e-02,4.944553077220916748e-01,-1.914003044366836548e-01,1.002621427178382874e-01,4.199767708778381348e-01,4.692471772432327271e-02,1.472777128219604492e-01,-8.287830948829650879e-01,-2.336155176162719727e-01,5.679036676883697510e-02,3.118017017841339111e-01,-3.344860076904296875e-01,4.488250911235809326e-01,4.204976856708526611e-01,-5.553532242774963379e-01,-5.177941918373107910e-01,2.753010094165802002e-01,-7.248194813728332520e-01,2.814494445919990540e-02,-2.115723043680191040e-01,-3.577974811196327209e-02,-2.854049205780029297e-01,-3.371039032936096191e-02,4.599656462669372559e-01,2.708114087581634521e-01,4.976712465286254883e-01,4.100521802902221680e-01,9.459213912487030029e-02,2.324749082326889038e-01,5.549995303153991699e-01,1.105253770947456360e-01,1.559148579835891724e-01,2.152584344148635864e-01,2.098741009831428528e-03,-3.991923108696937561e-02,1.446724534034729004e-01,-7.202063202857971191e-01,9.262507082894444466e-04,3.594372868537902832e-01,-9.673094749450683594e-02,4.543115496635437012e-01,1.810994148254394531e-01,2.742960751056671143e-01,2.702265381813049316e-01,1.781609356403350830e-01,1.723781377077102661e-01,2.658908963203430176e-01,4.724932014942169189e-01,2.738664746284484863e-01,1.616266667842864990e-01,2.692378461360931396e-01,2.159864641726016998e-02,4.091385006904602051e-01,1.094592064619064331e-01,-1.928576454520225525e-02,1.945279687643051147e-01,5.726900324225425720e-02,-9.296161532402038574e-01,-9.153400361537933350e-02,-1.096611935645341873e-02,2.619277834892272949e-01,3.654667735099792480e-01,-7.264731079339981079e-02,-1.714646667242050171e-01,3.575082719326019287e-01,-4.899804294109344482e-01,1.460435688495635986e-01,-9.416848421096801758e-01,2.573410868644714355e-01,-3.690757602453231812e-02,3.040349297225475311e-02,4.249269366264343262e-01,1.656164973974227905e-01,-2.118473649024963379e-01,1.140706837177276611e-01,2.621611058712005615e-01,-7.352569103240966797e-01,-5.179756879806518555e-01,3.764685690402984619e-01,5.063208192586898804e-02,8.749088644981384277e-02,3.306324481964111328e-01,2.398178279399871826e-01,1.964190900325775146e-01,1.575841307640075684e-01,3.189284205436706543e-01,2.691099345684051514e-01,-8.471636176109313965e-01,-3.714298307895660400e-01,4.699492454528808594e-01,-5.208706855773925781e-01,-8.222335018217563629e-03,4.882185757160186768e-01,-4.350129887461662292e-02,-6.289564818143844604e-02,3.995802402496337891e-01,1.615909934043884277e-01,3.223239779472351074e-01,1.181898117065429688e-01,5.286402106285095215e-01,2.807083725929260254e-01,5.603813007473945618e-02,-5.130863785743713379e-01,-4.326331317424774170e-01,5.918956920504570007e-02,3.523476794362068176e-02,-3.325624465942382812e-01,-7.777548432350158691e-01,3.345206975936889648e-01,1.092900931835174561e-01,-9.100377559661865234e-01,-1.176955461502075195e+00,-1.753709614276885986e-01,-5.343083143234252930e-01,1.030985638499259949e-01,-3.103730380535125732e-01,-3.465563058853149414e-01,2.423960119485855103e-01,5.153667926788330078e-02,-2.140734791755676270e-01,4.841133654117584229e-01,3.463223874568939209e-01,-3.935815393924713135e-02,1.578146219253540039e-01,3.183035552501678467e-01,-2.019635736942291260e-01,1.623743474483489990e-01,3.653418421745300293e-01,-4.041047766804695129e-03,-4.097861051559448242e-01,2.509095370769500732e-01,4.241844117641448975e-01,-4.293631911277770996e-01,1.117181703448295593e-01,-5.958237051963806152e-01,4.245557487010955811e-01,1.470131129026412964e-01,-3.510588034987449646e-02,-2.256273925304412842e-01,-7.206577062606811523e-01,3.567484617233276367e-01,4.224646389484405518e-01,-5.048546940088272095e-02,-6.627094149589538574e-01,-2.061776816844940186e-01,5.078202858567237854e-02,1.104967743158340454e-01,-1.683232933282852173e-01,5.912908911705017090e-02,1.763836592435836792e-01,1.817578077316284180e-02,-9.104505181312561035e-01,3.781520128250122070e-01,-6.205317378044128418e-01,-3.010320067405700684e-01,2.410665899515151978e-01,-2.866337895393371582e-01,-3.005451858043670654e-01,2.972923219203948975e-01,1.185944676399230957e-01,-2.097668349742889404e-01,-5.277102589607238770e-01,1.204471918754279613e-04,-2.506269812583923340e-01,2.380100935697555542e-01,2.167016565799713135e-01,-6.796088814735412598e-01,3.168689310550689697e-01,-5.476136133074760437e-02,2.514133751392364502e-01,1.260488927364349365e-01,1.716176047921180725e-02,-3.186180293560028076e-01,1.270260810852050781e-01,2.839486598968505859e-01,-1.222446322441101074e+00,9.367802739143371582e-02,2.987162768840789795e-01,-3.327652513980865479e-01,3.463401198387145996e-01,2.050835639238357544e-01,5.391548946499824524e-02,2.222997099161148071e-01,-7.010457515716552734e-01,1.467006653547286987e-01,1.372913420200347900e-01,-1.769694685935974121e-01,-2.315060943365097046e-01};
float image[28 * 28 * 1] = { 0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,1.176470611244440079e-02,7.058823853731155396e-02,7.058823853731155396e-02,7.058823853731155396e-02,4.941176474094390869e-01,5.333333611488342285e-01,6.862745285034179688e-01,1.019607856869697571e-01,6.509804129600524902e-01,1.000000000000000000e+00,9.686274528503417969e-01,4.980392158031463623e-01,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,1.176470592617988586e-01,1.411764770746231079e-01,3.686274588108062744e-01,6.039215922355651855e-01,6.666666865348815918e-01,9.921568632125854492e-01,9.921568632125854492e-01,9.921568632125854492e-01,9.921568632125854492e-01,9.921568632125854492e-01,8.823529481887817383e-01,6.745098233222961426e-01,9.921568632125854492e-01,9.490196108818054199e-01,7.647058963775634766e-01,2.509804069995880127e-01,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,1.921568661928176880e-01,9.333333373069763184e-01,9.921568632125854492e-01,9.921568632125854492e-01,9.921568632125854492e-01,9.921568632125854492e-01,9.921568632125854492e-01,9.921568632125854492e-01,9.921568632125854492e-01,9.921568632125854492e-01,9.843137264251708984e-01,3.647058904170989990e-01,3.215686380863189697e-01,3.215686380863189697e-01,2.196078449487686157e-01,1.529411822557449341e-01,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,7.058823853731155396e-02,8.588235378265380859e-01,9.921568632125854492e-01,9.921568632125854492e-01,9.921568632125854492e-01,9.921568632125854492e-01,9.921568632125854492e-01,7.764706015586853027e-01,7.137255072593688965e-01,9.686274528503417969e-01,9.450980424880981445e-01,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,3.137255012989044189e-01,6.117647290229797363e-01,4.196078479290008545e-01,9.921568632125854492e-01,9.921568632125854492e-01,8.039215803146362305e-01,4.313725605607032776e-02,0.000000000000000000e+00,1.686274558305740356e-01,6.039215922355651855e-01,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,5.490196123719215393e-02,3.921568859368562698e-03,6.039215922355651855e-01,9.921568632125854492e-01,3.529411852359771729e-01,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,5.450980663299560547e-01,9.921568632125854492e-01,7.450980544090270996e-01,7.843137718737125397e-03,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,4.313725605607032776e-02,7.450980544090270996e-01,9.921568632125854492e-01,2.745098173618316650e-01,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,1.372549086809158325e-01,9.450980424880981445e-01,8.823529481887817383e-01,6.274510025978088379e-01,4.235294163227081299e-01,3.921568859368562698e-03,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,3.176470696926116943e-01,9.411764740943908691e-01,9.921568632125854492e-01,9.921568632125854492e-01,4.666666686534881592e-01,9.803921729326248169e-02,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,1.764705926179885864e-01,7.294117808341979980e-01,9.921568632125854492e-01,9.921568632125854492e-01,5.882353186607360840e-01,1.058823540806770325e-01,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,6.274510174989700317e-02,3.647058904170989990e-01,9.882352948188781738e-01,9.921568632125854492e-01,7.333333492279052734e-01,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,9.764705896377563477e-01,9.921568632125854492e-01,9.764705896377563477e-01,2.509804069995880127e-01,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,1.803921610116958618e-01,5.098039507865905762e-01,7.176470756530761719e-01,9.921568632125854492e-01,9.921568632125854492e-01,8.117647171020507812e-01,7.843137718737125397e-03,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,1.529411822557449341e-01,5.803921818733215332e-01,8.980392217636108398e-01,9.921568632125854492e-01,9.921568632125854492e-01,9.921568632125854492e-01,9.803921580314636230e-01,7.137255072593688965e-01,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,9.411764889955520630e-02,4.470588266849517822e-01,8.666666746139526367e-01,9.921568632125854492e-01,9.921568632125854492e-01,9.921568632125854492e-01,9.921568632125854492e-01,7.882353067398071289e-01,3.058823645114898682e-01,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,9.019608050584793091e-02,2.588235437870025635e-01,8.352941274642944336e-01,9.921568632125854492e-01,9.921568632125854492e-01,9.921568632125854492e-01,9.921568632125854492e-01,7.764706015586853027e-01,3.176470696926116943e-01,7.843137718737125397e-03,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,7.058823853731155396e-02,6.705882549285888672e-01,8.588235378265380859e-01,9.921568632125854492e-01,9.921568632125854492e-01,9.921568632125854492e-01,9.921568632125854492e-01,7.647058963775634766e-01,3.137255012989044189e-01,3.529411926865577698e-02,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,2.156862765550613403e-01,6.745098233222961426e-01,8.862745165824890137e-01,9.921568632125854492e-01,9.921568632125854492e-01,9.921568632125854492e-01,9.921568632125854492e-01,9.568627476692199707e-01,5.215686559677124023e-01,4.313725605607032776e-02,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,5.333333611488342285e-01,9.921568632125854492e-01,9.921568632125854492e-01,9.921568632125854492e-01,8.313725590705871582e-01,5.294117927551269531e-01,5.176470875740051270e-01,6.274510174989700317e-02,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00,0.000000000000000000e+00
};
#endif //CNN_XILINX_CONV_WEIGHTS_H

