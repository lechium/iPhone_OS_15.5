//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/FBSceneObserver-Protocol.h>

@class FBScene, NSError, NSSet;

@protocol FBSceneDelegate <FBSceneObserver>

@optional
- (void)sceneDidDeactivate:(FBScene *)arg1 withError:(NSError *)arg2;
- (void)scene:(FBScene *)arg1 didReceiveActions:(NSSet *)arg2;
@end
