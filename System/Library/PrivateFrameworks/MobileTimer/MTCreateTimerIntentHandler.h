//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileTimer/INCreateTimerIntentHandling-Protocol.h>

@class NSString;

@interface MTCreateTimerIntentHandler <INCreateTimerIntentHandling>
{
}

- (_Bool)_isPlayingMediaFromMRPlaybackState:(unsigned int)arg1;	// IMP=0x000000000002f3c7
- (_Bool)_timer:(id)arg1 conflictsWithRunningTimersInTimers:(id)arg2;	// IMP=0x000000000002f2d4
- (id)_responseToCreateTimerIntent:(id)arg1 withCreatedTimer:(id)arg2 error:(id)arg3 dryRun:(_Bool)arg4;	// IMP=0x000000000002ef5a
- (void)_createTimerWithIntent:(id)arg1 dryRun:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002df80
- (void)_checkNowPlayingMediaState:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ddfc
- (void)handleCreateTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002dd18
- (void)confirmCreateTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002dc2c
- (void)resolveTypeForCreateTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d584
- (void)resolveDurationForCreateTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d231
- (void)resolveLabelForCreateTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002c954

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

