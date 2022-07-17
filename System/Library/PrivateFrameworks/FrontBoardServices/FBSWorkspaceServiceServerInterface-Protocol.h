//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FBSSceneMessage, FBSSceneParameters, FBSSceneSettingsDiff, FBSSceneTransitionContext, NSSet, NSString;
@protocol __BSAction__;

@protocol FBSWorkspaceServiceServerInterface
- (oneway void)willTerminateWithTransitionContext:(FBSSceneTransitionContext *)arg1;
- (oneway void)sceneID:(NSString *)arg1 sendMessage:(FBSSceneMessage *)arg2 completion:(void (^)(FBSSceneMessage *, NSError *))arg3;
- (oneway void)sceneID:(NSString *)arg1 sendActions:(NSSet<__BSAction__> *)arg2;
- (oneway void)sendActions:(NSSet<__BSAction__> *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)sceneID:(NSString *)arg1 destroyWithTransitionContext:(FBSSceneTransitionContext *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)sceneID:(NSString *)arg1 updateWithSettingsDiff:(FBSSceneSettingsDiff *)arg2 transitionContext:(FBSSceneTransitionContext *)arg3 completion:(void (^)(FBSWorkspaceSceneUpdateResponse *, NSError *))arg4;
- (oneway void)reconnectWithSceneID:(NSString *)arg1 parameters:(FBSSceneParameters *)arg2 transitionContext:(FBSSceneTransitionContext *)arg3 completion:(void (^)(FBSWorkspaceSceneUpdateResponse *, NSError *))arg4;
- (oneway void)createWithSceneID:(NSString *)arg1 groupID:(NSString *)arg2 parameters:(FBSSceneParameters *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4 completion:(void (^)(FBSWorkspaceCreateSceneResponse *, NSError *))arg5;
@end
