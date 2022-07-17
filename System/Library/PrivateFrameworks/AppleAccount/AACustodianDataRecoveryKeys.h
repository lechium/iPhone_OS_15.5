//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccount/NSCopying-Protocol.h>
#import <AppleAccount/NSSecureCoding-Protocol.h>

@class NSData, NSUUID;

@interface AACustodianDataRecoveryKeys : NSObject <NSSecureCoding, NSCopying>
{
    NSData *_wrappedRKC;	// 8 = 0x8
    NSData *_wrappingKey;	// 16 = 0x10
    NSUUID *_custodianUUID;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000044695
- (void).cxx_destruct;	// IMP=0x0000000000044a53
@property(copy, nonatomic) NSUUID *custodianUUID; // @synthesize custodianUUID=_custodianUUID;
@property(copy, nonatomic) NSData *wrappingKey; // @synthesize wrappingKey=_wrappingKey;
@property(copy, nonatomic) NSData *wrappedRKC; // @synthesize wrappedRKC=_wrappedRKC;
- (id)description;	// IMP=0x000000000004497f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000448e7
- (id)initWithWrappedRKC:(id)arg1 wrappingKey:(id)arg2 custodianUUID:(id)arg3;	// IMP=0x0000000000044830
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000447ad
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004469d

@end
