//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoard/NSObject-Protocol.h>

@class FBSSceneClientSettings, FBSSceneClientSettingsDiff, FBSSceneTransitionContext, FBScene, FBSceneClientHandle, FBSceneUpdateContext, NSError;

@protocol FBSceneObserver <NSObject>

@optional
- (void)scene:(FBScene *)arg1 didUpdateClientSettingsWithDiff:(FBSSceneClientSettingsDiff *)arg2 oldClientSettings:(FBSSceneClientSettings *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4;
- (void)scene:(FBScene *)arg1 didCompleteUpdateWithContext:(FBSceneUpdateContext *)arg2 error:(NSError *)arg3;
- (void)scene:(FBScene *)arg1 didApplyUpdateWithContext:(FBSceneUpdateContext *)arg2;
- (void)scene:(FBScene *)arg1 didPrepareUpdateWithContext:(FBSceneUpdateContext *)arg2;
- (void)scene:(FBScene *)arg1 clientDidConnect:(FBSceneClientHandle *)arg2;
- (void)sceneDidInvalidate:(FBScene *)arg1;
- (void)sceneWillDeactivate:(FBScene *)arg1 withError:(NSError *)arg2;
- (void)sceneDidActivate:(FBScene *)arg1;
- (void)sceneContentStateDidChange:(FBScene *)arg1;
@end
