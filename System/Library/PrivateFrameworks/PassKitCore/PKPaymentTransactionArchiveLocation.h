//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class PKCloudStoreZone;

@interface PKPaymentTransactionArchiveLocation : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _archived;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    PKCloudStoreZone *_cloudStoreZone;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f3230
- (void).cxx_destruct;	// IMP=0x00000000000f3440
@property(retain, nonatomic) PKCloudStoreZone *cloudStoreZone; // @synthesize cloudStoreZone=_cloudStoreZone;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic, getter=isArchived) _Bool archived; // @synthesize archived=_archived;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f338c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f3300
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f3238
- (id)description;	// IMP=0x00000000000f3164
- (unsigned long long)hash;	// IMP=0x00000000000f30fa
- (_Bool)isEqualToArchiveLocation:(id)arg1;	// IMP=0x00000000000f30a3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f303b
- (id)initWithType:(unsigned long long)arg1 archived:(_Bool)arg2 cloudStoreZone:(id)arg3;	// IMP=0x00000000000f2fba

@end
