//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSDate;

@interface AFServiceContextSnapshot : NSObject <NSSecureCoding>
{
    NSDate *_deliveryDate;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000106b77
- (void).cxx_destruct;	// IMP=0x0000000000106c3d
@property(readonly, copy, nonatomic) NSDate *deliveryDate; // @synthesize deliveryDate=_deliveryDate;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000106ba2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000106b7f
- (unsigned long long)hash;	// IMP=0x0000000000106b61
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000106a77
- (id)description;	// IMP=0x00000000001069f1
- (id)initWithDeliveryDate:(id)arg1;	// IMP=0x000000000010697e

@end

