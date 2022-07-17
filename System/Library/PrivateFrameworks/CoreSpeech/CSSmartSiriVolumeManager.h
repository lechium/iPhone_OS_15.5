//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSAlarmMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSAutomaticVolumeEnabledMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSTimerMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSVoiceTriggerDelegate-Protocol.h>
#import <CoreSpeech/CSVolumeMonitorDelegate-Protocol.h>

@class NSString;
@protocol CSConnectionServiceDelegate, CSSmartSiriVolumeProcessor, OS_dispatch_queue;

@interface CSSmartSiriVolumeManager : NSObject <CSVoiceTriggerDelegate, CSAlarmMonitorDelegate, CSTimerMonitorDelegate, CSVolumeMonitorDelegate, CSAutomaticVolumeEnabledMonitorDelegate>
{
    id <CSConnectionServiceDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <CSSmartSiriVolumeProcessor> _smartSiriVolume;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00000000000622a3
- (void).cxx_destruct;	// IMP=0x0000000000062dee
@property(retain, nonatomic) id <CSSmartSiriVolumeProcessor> smartSiriVolume; // @synthesize smartSiriVolume=_smartSiriVolume;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSConnectionServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)CSAutomaticVolumeEnabledMonitor:(id)arg1 didReceiveEnabled:(_Bool)arg2;	// IMP=0x0000000000062c64
- (void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2;	// IMP=0x0000000000062b7d
- (void)CSVolumeMonitor:(id)arg1 didReceiveAlarmVolumeChanged:(float)arg2;	// IMP=0x0000000000062a34
- (void)CSVolumeMonitor:(id)arg1 didReceiveMusicVolumeChanged:(float)arg2;	// IMP=0x00000000000628eb
- (void)CSTimerMonitor:(id)arg1 didReceiveTimerChanged:(long long)arg2;	// IMP=0x00000000000627ae
- (void)CSAlarmMonitor:(id)arg1 didReceiveAlarmChanged:(long long)arg2;	// IMP=0x0000000000062671
- (void)setPermanentVolumeOffsetWithDirection:(_Bool)arg1;	// IMP=0x000000000006265b
- (void)setSmartSiriVolumeDirection:(_Bool)arg1;	// IMP=0x0000000000062645
- (void)setSmartSiriVolumePercentage:(float)arg1;	// IMP=0x000000000006262f
- (id)getVolumeForTTSType:(unsigned long long)arg1 withOverrideMediaVolume:(id)arg2 WithRequestTime:(unsigned long long)arg3;	// IMP=0x0000000000062619
- (void)setAsset:(id)arg1;	// IMP=0x0000000000062603
- (void)startSmartSiriVolume;	// IMP=0x00000000000625ed
- (id)initWithSamplingRate:(float)arg1 withAsset:(id)arg2;	// IMP=0x0000000000062388

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
