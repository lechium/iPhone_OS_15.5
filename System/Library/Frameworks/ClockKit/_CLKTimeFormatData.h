//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumberFormatter, NSString;

@interface _CLKTimeFormatData : NSObject
{
    NSString *_formatHourMinSecSubsec;	// 8 = 0x8
    NSString *_formatHourMinSec;	// 16 = 0x10
    NSString *_formatHourMin;	// 24 = 0x18
    NSString *_formatMinSecSubsec;	// 32 = 0x20
    NSString *_formatMinSec;	// 40 = 0x28
    NSString *_formatMin;	// 48 = 0x30
    NSNumberFormatter *_singleWidthNumberFormatter;	// 56 = 0x38
    NSNumberFormatter *_doubleWidthNumberFormatter;	// 64 = 0x40
}

+ (id)_timeLocale;	// IMP=0x000000000004829f
+ (id)_timeFormatDataAccessLock;	// IMP=0x000000000004824a
+ (id)instanceForCurrentLocale;	// IMP=0x00000000000481b9
+ (void)resetTimeFormatData;	// IMP=0x000000000004814b
- (void).cxx_destruct;	// IMP=0x000000000004867d
@property(readonly, nonatomic) NSNumberFormatter *doubleWidthNumberFormatter; // @synthesize doubleWidthNumberFormatter=_doubleWidthNumberFormatter;
@property(readonly, nonatomic) NSNumberFormatter *singleWidthNumberFormatter; // @synthesize singleWidthNumberFormatter=_singleWidthNumberFormatter;
@property(readonly, nonatomic) NSString *formatMin; // @synthesize formatMin=_formatMin;
@property(readonly, nonatomic) NSString *formatMinSec; // @synthesize formatMinSec=_formatMinSec;
@property(readonly, nonatomic) NSString *formatMinSecSubsec; // @synthesize formatMinSecSubsec=_formatMinSecSubsec;
@property(readonly, nonatomic) NSString *formatHourMin; // @synthesize formatHourMin=_formatHourMin;
@property(readonly, nonatomic) NSString *formatHourMinSec; // @synthesize formatHourMinSec=_formatHourMinSec;
@property(readonly, nonatomic) NSString *formatHourMinSecSubsec; // @synthesize formatHourMinSecSubsec=_formatHourMinSecSubsec;
- (id)init;	// IMP=0x000000000004832a

@end

