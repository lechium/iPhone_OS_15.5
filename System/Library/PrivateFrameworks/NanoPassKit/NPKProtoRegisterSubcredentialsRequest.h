//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NPKProtoRegisterSubcredentialsRequest : PBRequest <NSCopying>
{
    NSMutableArray *_identifiers;	// 8 = 0x8
}

+ (Class)identifiersType;	// IMP=0x0000000000047cf0
- (void).cxx_destruct;	// IMP=0x0000000000048572
@property(retain, nonatomic) NSMutableArray *identifiers; // @synthesize identifiers=_identifiers;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000048418
- (unsigned long long)hash;	// IMP=0x00000000000483fb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000048361
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004819e
- (void)copyTo:(id)arg1;	// IMP=0x00000000000480d7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000047fa7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000047f9a
- (id)dictionaryRepresentation;	// IMP=0x0000000000047db0
- (id)description;	// IMP=0x0000000000047d01
- (id)identifiersAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000047cd3
- (unsigned long long)identifiersCount;	// IMP=0x0000000000047cb6
- (void)addIdentifiers:(id)arg1;	// IMP=0x0000000000047c4c
- (void)clearIdentifiers;	// IMP=0x0000000000047c2f

@end
