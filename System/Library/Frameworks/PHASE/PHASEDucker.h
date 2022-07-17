//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString, PHASEEngine;

@interface PHASEDucker : NSObject
{
    PHASEEngine *_engine;	// 8 = 0x8
    NSSet *_sourceGroups;	// 16 = 0x10
    NSSet *_targetGroups;	// 24 = 0x18
    _Bool _active;	// 32 = 0x20
    double _gain;	// 40 = 0x28
    double _attackTime;	// 48 = 0x30
    double _releaseTime;	// 56 = 0x38
    long long _attackCurve;	// 64 = 0x40
    long long _releaseCurve;	// 72 = 0x48
    NSString *_identifier;	// 80 = 0x50
    double _gainHighFrequency;	// 88 = 0x58
    double _gainLowFrequency;	// 96 = 0x60
    NSString *_uid;	// 104 = 0x68
}

+ (id)new;	// IMP=0x000000000017a7aa
- (void).cxx_destruct;	// IMP=0x000000000017b181
@property(readonly, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(readonly, nonatomic) double gainLowFrequency; // @synthesize gainLowFrequency=_gainLowFrequency;
@property(readonly, nonatomic) double gainHighFrequency; // @synthesize gainHighFrequency=_gainHighFrequency;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) long long releaseCurve; // @synthesize releaseCurve=_releaseCurve;
@property(readonly, nonatomic) long long attackCurve; // @synthesize attackCurve=_attackCurve;
@property(readonly, nonatomic) double releaseTime; // @synthesize releaseTime=_releaseTime;
@property(readonly, nonatomic) double attackTime; // @synthesize attackTime=_attackTime;
@property(readonly, nonatomic) double gain; // @synthesize gain=_gain;
@property(readonly, getter=isActive) _Bool active;
- (void)deactivate;	// IMP=0x000000000017ae9b
- (void)activate;	// IMP=0x000000000017ac1c
@property(readonly, copy, nonatomic) NSSet *targetGroups;
@property(readonly, copy, nonatomic) NSSet *sourceGroups;
- (id)initWithEngine:(id)arg1 sourceGroups:(id)arg2 targetGroups:(id)arg3 gain:(double)arg4 gainHighFrequency:(double)arg5 gainLowFrequency:(double)arg6 attackTime:(double)arg7 releaseTime:(double)arg8 attackCurve:(long long)arg9 releaseCurve:(long long)arg10;	// IMP=0x000000000017a806
- (id)initWithEngine:(id)arg1 sourceGroups:(id)arg2 targetGroups:(id)arg3 gain:(double)arg4 lowFrequencyGain:(double)arg5 highFrequencyGain:(double)arg6 attackTime:(double)arg7 releaseTime:(double)arg8 attackCurve:(long long)arg9 releaseCurve:(long long)arg10;	// IMP=0x000000000017a7e8
- (id)initWithEngine:(id)arg1 sourceGroups:(id)arg2 targetGroups:(id)arg3 gain:(double)arg4 attackTime:(double)arg5 releaseTime:(double)arg6 attackCurve:(long long)arg7 releaseCurve:(long long)arg8;	// IMP=0x000000000017a7c2
- (id)init;	// IMP=0x000000000017a76c

@end
