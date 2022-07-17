//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSecureCoding-Protocol.h>

@class NSTimeZone;

@interface NSISO8601DateFormatter <NSSecureCoding>
{
    struct __CFDateFormatter *_formatter;	// 8 = 0x8
    NSTimeZone *_timeZone;	// 16 = 0x10
    unsigned long long _formatOptions;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001754da
+ (id)stringFromDate:(id)arg1 timeZone:(id)arg2 formatOptions:(unsigned long long)arg3;	// IMP=0x0000000000175205
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000175437
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000175279
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 range:(inout struct _NSRange *)arg3 error:(out id *)arg4;	// IMP=0x000000000017509a
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;	// IMP=0x0000000000175019
- (id)dateFromString:(id)arg1;	// IMP=0x0000000000174fb3
- (id)stringForObjectValue:(id)arg1;	// IMP=0x0000000000174f5b
- (id)stringFromDate:(id)arg1;	// IMP=0x0000000000174f40
- (void)updateFormatter;	// IMP=0x0000000000174ed0
@property unsigned long long formatOptions;
@property(copy) NSTimeZone *timeZone;
- (id)init;	// IMP=0x0000000000174c47
- (void)dealloc;	// IMP=0x0000000000174bc1

@end
