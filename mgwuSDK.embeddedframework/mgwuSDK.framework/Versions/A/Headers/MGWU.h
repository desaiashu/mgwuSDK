//
//  MGWU.h
//  CrossPromoWidget
//
//  Created by Ashu Desai on 4/7/12.
//  Copyright (c) 2012 makegameswithus inc. All rights reserved.
//
//  Contains open source code from Crashlytics, Inc. (SecureUDID), Matej Bukovinski (MBProgressHUD), Stig Brautaset (SBJson), Facebook (FacebookConnect iOS), thank you to all!
//
//  MGWU_BUILD_NUMBER 23
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
+ (void)displayCrossPromo;
+ (void)display; //Depricated DO NOT USE!!!!


/////////////////////////////////////////////////////////////////////////////////
//
//About:
//
+ (void)displayAboutPage;


/////////////////////////////////////////////////////////////////////////////////
//
//Analytics:
//
+ (void)logEvent:(NSString*)eventName;
+ (void)logEvent:(NSString*)eventName withParams:(NSDictionary*)params;


/////////////////////////////////////////////////////////////////////////////////
//
//Global High Scores:
//
+ (void)submitHighScore:(int)score byPlayer:(NSString*)player forLeaderboard:(NSString*)leaderboard;
+ (void)getHighScoresForLeaderboard:(NSString*)l withCallback:(SEL)m onTarget:(id)t;
+ (void)getHighScoresForMultipleLeaderboards:(NSArray*)l withCallback:(SEL)m onTarget:(id)t;


/////////////////////////////////////////////////////////////////////////////////
//
//Encrypted NSUserDefaults
//
+(void) setObject:(id)object forKey:(NSString*)keyword;
+(id) objectForKey:(NSString*)keyword;


/////////////////////////////////////////////////////////////////////////////////
//
//Async multiplayer
//
+ (NSString*)getUsername;
+ (NSString*)shortName:(NSString*)friendname;
+ (void)getMyInfoWithCallback:(SEL)m onTarget:(id)t;
+ (void)move:(NSDictionary*)move withMoveNumber:(int)moveNumber forGame:(int)gameId withGameState:(NSString*)gameState withGameData:(NSDictionary*)gameData againstPlayer:(NSString*)friendId withCallback:(SEL)m onTarget:(id)t;
+ (void)getGame:(int)gameId withCallback:(SEL)m onTarget:(id)t;
+ (NSMutableArray *)friendsToInvite;
+ (void)getPlayerWithUsername:(NSString*)user withCallback:(SEL)m onTarget:(id)t;
+ (void)getRandomPlayerWithCallback:(SEL)m onTarget:(id)t;

/////////////////////////////////////////////////////////////////////////////////
//
//Multiplayer Messaging
//
+ (void)getMessagesWithFriend:(NSString*)friendId andCallback:(SEL)m onTarget:(id)t;
+ (void)sendMessage:(NSString*)message toFriend:(NSString*)friendId andCallback:(SEL)m onTarget:(id)t;



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
