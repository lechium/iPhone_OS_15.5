//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDateInterval;

@interface _HKRemoteDateIntervals : NSObject
{
    NSDateInterval *_monthDateInterval;	// 8 = 0x8
    NSDateInterval *_sixMonthDateInterval;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000018e19
@property(readonly, nonatomic) NSDateInterval *sixMonthDateInterval; // @synthesize sixMonthDateInterval=_sixMonthDateInterval;
@property(readonly, nonatomic) NSDateInterval *monthDateInterval; // @synthesize monthDateInterval=_monthDateInterval;
- (id)initWithMonthDateInterval:(id)arg1 sixMonthDateInterval:(id)arg2;	// IMP=0x0000000000018d6c

@end

