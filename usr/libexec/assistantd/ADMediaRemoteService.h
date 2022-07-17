//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSObject, NSSet;
@protocol ADService, ADVolumeTracking, OS_dispatch_queue;

@interface ADMediaRemoteService
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSArray *_commandsToIgnore;	// 16 = 0x10
    id <ADService> _whaService;	// 24 = 0x18
    NSSet *_whaServiceSupportedCommands;	// 32 = 0x20
    id <ADVolumeTracking> _volumeTracker;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000013c34e
@property(readonly, nonatomic) id <ADVolumeTracking> volumeTracker; // @synthesize volumeTracker=_volumeTracker;
- (id)targetQueue;	// IMP=0x001000000013c328
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000013b517
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x001000000013b50f
- (id)commandsForDomain:(id)arg1;	// IMP=0x001000000013b45c
- (id)_commandsForDomain:(id)arg1;	// IMP=0x001000000013b2a1
- (id)domains;	// IMP=0x001000000013b229
- (id)handle;	// IMP=0x001000000013b220
- (id)initWithQueue:(id)arg1 volumeTracker:(id)arg2 whaService:(id)arg3;	// IMP=0x001000000013b0e5
- (void)_buildCacheOfWhaServiceSupportedCommands;	// IMP=0x001000000013ad0a

@end
