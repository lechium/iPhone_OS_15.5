//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBApplicationSceneEntity;

@interface SBInCallSceneUpdateWorkspaceTransaction
{
    SBApplicationSceneEntity *_applicationSceneEntity;	// 8 = 0x8
    CDUnknownBlockType _postSceneUpdateHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000032d056
@property(copy, nonatomic) CDUnknownBlockType postSceneUpdateHandler; // @synthesize postSceneUpdateHandler=_postSceneUpdateHandler;
- (void)_begin;	// IMP=0x000000000032cdf4
- (id)initWithApplicationSceneEntity:(id)arg1 transitionRequest:(id)arg2;	// IMP=0x000000000032cd7c

@end

