//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSCopying-Protocol.h>
#import <CoreDuet/NSSecureCoding-Protocol.h>

@interface _DKObjectType : NSObject <NSSecureCoding, NSCopying>
{
    long long _typeCode;	// 8 = 0x8
    Class _objectClass;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000018f6c0
+ (id)objectTypeFromClass:(Class)arg1;	// IMP=0x000000000018f57c
+ (id)objectTypeWithName:(id)arg1;	// IMP=0x000000000018f54b
+ (id)objectTypeWithTypeCode:(long long)arg1;	// IMP=0x000000000018f4fb
+ (Class)associatedObjectClass;	// IMP=0x000000000018f4ea
+ (long long)typeCodeFromName:(id)arg1;	// IMP=0x000000000018f48d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000018f759
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000018f6c8
- (unsigned long long)hash;	// IMP=0x000000000018f6b6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018f65d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018f652
- (id)description;	// IMP=0x000000000018f5e4
@property(readonly, nonatomic) Class objectClass;
@property(readonly, nonatomic) long long typeCode;
- (id)initWithTypeCode:(long long)arg1 objectClass:(Class)arg2;	// IMP=0x000000000018f4a2

@end

