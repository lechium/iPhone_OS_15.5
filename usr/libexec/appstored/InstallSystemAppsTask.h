//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface InstallSystemAppsTask
{
    _Bool _disableAutoInstall;	// 8 = 0x8
    NSArray *_installs;	// 16 = 0x10
    _Bool _reportRemoteProgress;	// 24 = 0x18
    NSArray *_processedExternalIDs;	// 32 = 0x20
}

+ (id)taskWithXPCAppMetadata:(id)arg1 requestToken:(id)arg2;	// IMP=0x00400000001cc128
- (void).cxx_destruct;	// IMP=0x00200000001cd214
- (id)_itemIDForBundleID:(id)arg1;	// IMP=0x00100000001ccea1
- (id)_filterApplicableInstallations;	// IMP=0x00100000001cc8c1
- (void)main;	// IMP=0x00100000001cc3a5
@property(readonly) NSArray *processedExternalIDs; // @synthesize processedExternalIDs=_processedExternalIDs;
- (id)initWithInstalls:(id)arg1 externalIDs:(id)arg2;	// IMP=0x00100000001cc289

@end
