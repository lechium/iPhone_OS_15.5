//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOAddressCorrectionTaggedLocationRequest : PBRequest <NSCopying>
{
    NSMutableArray *_significantLocations;	// 8 = 0x8
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000007889de
+ (Class)significantLocationType;	// IMP=0x0000000000788176
- (void).cxx_destruct;	// IMP=0x0000000000789612
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000007894a6
- (unsigned long long)hash;	// IMP=0x000000000078946b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007893a8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000007891e5
- (void)copyTo:(id)arg1;	// IMP=0x0000000000789112
- (Class)responseClass;	// IMP=0x0000000000789101
- (unsigned int)requestTypeCode;	// IMP=0x00000000007890f6
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000788fb1
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x0000000000788cfc
- (void)writeTo:(id)arg1;	// IMP=0x0000000000788bcc
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000788bbd
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000788758
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000788746
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000007884c3
- (id)jsonRepresentation;	// IMP=0x00000000007884b4
- (id)dictionaryRepresentation;	// IMP=0x0000000000788236
- (id)description;	// IMP=0x0000000000788187
- (id)significantLocationAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000788159
- (unsigned long long)significantLocationsCount;	// IMP=0x000000000078813c
- (void)addSignificantLocation:(id)arg1;	// IMP=0x00000000007880d2
- (void)clearSignificantLocations;	// IMP=0x00000000007880b5
@property(retain, nonatomic) NSMutableArray *significantLocations;

@end

