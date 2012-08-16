//
//  MGWU.h
//  CrossPromoWidget
//
//  Created by Ashu Desai on 4/7/12.
//  Copyright (c) 2012 makegameswithus inc. All rights reserved.
//
//  Contains open source code from Crashlytics, Inc. (SecureUDID), Matej Bukovinski (MBProgressHUD), Stig Brautaset (SBJson), Facebook (FacebookConnect iOS), thank you to all!
//
//  MGWU_BUILD_NUMBER 3
//

#import <UIKit/UIKit.h>
#import <FacebookSDK/FacebookSDK.h>

@interface MGWU : UIViewController


/////////////////////////////////////////////////////////////////////////////////
//
//General Setup:
//
+ (void)loadMGWU:(NSString*)dev;
+ (void)debug;
+ (void)forceFacebook;

/////////////////////////////////////////////////////////////////////////////////
//
//More Games:
//
+ (void)display;


/////////////////////////////////////////////////////////////////////////////////
//
//Global High Scores:
//
+ (void)submitHighScore:(int)score byPlayer:(NSString*)player forLeaderboard:(NSString*)leaderboard;
+ (void)getHighScoresForLeaderboard:(NSString*)l withCallback:(SEL)m onTarget:(id)t;
+ (void)getHighScoresForMultipleLeaderboards:(NSArray*)l withCallback:(SEL)m onTarget:(id)t;


/////////////////////////////////////////////////////////////////////////////////
//
//Analytics:
//
+ (void)logEvent:(NSString*)eventName;
+ (void)logEvent:(NSString*)eventName withParams:(NSDictionary*)params;


/////////////////////////////////////////////////////////////////////////////////
//
//Async gameplay
//
+ (void)getMyInfoWithCallback:(SEL)m onTarget:(id)t;
+ (void)move:(NSDictionary*)move withMoveNumber:(int)moveNumber forGame:(int)gameID withGameState:(NSString*)gameState withGameData:(NSDictionary*)gameData againstPlayer:(NSString*)friend withCallback:(SEL)m onTarget:(id)t;
+ (NSString*)getUsername;
+ (BOOL)isFacebookActive;
+ (NSArray *)friendsToInvite;
+ (void)getPlayerWithUsername:(NSString*)user withCallback:(SEL)m onTarget:(id)t;
+ (void)getRandomPlayerWithCallback:(SEL)m onTarget:(id)t;

/////////////////////////////////////////////////////////////////////////////////
//
//Methods for Facebook:
//
+(void)closefb;
+(BOOL)handleURL:(NSURL*)url;

/////////////////////////////////////////////////////////////////////////////////
//
//Methods for Push Notifications:
//
+ (void)registerForPush:(NSData *)tokenId;
+ (void)gotPush:(NSDictionary *)userInfo;
+ (void)failedPush:(NSError *)error;

@end
