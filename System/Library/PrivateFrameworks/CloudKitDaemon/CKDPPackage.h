//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPAsset, NSMutableArray;

@interface CKDPPackage : PBCodable <NSCopying>
{
    CKDPAsset *_manifest;	// 8 = 0x8
    NSMutableArray *_sections;	// 16 = 0x10
}

+ (Class)sectionsType;	// IMP=0x00000000002a794d
- (void).cxx_destruct;	// IMP=0x00000000002a858d
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) CKDPAsset *manifest; // @synthesize manifest=_manifest;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002a83b2
- (unsigned long long)hash;	// IMP=0x00000000002a8365
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002a829d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002a80c4
- (void)copyTo:(id)arg1;	// IMP=0x00000000002a7fda
- (void)writeTo:(id)arg1;	// IMP=0x00000000002a7e8e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002a7e81
- (id)dictionaryRepresentation;	// IMP=0x00000000002a7a0d
- (id)description;	// IMP=0x00000000002a795e
- (id)sectionsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002a7930
- (unsigned long long)sectionsCount;	// IMP=0x00000000002a7913
- (void)addSections:(id)arg1;	// IMP=0x00000000002a78a9
- (void)clearSections;	// IMP=0x00000000002a788c
@property(readonly, nonatomic) _Bool hasManifest;

@end
