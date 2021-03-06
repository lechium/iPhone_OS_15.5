//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSString;

@interface CTSweetgumUsagePlanItemMessages : NSObject <NSSecureCoding>
{
    NSString *_capacity;	// 8 = 0x8
    NSString *_used;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007dbdf
- (void).cxx_destruct;	// IMP=0x000000000007dc1d
@property(retain, nonatomic) NSString *used; // @synthesize used=_used;
@property(retain, nonatomic) NSString *capacity; // @synthesize capacity=_capacity;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007db05
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007da97
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007d8c4
- (id)description;	// IMP=0x000000000007d7da
- (id)init;	// IMP=0x000000000007d776

@end

