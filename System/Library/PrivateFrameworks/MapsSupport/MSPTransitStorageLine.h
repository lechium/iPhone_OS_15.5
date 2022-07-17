//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/GEOTransitLine-Protocol.h>
#import <MapsSupport/NSCopying-Protocol.h>

@class GEOLatLng, GEOMapItemIdentifier, MSPTransitStorageArtwork, MSPTransitStorageSystem, NSArray, NSString, PBUnknownFields;

@interface MSPTransitStorageLine : PBCodable <GEOTransitLine, NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned long long _muid;	// 16 = 0x10
    MSPTransitStorageArtwork *_alternateArtwork;	// 24 = 0x18
    MSPTransitStorageArtwork *_artwork;	// 32 = 0x20
    NSString *_lineColorString;	// 40 = 0x28
    GEOLatLng *_locationHint;	// 48 = 0x30
    MSPTransitStorageArtwork *_modeArtwork;	// 56 = 0x38
    NSString *_name;	// 64 = 0x40
    MSPTransitStorageSystem *_system;	// 72 = 0x48
    CDStruct_e99c65f7 _has;	// 80 = 0x50
    _Bool _hasheaderArtwork;	// 84 = 0x54
    MSPTransitStorageArtwork *_headerArtwork;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000093a02
@property(readonly, nonatomic) _Bool hasheaderArtwork; // @synthesize hasheaderArtwork=_hasheaderArtwork;
@property(retain, nonatomic) GEOLatLng *locationHint; // @synthesize locationHint=_locationHint;
@property(retain, nonatomic) MSPTransitStorageArtwork *alternateArtwork; // @synthesize alternateArtwork=_alternateArtwork;
@property(retain, nonatomic) MSPTransitStorageSystem *system; // @synthesize system=_system;
@property(retain, nonatomic) MSPTransitStorageArtwork *headerArtwork; // @synthesize headerArtwork=_headerArtwork;
@property(retain, nonatomic) MSPTransitStorageArtwork *modeArtwork; // @synthesize modeArtwork=_modeArtwork;
@property(retain, nonatomic) MSPTransitStorageArtwork *artwork; // @synthesize artwork=_artwork;
@property(retain, nonatomic) NSString *lineColorString; // @synthesize lineColorString=_lineColorString;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000009370d
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000933fd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009325f
- (void)copyTo:(id)arg1;	// IMP=0x000000000009313b
- (void)writeTo:(id)arg1;	// IMP=0x000000000009300d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000093000
- (id)dictionaryRepresentation;	// IMP=0x0000000000092925
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasLocationHint;
@property(readonly, nonatomic) _Bool hasAlternateArtwork;
@property(readonly, nonatomic) _Bool hasSystem;
- (_Bool)hasHeaderArtwork;	// IMP=0x0000000000092822
@property(readonly, nonatomic) _Bool hasModeArtwork;
@property(readonly, nonatomic) _Bool hasArtwork;
@property(readonly, nonatomic) _Bool hasLineColorString;
@property(readonly, nonatomic) _Bool hasName;
@property(nonatomic) _Bool hasMuid;
@property(readonly, nonatomic) _Bool isBus;
@property(readonly, nonatomic) _Bool departuresAreVehicleSpecific;
@property(readonly, nonatomic) _Bool showVehicleNumber;
@property(readonly, nonatomic) NSArray *operatingHours;
@property(readonly, nonatomic) unsigned long long departureTimeDisplayStyle;
@property(readonly, nonatomic) GEOMapItemIdentifier *identifier;
- (id)initWithLine:(id)arg1;	// IMP=0x00000000000243cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
