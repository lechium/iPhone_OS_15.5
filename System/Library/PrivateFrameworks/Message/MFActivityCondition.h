//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/MFActivityCondition-Protocol.h>
#import <Message/MFActivityConditionBuilder-Protocol.h>

@class EFCancelationToken, EFObservable, NSString;
@protocol EFScheduler;

@interface MFActivityCondition : NSObject <MFActivityConditionBuilder, MFActivityCondition>
{
    _Bool _requireExternalPower;	// 8 = 0x8
    _Bool _requireWiFi;	// 9 = 0x9
    _Bool _requireScreenLocked;	// 10 = 0xa
    _Bool _requireLowPowerModeDisabled;	// 11 = 0xb
    _Bool _satisfied;	// 12 = 0xc
    float _minBatteryLevel;	// 16 = 0x10
    long long _maxThermalPressureLevel;	// 24 = 0x18
    EFCancelationToken *_cancellationToken;	// 32 = 0x20
    id <EFScheduler> _scheduler;	// 40 = 0x28
}

+ (id)alwaysSatisfiedCondition;	// IMP=0x00000000000af33f
- (void).cxx_destruct;	// IMP=0x00000000000b0257
@property(retain, nonatomic) id <EFScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(retain, nonatomic) EFCancelationToken *cancellationToken; // @synthesize cancellationToken=_cancellationToken;
@property(nonatomic, getter=isSatisfied) _Bool satisfied; // @synthesize satisfied=_satisfied;
@property(nonatomic) long long maxThermalPressureLevel; // @synthesize maxThermalPressureLevel=_maxThermalPressureLevel;
@property(nonatomic) _Bool requireLowPowerModeDisabled; // @synthesize requireLowPowerModeDisabled=_requireLowPowerModeDisabled;
@property(nonatomic) float minBatteryLevel; // @synthesize minBatteryLevel=_minBatteryLevel;
@property(nonatomic) _Bool requireScreenLocked; // @synthesize requireScreenLocked=_requireScreenLocked;
@property(nonatomic) _Bool requireWiFi; // @synthesize requireWiFi=_requireWiFi;
@property(nonatomic) _Bool requireExternalPower; // @synthesize requireExternalPower=_requireExternalPower;
- (_Bool)_isValidConfiguration;	// IMP=0x00000000000b00bd
@property(readonly, nonatomic) EFObservable *conditionsObservable;
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00000000000af3ec
- (id)init;	// IMP=0x00000000000af3cc
- (void)dealloc;	// IMP=0x00000000000af358

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

