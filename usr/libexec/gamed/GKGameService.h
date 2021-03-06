//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKGameService
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00200000001be09b
+ (Class)interfaceClass;	// IMP=0x00100000001be08a
- (oneway void)_getPerGameFriendsPlayerIDForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00200000001c1255
- (oneway void)resetTCCAuthorization:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c0fc4
- (oneway void)checkTCCAuthorization:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c0c58
- (oneway void)getPerGameFriendsForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c037f
- (oneway void)setPerGameSettings:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001bf60a
- (oneway void)getPerGameSettingsForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001bed19
- (oneway void)getArcadeHighlightForAdamID:(id)arg1 count:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001be0a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

