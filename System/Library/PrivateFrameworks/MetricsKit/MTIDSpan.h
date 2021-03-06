//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface MTIDSpan : NSObject
{
    unsigned long long _serialNumber;	// 8 = 0x8
    NSDate *_startDate;	// 16 = 0x10
    NSDate *_endDate;	// 24 = 0x18
    NSDate *_referenceDate;	// 32 = 0x20
}

+ (id)localCalendar;	// IMP=0x000000000001a480
+ (id)spanForScheme:(id)arg1 date:(id)arg2 referenceDate:(id)arg3;	// IMP=0x000000000001a0f8
- (void).cxx_destruct;	// IMP=0x000000000001a634
@property(retain, nonatomic) NSDate *referenceDate; // @synthesize referenceDate=_referenceDate;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) unsigned long long serialNumber; // @synthesize serialNumber=_serialNumber;
- (id)initWithScheme:(id)arg1 date:(id)arg2 referenceDate:(id)arg3;	// IMP=0x000000000001a18d

@end

