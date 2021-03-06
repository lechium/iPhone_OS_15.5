//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestions/NSCopying-Protocol.h>

@class NSString;

@interface SGM2ContactDetailRejected : PBCodable <NSCopying>
{
    int _extracted;	// 8 = 0x8
    unsigned int _extractionModelVersion;	// 12 = 0xc
    NSString *_key;	// 16 = 0x10
    int _type;	// 24 = 0x18
    int _uiType;	// 28 = 0x1c
    CDStruct_698c174b _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000081d0
@property(nonatomic) unsigned int extractionModelVersion; // @synthesize extractionModelVersion=_extractionModelVersion;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000080f6
- (unsigned long long)hash;	// IMP=0x0000000000008051
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000007f26
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007e3b
- (void)copyTo:(id)arg1;	// IMP=0x0000000000007d85
- (void)writeTo:(id)arg1;	// IMP=0x0000000000007cb9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000007cac
- (id)dictionaryRepresentation;	// IMP=0x00000000000079ca
- (id)description;	// IMP=0x000000000000791b
- (int)StringAsUiType:(id)arg1;	// IMP=0x000000000000786c
- (id)uiTypeAsString:(int)arg1;	// IMP=0x00000000000077ee
@property(nonatomic) _Bool hasUiType;
@property(nonatomic) int uiType; // @synthesize uiType=_uiType;
@property(nonatomic) _Bool hasExtractionModelVersion;
- (int)StringAsExtracted:(id)arg1;	// IMP=0x0000000000007670
- (id)extractedAsString:(int)arg1;	// IMP=0x00000000000075e3
@property(nonatomic) _Bool hasExtracted;
@property(nonatomic) int extracted; // @synthesize extracted=_extracted;
- (int)StringAsType:(id)arg1;	// IMP=0x00000000000074b4
- (id)typeAsString:(int)arg1;	// IMP=0x000000000000742a
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool hasKey;

@end

