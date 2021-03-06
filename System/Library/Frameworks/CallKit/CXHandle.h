//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CallKit/NSCopying-Protocol.h>
#import <CallKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface CXHandle : NSObject <NSCopying, NSSecureCoding>
{
    long long _type;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000003744
+ (id)stringForType:(long long)arg1;	// IMP=0x00000000000034be
- (void).cxx_destruct;	// IMP=0x0000000000003934
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003832
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000374c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000036b6
- (unsigned long long)hash;	// IMP=0x0000000000003654
- (_Bool)isEqualToHandle:(id)arg1;	// IMP=0x0000000000003586
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003529
- (id)description;	// IMP=0x00000000000033ed
- (id)init;	// IMP=0x00000000000033df
- (id)initWithType:(long long)arg1;	// IMP=0x00000000000033a2
- (id)initWithType:(long long)arg1 value:(id)arg2;	// IMP=0x00000000000032ea

@end

