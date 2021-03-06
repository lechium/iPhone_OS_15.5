//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CDDataAccessExpress/NSSecureCoding-Protocol.h>

@class NSDate;

@interface DAECalendarAvailabilitySpan : NSObject <NSSecureCoding>
{
    long long _type;	// 8 = 0x8
    NSDate *_startDate;	// 16 = 0x10
    NSDate *_endDate;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001eb54
- (void).cxx_destruct;	// IMP=0x000000000001ed3e
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001ec71
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001eb5c
- (id)description;	// IMP=0x000000000001ea21
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 type:(long long)arg3;	// IMP=0x000000000001e804
- (id)init;	// IMP=0x000000000001e7c0

@end

