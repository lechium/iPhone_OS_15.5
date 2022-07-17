//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSDate;

@interface NSDateInterval : NSObject <NSCopying, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000016ebe9
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016e115
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016ebf1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000016eb1b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000016e934
- (_Bool)containsDate:(id)arg1;	// IMP=0x000000000016e8af
- (id)intersectionWithDateInterval:(id)arg1;	// IMP=0x000000000016e734
- (_Bool)intersectsDateInterval:(id)arg1;	// IMP=0x000000000016e61d
- (_Bool)isEqualToDateInterval:(id)arg1;	// IMP=0x000000000016e592
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016e545
- (unsigned long long)hash;	// IMP=0x000000000016e463
- (id)description;	// IMP=0x000000000016e39b
- (long long)compare:(id)arg1;	// IMP=0x000000000016e2d5
@property(readonly) double duration;
@property(readonly, copy) NSDate *endDate;
@property(readonly, copy) NSDate *startDate;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x000000000016e21c
- (id)initWithStartDate:(id)arg1 duration:(double)arg2;	// IMP=0x000000000016e1ee
- (id)init;	// IMP=0x000000000016e19c

@end
