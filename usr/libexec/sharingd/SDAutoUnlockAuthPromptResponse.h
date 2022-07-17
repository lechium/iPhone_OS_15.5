//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SDAutoUnlockAuthPromptResponse : PBCodable
{
    unsigned int _errorCode;	// 8 = 0x8
    NSData *_keyData;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    _Bool _needsImageData;	// 28 = 0x1c
    struct {
        unsigned int errorCode:1;
        unsigned int version:1;
        unsigned int needsImageData:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000002da0c
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool needsImageData; // @synthesize needsImageData=_needsImageData;
@property(retain, nonatomic) NSData *keyData; // @synthesize keyData=_keyData;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000002d914
- (unsigned long long)hash;	// IMP=0x001000000002d881
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000002d759
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002d689
- (void)copyTo:(id)arg1;	// IMP=0x001000000002d5e6
- (void)writeTo:(id)arg1;	// IMP=0x001000000002d539
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000002d52c
- (id)dictionaryRepresentation;	// IMP=0x001000000002d049
- (id)description;	// IMP=0x001000000002cf9a
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasNeedsImageData;
@property(readonly, nonatomic) _Bool hasKeyData;
@property(nonatomic) _Bool hasVersion;

@end
