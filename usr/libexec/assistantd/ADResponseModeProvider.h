//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFModesConfiguration, AFNotifyObserver, AVOutputContext, NSString;
@protocol OS_dispatch_queue;

@interface ADResponseModeProvider : NSObject
{
    AFNotifyObserver *_connectedOutputDevicesObserver;	// 8 = 0x8
    AVOutputContext *_sharedSystemAudioContext;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    AFModesConfiguration *_currentModesConfiguration;	// 32 = 0x20
    NSString *_currentMode;	// 40 = 0x28
    _Bool _isConnectedToAudioAccessory;	// 48 = 0x30
    _Bool _isContentPlaying;	// 49 = 0x31
    long long _voiceFeedbackSetting;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000078164
@property(readonly, nonatomic) long long voiceFeedbackSetting; // @synthesize voiceFeedbackSetting=_voiceFeedbackSetting;
- (void)_connectedOutputDevicesDidChange:(id)arg1;	// IMP=0x00100000000780be
- (void)_fetchConnectedAudioAccessoryState;	// IMP=0x0010000000077e80
- (void)nowPlayingObserver:(id)arg1 playbackStateDidChangeFrom:(long long)arg2 to:(long long)arg3 lastPlayingDate:(id)arg4;	// IMP=0x0010000000077c7b
- (id)internalModeOverride:(id)arg1;	// IMP=0x0010000000077b2b
- (id)_modeForSiriSettings;	// IMP=0x0010000000077a7a
- (id)_computeModeForiOS;	// IMP=0x00100000000778c4
- (void)_computeMode;	// IMP=0x00100000000777af
- (_Bool)_isDeviceSilent;	// IMP=0x0010000000077760
- (void)dealloc;	// IMP=0x00100000000776eb
- (id)fetchCurrentMode;	// IMP=0x0010000000077535
- (void)updateModesConfiguration:(id)arg1;	// IMP=0x00100000000773ee
- (id)init;	// IMP=0x001000000007728b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

