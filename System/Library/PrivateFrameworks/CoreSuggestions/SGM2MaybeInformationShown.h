//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestions/NSCopying-Protocol.h>

@class NSString;

@interface SGM2MaybeInformationShown : PBCodable <NSCopying>
{
    int _extracted;	// 8 = 0x8
    unsigned int _extractionModelVersion;	// 12 = 0xc
    NSString *_key;	// 16 = 0x10
    struct {
        unsigned int extracted:1;
        unsigned int extractionModelVersion:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000015342
@property(nonatomic) unsigned int extractionModelVersion; // @synthesize extractionModelVersion=_extractionModelVersion;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001529e
- (unsigned long long)hash;	// IMP=0x000000000001522f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000015148
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000015093
- (void)copyTo:(id)arg1;	// IMP=0x0000000000015013
- (void)writeTo:(id)arg1;	// IMP=0x0000000000014f85
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000014f78
- (id)dictionaryRepresentation;	// IMP=0x0000000000014e0f
- (id)description;	// IMP=0x0000000000014d60
@property(nonatomic) _Bool hasExtractionModelVersion;
- (int)StringAsExtracted:(id)arg1;	// IMP=0x0000000000014c68
- (id)extractedAsString:(int)arg1;	// IMP=0x0000000000014bea
@property(nonatomic) _Bool hasExtracted;
@property(nonatomic) int extracted; // @synthesize extracted=_extracted;
@property(readonly, nonatomic) _Bool hasKey;

@end
