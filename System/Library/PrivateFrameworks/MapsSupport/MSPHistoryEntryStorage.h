//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/NSCopying-Protocol.h>

@class MSPDirectionsSearch, MSPPlaceDisplay, MSPQuerySearch, MSPRidesharingTrip, MSPTransitStorageLineItem, NSString, PBUnknownFields;

@interface MSPHistoryEntryStorage : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    double _position;	// 16 = 0x10
    double _timestamp;	// 24 = 0x18
    MSPDirectionsSearch *_directionsSearch;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    MSPPlaceDisplay *_placeDisplay;	// 48 = 0x30
    MSPQuerySearch *_querySearch;	// 56 = 0x38
    MSPRidesharingTrip *_ridesharingTrip;	// 64 = 0x40
    int _searchType;	// 72 = 0x48
    MSPTransitStorageLineItem *_transitLineItem;	// 80 = 0x50
    _Bool _tracksRAPRecordingOnly;	// 88 = 0x58
    struct {
        unsigned int position:1;
        unsigned int timestamp:1;
        unsigned int searchType:1;
        unsigned int tracksRAPRecordingOnly:1;
    } _has;	// 92 = 0x5c
}

- (void).cxx_destruct;	// IMP=0x000000000008100f
@property(nonatomic) _Bool tracksRAPRecordingOnly; // @synthesize tracksRAPRecordingOnly=_tracksRAPRecordingOnly;
@property(retain, nonatomic) MSPRidesharingTrip *ridesharingTrip; // @synthesize ridesharingTrip=_ridesharingTrip;
@property(retain, nonatomic) MSPTransitStorageLineItem *transitLineItem; // @synthesize transitLineItem=_transitLineItem;
@property(retain, nonatomic) MSPPlaceDisplay *placeDisplay; // @synthesize placeDisplay=_placeDisplay;
@property(retain, nonatomic) MSPDirectionsSearch *directionsSearch; // @synthesize directionsSearch=_directionsSearch;
@property(retain, nonatomic) MSPQuerySearch *querySearch; // @synthesize querySearch=_querySearch;
@property(nonatomic) double position; // @synthesize position=_position;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000080d10
- (unsigned long long)hash;	// IMP=0x00000000000809e9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008076a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008058d
- (void)copyTo:(id)arg1;	// IMP=0x0000000000080428
- (void)writeTo:(id)arg1;	// IMP=0x00000000000802ad
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000802a0
- (id)dictionaryRepresentation;	// IMP=0x000000000007f8d0
- (id)description;	// IMP=0x000000000007f821
@property(nonatomic) _Bool hasTracksRAPRecordingOnly;
@property(readonly, nonatomic) _Bool hasRidesharingTrip;
@property(readonly, nonatomic) _Bool hasTransitLineItem;
@property(readonly, nonatomic) _Bool hasPlaceDisplay;
@property(readonly, nonatomic) _Bool hasDirectionsSearch;
@property(readonly, nonatomic) _Bool hasQuerySearch;
@property(nonatomic) _Bool hasPosition;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasIdentifier;
- (int)StringAsSearchType:(id)arg1;	// IMP=0x000000000007f5f4
- (id)searchTypeAsString:(int)arg1;	// IMP=0x000000000007f569
@property(nonatomic) _Bool hasSearchType;
@property(nonatomic) int searchType; // @synthesize searchType=_searchType;

@end

