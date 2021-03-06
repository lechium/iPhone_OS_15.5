//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumberFormatter;

@interface VUIFormatting : NSObject
{
    NSMutableDictionary *_dateFormatters;	// 8 = 0x8
    struct os_unfair_lock_s _dateFormattersLock;	// 16 = 0x10
    NSMutableDictionary *_numberFormatters;	// 24 = 0x18
    struct os_unfair_lock_s _numberFormattersLock;	// 32 = 0x20
    NSNumberFormatter *_durationFormatter;	// 40 = 0x28
    NSNumberFormatter *_durationPaddedFormatter;	// 48 = 0x30
}

+ (id)isoDateFormatter;	// IMP=0x000000000005d974
+ (id)rfc1123DateFormatter;	// IMP=0x000000000005d871
+ (id)sharedInstance;	// IMP=0x000000000005d81c
- (void).cxx_destruct;	// IMP=0x000000000005ef5f
- (id)joinComponentsWithLocalizedSemicolonAndSpace:(id)arg1;	// IMP=0x000000000005ef24
- (id)joinComponentsWithLocalizedCommaAndSpace:(id)arg1;	// IMP=0x000000000005eee9
- (id)joinComponents:(id)arg1 withASCII:(id)arg2 arabic:(id)arg3 ethiopic:(id)arg4 ideograph:(id)arg5;	// IMP=0x000000000005e94b
- (id)formatLocalizedLocaleIdentifier:(id)arg1;	// IMP=0x000000000005e84c
- (id)formatLocalizedNumber:(id)arg1 style:(id)arg2 postiveFormat:(id)arg3 negativeFormat:(id)arg4 currencyCode:(id)arg5;	// IMP=0x000000000005e4b2
- (id)formatNumber:(id)arg1 style:(id)arg2 postiveFormat:(id)arg3 negativeFormat:(id)arg4;	// IMP=0x000000000005e19d
- (id)formatDuration:(id)arg1;	// IMP=0x000000000005dd49
- (id)formatDate:(id)arg1 format:(id)arg2;	// IMP=0x000000000005db6f
- (id)init;	// IMP=0x000000000005da77

@end

