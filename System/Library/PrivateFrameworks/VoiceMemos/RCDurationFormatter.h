//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumberFormatter;
@protocol OS_dispatch_queue;

@interface RCDurationFormatter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_positionalParameterFormatStrings;	// 16 = 0x10
    NSNumberFormatter *_defaultFormatter;	// 24 = 0x18
    NSNumberFormatter *_nonPaddedHourFormatter;	// 32 = 0x20
}

+ (id)_localizedPositionalFormatStringForDurationFormattingStyle:(long long)arg1;	// IMP=0x0000000000033c60
+ (id)_localizedPositionalFormatStringForLocalizedDateTimeFormat:(id)arg1;	// IMP=0x0000000000033a8f
+ (id)_localizedDateTimeFormatForDurationFormattingStyle:(long long)arg1;	// IMP=0x000000000003378d
+ (id)sharedFormatter;	// IMP=0x00000000000329ba
- (void).cxx_destruct;	// IMP=0x0000000000033ccc
- (void)_onQueueReloadLocalizedFormatStrings;	// IMP=0x00000000000335ea
- (id)_onQueuePositionalFormatStringForStyle:(long long)arg1;	// IMP=0x0000000000033583
- (id)_onQueueStringFromDuration:(double)arg1 style:(long long)arg2;	// IMP=0x0000000000033565
- (id)_hiddenComponentStringWithString:(id)arg1;	// IMP=0x0000000000033454
- (id)_onQueueStringFromDuration:(double)arg1 byReplacingDigitsWithDigit:(long long)arg2 hideComponentOptions:(long long)arg3 style:(long long)arg4;	// IMP=0x0000000000032e7b
- (void)reloadLocalizedFormatStrings;	// IMP=0x0000000000032e08
- (id)stringFromDuration:(double)arg1 style:(long long)arg2;	// IMP=0x0000000000032cff
- (id)stringFromDuration:(double)arg1 hideComponentOptions:(long long)arg2 style:(long long)arg3;	// IMP=0x0000000000032bde
- (id)stringFromDuration:(double)arg1 replacingDigitsWithDigit:(unsigned long long)arg2 style:(long long)arg3;	// IMP=0x0000000000032a0f
- (id)init;	// IMP=0x00000000000327fc

@end
