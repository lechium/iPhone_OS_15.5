//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoardServices/RBSProcessHandle.h>

#import <FrontBoardServices/FBSSceneClientIdentifying-Protocol.h>

@class NSString;

@interface RBSProcessHandle (FBSSceneClientIdentity) <FBSSceneClientIdentifying>
- (id)fbs_sceneClientIdentity;	// IMP=0x000000000005c96a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
