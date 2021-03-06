//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuetContext/NSCopying-Protocol.h>
#import <CoreDuetContext/NSSecureCoding-Protocol.h>

@class NSDate, NSMutableDictionary;
@protocol NSCopying><NSSecureCoding;

@interface _CDContextValue : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_metadata;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000011f02
+ (id)supportedContextValueClasses;	// IMP=0x0000000000011cd2
- (void).cxx_destruct;	// IMP=0x0000000000012419
@property(retain, nonatomic) NSMutableDictionary *metadata; // @synthesize metadata=_metadata;
- (id)description;	// IMP=0x00000000000122b5
- (unsigned long long)hash;	// IMP=0x0000000000012271
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001219f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000012124
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000011fcb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000011f0a
@property(retain, nonatomic) NSDate *lastModifiedDate;
@property(retain, nonatomic) NSObject<NSCopying><NSSecureCoding> *value;
- (id)init;	// IMP=0x0000000000011c6c

@end

