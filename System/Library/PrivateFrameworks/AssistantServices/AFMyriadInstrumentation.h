//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CDASchemaCDAScoreBoosters;
@protocol OS_dispatch_queue;

@interface AFMyriadInstrumentation : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    CDASchemaCDAScoreBoosters *_currentBoost;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001041e6
- (id)_createSchemaClientEvent:(id)arg1;	// IMP=0x0000000000104134
- (void)updateIsTrump:(_Bool)arg1 withReason:(int)arg2;	// IMP=0x0000000000104072
- (void)updateBoost:(unsigned char)arg1 value:(unsigned int)arg2;	// IMP=0x0000000000103f74
- (id)_boostTypeAsString:(unsigned char)arg1;	// IMP=0x0000000000103ef8
- (void)_sendAndLogClientEvent:(id)arg1 stState:(int)arg2 atTimestamp:(unsigned long long)arg3;	// IMP=0x0000000000103e7c
- (void)logCDAElectionDecisionMadeDebug:(int)arg1 withCrossDeviceArbitrationAllowed:(_Bool)arg2 advertisementData:(id)arg3 withDeviceGroup:(unsigned int)arg4 withCdaId:(id)arg5 withTimestamp:(unsigned long long)arg6;	// IMP=0x0000000000103aee
- (void)logCDAElectionDecisionMade:(int)arg1 withDecision:(_Bool)arg2 withPreviousDecision:(_Bool)arg3 timeSincePreviousDecision:(unsigned long long)arg4 withWinningDevice:(id)arg5 withThisDevice:(id)arg6 withParticipants:(id)arg7 withRawScore:(unsigned int)arg8 withBoost:(id)arg9 withCdaId:(id)arg10 withTimestamp:(unsigned long long)arg11;	// IMP=0x00000000001033cf
- (void)logCDAElectionTimerEnded:(int)arg1 withCdaId:(id)arg2 withTimestamp:(unsigned long long)arg3;	// IMP=0x000000000010326e
- (void)logCDAElectionAdvertisingEnding:(int)arg1 withCdaId:(id)arg2 withTimestamp:(unsigned long long)arg3;	// IMP=0x00000000001030e0
- (void)logCDAElectionAdvertisingEnded:(int)arg1 withCdaId:(id)arg2 withTimestamp:(unsigned long long)arg3;	// IMP=0x0000000000102f52
- (void)logCDAElectionAdvertisingStarting:(int)arg1 withDelay:(float)arg2 withInterval:(float)arg3 withCdaId:(id)arg4 withTimestamp:(unsigned long long)arg5;	// IMP=0x0000000000102d82
- (void)logCDAElectionAdvertisingStarted:(int)arg1 withCdaId:(id)arg2 withTimestamp:(unsigned long long)arg3;	// IMP=0x0000000000102bf4
- (void)logCDADeviceStateActivityEnded:(int)arg1 withCdaId:(id)arg2 withTimestamp:(unsigned long long)arg3;	// IMP=0x0000000000102a66
- (void)logCDADeviceStateActivityStartedOrChanged:(int)arg1 withTrigger:(int)arg2 withCdaId:(id)arg3 withTimestamp:(unsigned long long)arg4;	// IMP=0x000000000010264d
- (id)init;	// IMP=0x00000000001025a4

@end

