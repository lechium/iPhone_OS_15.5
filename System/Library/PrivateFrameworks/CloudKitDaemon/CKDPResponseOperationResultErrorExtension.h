//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

@interface CKDPResponseOperationResultErrorExtension : PBCodable <NSCopying>
{
    NSString *_extensionName;	// 8 = 0x8
    NSData *_extensionPayload;	// 16 = 0x10
    unsigned int _typeCode;	// 24 = 0x18
    struct {
        unsigned int typeCode:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000001583ca
@property(retain, nonatomic) NSData *extensionPayload; // @synthesize extensionPayload=_extensionPayload;
@property(nonatomic) unsigned int typeCode; // @synthesize typeCode=_typeCode;
@property(retain, nonatomic) NSString *extensionName; // @synthesize extensionName=_extensionName;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001582ed
- (unsigned long long)hash;	// IMP=0x000000000015827a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000158185
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001580c4
- (void)copyTo:(id)arg1;	// IMP=0x0000000000158041
- (void)writeTo:(id)arg1;	// IMP=0x0000000000157fc0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000157fb3
- (id)dictionaryRepresentation;	// IMP=0x0000000000157cac
- (id)description;	// IMP=0x0000000000157bfd
@property(readonly, nonatomic) _Bool hasExtensionPayload;
@property(nonatomic) _Bool hasTypeCode;
@property(readonly, nonatomic) _Bool hasExtensionName;

@end
