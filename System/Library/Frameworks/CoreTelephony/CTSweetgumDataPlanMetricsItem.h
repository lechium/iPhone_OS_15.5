//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface CTSweetgumDataPlanMetricsItem : NSObject <NSSecureCoding>
{
    NSNumber *_capacityBytes;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001a21c
- (void).cxx_destruct;	// IMP=0x000000000001a23f
@property(retain, nonatomic) NSNumber *capacityBytes; // @synthesize capacityBytes=_capacityBytes;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001a18b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001a168
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001a052
- (id)description;	// IMP=0x0000000000019fab
- (id)init;	// IMP=0x0000000000019f5d

@end
