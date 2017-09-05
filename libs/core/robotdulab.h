/*
 * Copyright (C) 2008 Laboratoire d'Aix-périmentation et de Bidouille
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software< /span>
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

 #ifndef _ROBOTDULAB_H_
 #define _ROBOTDULAB_H_
 
 /** Constants */
 
 /** Couleurs */
 enum class Color
 {
     NOIR     = (0), 
     ROUGE    = (1), 
     VERT     = (2), 
     MAGENTA  = (3), 
     BLEU     = (4), 
     BLANC    = (5), 
     TURQUOISE= (6), 
     JAUNE    = (7), 
     VIOLET   = (8), 
 };
 
 /** Sens de rotation servomoteur */
enum class Direction
 {
//% block="left"
LEFT,
//% block="right"
RIGHT
 };
 
 /** Gestion de l'anneau de LED */
 
 const int NB_LED = 16;
 
 enum class TypeAnimationLED
 {
     COULEUR = (1),
     ARC_EN_CIEL = (2),
     ARC_EN_CIEL_CYCLIQUE = (3),
     COULEUR_CYCLIQUE = (4),
 };
 
 
  
 class RobotDuLAB {
 
     public:
 
         // Constructor(s)
         RobotDuLAB() {}
 
         virtual ~RobotDuLAB() {}
 
         void begin();
 
         void Arreter();
 
         void Avancer();
 
         void Reculer();
 
         void TournerAGauche();
 
         void TournerADroite();
 
         void AnimerAnneauLed(choix_animation_anneau_led_t choix, couleur_index_t couleur);
 
         long getDistanceObstacle();
 
     private:
         void MettreEnMouvement(sens_rotation_t sensRoueDroite, sens_rotation_t sensRoueGauche);
 
         void eteindreAnneauDeLed();
 
         long microsecondsEnCentimetres(long microseconds)
         {
             // The speed of sound is 340 m/s or 29 microseconds per centimeter.
             // The ping travels out and back, so to find the distance of the
             // object we take half of the distance travelled.
             return microseconds / 29 / 2;
         }
 };
 
 #endif /* _ROBOTDULAB_H_ */