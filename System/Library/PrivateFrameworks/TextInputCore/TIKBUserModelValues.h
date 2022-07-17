//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInput/TIUserModelValues.h>

@class NSMutableDictionary, TIKBAnalyticsMetricsContext;

@interface TIKBUserModelValues : TIUserModelValues
{
    NSMutableDictionary *_stringValues;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001bacfc
- (id)calcAutocorrectionEnabled;	// IMP=0x00000000001bac4d
- (id)calcTypingSpeedFromUserModel:(id)arg1;	// IMP=0x00000000001ba5c7
- (id)calcFloatingKeyboardUsageFromUserModel:(id)arg1;	// IMP=0x00000000001b9d7a
- (id)computeValueFromExpression:(id)arg1 precondition:(id)arg2 defaultValue:(id)arg3 bindings:(id)arg4 bucketThresholds:(id)arg5 bucketValues:(id)arg6;	// IMP=0x00000000001b9c49
- (id)computeValueFromCount:(id)arg1 bucketThresholds:(id)arg2 bucketValues:(id)arg3;	// IMP=0x00000000001b9c30
- (id)bucketCountsByWordLength:(id)arg1;	// IMP=0x00000000001b9a26
- (id)computeValuesByWordLengthWithDescriptor:(id)arg1 userModel:(id)arg2 forNumberOfDays:(int)arg3;	// IMP=0x00000000001b90ae
- (id)computeValueWithDescriptor:(id)arg1 userModel:(id)arg2 forNumberOfDays:(int)arg3;	// IMP=0x00000000001b8bc0
- (id)metricValuesByWordLength:(id)arg1 userModel:(id)arg2 forNumberOfDays:(int)arg3;	// IMP=0x00000000001b8ac6
- (void)persistForDate:(id)arg1;	// IMP=0x00000000001b8861
- (id)settingValueFromName:(id)arg1;	// IMP=0x00000000001b87c9
- (id)metricValue:(id)arg1 userModel:(id)arg2 forNumberOfDays:(int)arg3;	// IMP=0x00000000001b831d
- (id)initWithInputMode:(id)arg1 context:(id)arg2 userModelDataStore:(id)arg3 durableCounters:(id)arg4 settingsDictionary:(id)arg5;	// IMP=0x00000000001b7e09
@property(readonly, nonatomic) TIKBAnalyticsMetricsContext *kbContext;

@end
