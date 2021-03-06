//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

@interface HDCodableSource : PBCodable <NSCopying>
{
    double _modificationDate;	// 8 = 0x8
    long long _options;	// 16 = 0x10
    NSString *_bundleIdentifier;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSString *_owningAppBundleIdentifier;	// 40 = 0x28
    NSString *_productType;	// 48 = 0x30
    NSData *_uuid;	// 56 = 0x38
    _Bool _deleted;	// 64 = 0x40
    struct {
        unsigned int modificationDate:1;
        unsigned int options:1;
        unsigned int deleted:1;
    } _has;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x000000000004f9e5
@property(retain, nonatomic) NSString *owningAppBundleIdentifier; // @synthesize owningAppBundleIdentifier=_owningAppBundleIdentifier;
@property(nonatomic) _Bool deleted; // @synthesize deleted=_deleted;
@property(nonatomic) double modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain, nonatomic) NSData *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000346855
- (unsigned long long)hash;	// IMP=0x0000000000346653
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000346460
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003462ed
- (void)copyTo:(id)arg1;	// IMP=0x00000000003461c5
- (void)writeTo:(id)arg1;	// IMP=0x000000000004f49d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003461b8
- (id)dictionaryRepresentation;	// IMP=0x0000000000345fa4
- (id)description;	// IMP=0x0000000000345ef5
@property(readonly, nonatomic) _Bool hasOwningAppBundleIdentifier;
@property(nonatomic) _Bool hasDeleted;
@property(nonatomic) _Bool hasModificationDate;
@property(readonly, nonatomic) _Bool hasUuid;
@property(nonatomic) _Bool hasOptions;
@property(readonly, nonatomic) _Bool hasProductType;
@property(readonly, nonatomic) _Bool hasBundleIdentifier;
@property(readonly, nonatomic) _Bool hasName;
- (id)decodedModificationDate;	// IMP=0x000000000038b32a
- (id)decodedUUID;	// IMP=0x000000000007e675

@end

