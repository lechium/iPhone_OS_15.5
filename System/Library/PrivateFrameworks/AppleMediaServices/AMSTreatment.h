//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface AMSTreatment : NSObject <NSSecureCoding>
{
    NSDate *_endDate;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSDate *_startDate;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000022baed
- (void).cxx_destruct;	// IMP=0x000000000022bb13
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000022b9f5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000022b912
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000022b81c
- (unsigned long long)hash;	// IMP=0x000000000022b7d8
- (id)initWithEndDate:(id)arg1 identifier:(id)arg2 startDate:(id)arg3;	// IMP=0x000000000022b705

@end
