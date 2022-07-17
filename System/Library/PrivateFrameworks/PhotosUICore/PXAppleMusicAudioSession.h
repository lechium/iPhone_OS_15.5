//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSObject, NSString, PXAppleMusicPlayerController;
@protocol OS_dispatch_queue, OS_os_log;

@interface PXAppleMusicAudioSession <PXChangeObserver>
{
    _Bool _stateQueue_isPreparingToPlay;	// 8 = 0x8
    _Bool _stateQueue_hasSeekedOrPlayed;	// 9 = 0x9
    _Bool _stateQueue_shouldPlayWhenPrepared;	// 10 = 0xa
    NSString *_playerClientIdentifier;	// 16 = 0x10
    PXAppleMusicPlayerController *_playerController;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_stateQueue;	// 32 = 0x20
    long long _stateQueue_playerPlaybackState;	// 40 = 0x28
    NSObject<OS_os_log> *_log;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000003d8950
@property(readonly, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(nonatomic) long long stateQueue_playerPlaybackState; // @synthesize stateQueue_playerPlaybackState=_stateQueue_playerPlaybackState;
@property(nonatomic) _Bool stateQueue_shouldPlayWhenPrepared; // @synthesize stateQueue_shouldPlayWhenPrepared=_stateQueue_shouldPlayWhenPrepared;
@property(nonatomic) _Bool stateQueue_hasSeekedOrPlayed; // @synthesize stateQueue_hasSeekedOrPlayed=_stateQueue_hasSeekedOrPlayed;
@property(nonatomic) _Bool stateQueue_isPreparingToPlay; // @synthesize stateQueue_isPreparingToPlay=_stateQueue_isPreparingToPlay;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property(retain, nonatomic) PXAppleMusicPlayerController *playerController; // @synthesize playerController=_playerController;
@property(readonly, nonatomic) NSString *playerClientIdentifier; // @synthesize playerClientIdentifier=_playerClientIdentifier;
- (void)_handlePlayerTransactionDeclinedWithError:(id)arg1;	// IMP=0x00000000003d881d
- (void)_stateQueue_updateState;	// IMP=0x00000000003d8752
- (void)_updateStatus;	// IMP=0x00000000003d862e
- (void)_stateQueue_handlePlayerPreparedToPlay:(_Bool)arg1 error:(id)arg2 signpostID:(unsigned long long)arg3;	// IMP=0x00000000003d82ad
- (void)_handlePlayerPreparedToPlay:(_Bool)arg1 error:(id)arg2 signpostID:(unsigned long long)arg3;	// IMP=0x00000000003d81b1
- (void)_stateQueue_prepareToPlayIfNeeded;	// IMP=0x00000000003d7fcb
- (void)_stateQueue_pause;	// IMP=0x00000000003d7f24
- (void)_stateQueue_play;	// IMP=0x00000000003d7db8
- (void)_updateIsAtEnd;	// IMP=0x00000000003d7cb4
- (void)_ensureCurrentPlayerClient;	// IMP=0x00000000003d7c44
- (void)_updatePlayerVolume;	// IMP=0x00000000003d7b89
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000003d7a7c
- (void)performFinalCleanup;	// IMP=0x00000000003d79cb
- (void)errorDidChange;	// IMP=0x00000000003d798a
- (CDStruct_1b6d18a9)currentTime;	// IMP=0x00000000003d78ae
- (void)_stateQueue_playFromTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000003d77f9
- (void)playFromTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000003d7727
- (void)play;	// IMP=0x00000000003d766f
- (void)pause;	// IMP=0x00000000003d75fe
- (void)prepareToPlay;	// IMP=0x00000000003d7546
- (void)desiredPlayerVolumeDidChange;	// IMP=0x00000000003d7505
- (id)initWithAsset:(id)arg1 volume:(float)arg2 startTime:(CDStruct_1b6d18a9)arg3 queue:(id)arg4 audioSessionDelegate:(id)arg5;	// IMP=0x00000000003d6faa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
