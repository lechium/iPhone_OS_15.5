//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <IMSharedUtilities/NSCopying-Protocol.h>

@class NSData;

@interface IMSharedUtilitiesProtoCloudKitEncryptedMessageP3 : PBCodable <NSCopying>
{
    unsigned int _cmmAssetOffset;	// 8 = 0x8
    unsigned int _cmmState;	// 12 = 0xc
    NSData *_padding;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    struct {
        unsigned int cmmAssetOffset:1;
        unsigned int cmmState:1;
        unsigned int version:1;
    } _has;	// 28 = 0x1c
}

@property(retain, nonatomic) NSData *padding; // @synthesize padding=_padding;
@property(nonatomic) unsigned int cmmAssetOffset; // @synthesize cmmAssetOffset=_cmmAssetOffset;
@property(nonatomic) unsigned int cmmState; // @synthesize cmmState=_cmmState;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000646ec
- (unsigned long long)hash;	// IMP=0x000000000006466a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000064597
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000644cf
- (void)copyTo:(id)arg1;	// IMP=0x0000000000064453
- (void)writeTo:(id)arg1;	// IMP=0x00000000000643ad
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000643a0
- (id)dictionaryRepresentation;	// IMP=0x0000000000063f25
- (id)description;	// IMP=0x0000000000063eae
@property(readonly, nonatomic) _Bool hasPadding;
@property(nonatomic) _Bool hasCmmAssetOffset;
@property(nonatomic) _Bool hasCmmState;
@property(nonatomic) _Bool hasVersion;
- (void)dealloc;	// IMP=0x0000000000063d80

@end
