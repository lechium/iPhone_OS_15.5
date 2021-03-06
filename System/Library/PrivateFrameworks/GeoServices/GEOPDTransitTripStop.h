//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitTripStop : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_stopInfos;	// 16 = 0x10
}

+ (id)transitTripStopForPlaceData:(id)arg1;	// IMP=0x00000000009f60df
- (void).cxx_destruct;	// IMP=0x0000000000c21cbd
- (unsigned long long)hash;	// IMP=0x0000000000c21ca0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c21c06
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c21a46
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c218e7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c218d8
- (id)jsonRepresentation;	// IMP=0x0000000000c217c6
- (id)dictionaryRepresentation;	// IMP=0x0000000000c21423
- (id)description;	// IMP=0x0000000000c21374

@end

