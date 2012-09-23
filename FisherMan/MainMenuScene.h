//
//  MainMenuLayer.h
//  FisherMan
//
//  Created by Khalid Al-Kooheji on 9/21/12.
//
//

#import <GameKit/GameKit.h>

// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"
#import "Box2D.h"
#import "GLES-Render.h"


@interface MainMenuLayer : CCLayer <GKAchievementViewControllerDelegate, GKLeaderboardViewControllerDelegate>
{

}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end
