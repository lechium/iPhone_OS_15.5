//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, NSString, PBDataReader;

@interface GEOLogMsgEventPredExTrainingData : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    double _chanceOfPrecipitation;	// 16 = 0x10
    double _chanceOfRain;	// 24 = 0x18
    double _chanceOfSnow;	// 32 = 0x20
    double _dayOfWeek;	// 40 = 0x28
    double _durationUntilEventEnd;	// 48 = 0x30
    double _durationUntilEventStart;	// 56 = 0x38
    double _endTime;	// 64 = 0x40
    double _isTourist;	// 72 = 0x48
    double _startTime;	// 80 = 0x50
    double _temperature;	// 88 = 0x58
    double _timeOfDay;	// 96 = 0x60
    double _timeSinceBackgrounded;	// 104 = 0x68
    NSString *_userLocationGeohash4;	// 112 = 0x70
    GEOLatLng *_userLocation;	// 120 = 0x78
    unsigned int _readerMarkPos;	// 128 = 0x80
    unsigned int _readerMarkLength;	// 132 = 0x84
    struct os_unfair_lock_s _readerLock;	// 136 = 0x88
    int _actualTransportMode;	// 140 = 0x8c
    int _distanceFromHereToHome;	// 144 = 0x90
    int _distanceFromHereToOrigin;	// 148 = 0x94
    int _distanceFromHereToParkedCar;	// 152 = 0x98
    int _distanceFromHereToWork;	// 156 = 0x9c
    int _distanceFromHere;	// 160 = 0xa0
    int _distanceFromOriginToDestination;	// 164 = 0xa4
    int _entryType;	// 168 = 0xa8
    int _mapType;	// 172 = 0xac
    int _predictedTransportMode;	// 176 = 0xb0
    int _preferredTransportMode;	// 180 = 0xb4
    int _weatherType;	// 184 = 0xb8
    _Bool _isCarplayConnected;	// 188 = 0xbc
    _Bool _isInBasemode;	// 189 = 0xbd
    _Bool _isTransitPossible;	// 190 = 0xbe
    _Bool _routePlanningScreenPresented;	// 191 = 0xbf
    struct {
        unsigned int has_chanceOfPrecipitation:1;
        unsigned int has_chanceOfRain:1;
        unsigned int has_chanceOfSnow:1;
        unsigned int has_dayOfWeek:1;
        unsigned int has_durationUntilEventEnd:1;
        unsigned int has_durationUntilEventStart:1;
        unsigned int has_endTime:1;
        unsigned int has_isTourist:1;
        unsigned int has_startTime:1;
        unsigned int has_temperature:1;
        unsigned int has_timeOfDay:1;
        unsigned int has_timeSinceBackgrounded:1;
        unsigned int has_actualTransportMode:1;
        unsigned int has_distanceFromHereToHome:1;
        unsigned int has_distanceFromHereToOrigin:1;
        unsigned int has_distanceFromHereToParkedCar:1;
        unsigned int has_distanceFromHereToWork:1;
        unsigned int has_distanceFromHere:1;
        unsigned int has_distanceFromOriginToDestination:1;
        unsigned int has_entryType:1;
        unsigned int has_mapType:1;
        unsigned int has_predictedTransportMode:1;
        unsigned int has_preferredTransportMode:1;
        unsigned int has_weatherType:1;
        unsigned int has_isCarplayConnected:1;
        unsigned int has_isInBasemode:1;
        unsigned int has_isTransitPossible:1;
        unsigned int has_routePlanningScreenPresented:1;
        unsigned int read_userLocationGeohash4:1;
        unsigned int read_userLocation:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 192 = 0xc0
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000013dd9d0
- (void).cxx_destruct;	// IMP=0x00000000013e0401
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000013e0006
- (unsigned long long)hash;	// IMP=0x00000000013df00e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000013de956
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000013de3d0
- (void)copyTo:(id)arg1;	// IMP=0x00000000013ddf80
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000013ddf4f
- (void)writeTo:(id)arg1;	// IMP=0x00000000013dd9ec
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000013dd9dd
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000013dd8c4
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000013dd8b2
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000013db907
- (id)jsonRepresentation;	// IMP=0x00000000013db8f8
- (id)dictionaryRepresentation;	// IMP=0x00000000013da451
- (id)description;	// IMP=0x00000000013da3a2
- (int)StringAsWeatherType:(id)arg1;	// IMP=0x00000000013d9e08
- (id)weatherTypeAsString:(int)arg1;	// IMP=0x00000000013d9b35
@property(nonatomic) _Bool hasWeatherType;
@property(nonatomic) int weatherType;
@property(nonatomic) _Bool hasIsCarplayConnected;
@property(nonatomic) _Bool isCarplayConnected;
@property(retain, nonatomic) NSString *userLocationGeohash4;
@property(readonly, nonatomic) _Bool hasUserLocationGeohash4;
@property(retain, nonatomic) GEOLatLng *userLocation;
@property(readonly, nonatomic) _Bool hasUserLocation;
- (int)StringAsDistanceFromHereToParkedCar:(id)arg1;	// IMP=0x00000000013d80d0
- (id)distanceFromHereToParkedCarAsString:(int)arg1;	// IMP=0x00000000013d8050
@property(nonatomic) _Bool hasDistanceFromHereToParkedCar;
@property(nonatomic) int distanceFromHereToParkedCar;
- (int)StringAsDistanceFromHereToWork:(id)arg1;	// IMP=0x00000000013d7f2c
- (id)distanceFromHereToWorkAsString:(int)arg1;	// IMP=0x00000000013d7eaf
@property(nonatomic) _Bool hasDistanceFromHereToWork;
@property(nonatomic) int distanceFromHereToWork;
- (int)StringAsDistanceFromHereToHome:(id)arg1;	// IMP=0x00000000013d7d8c
- (id)distanceFromHereToHomeAsString:(int)arg1;	// IMP=0x00000000013d7d0e
@property(nonatomic) _Bool hasDistanceFromHereToHome;
@property(nonatomic) int distanceFromHereToHome;
- (int)StringAsDistanceFromOriginToDestination:(id)arg1;	// IMP=0x00000000013d7be8
- (id)distanceFromOriginToDestinationAsString:(int)arg1;	// IMP=0x00000000013d7b6a
@property(nonatomic) _Bool hasDistanceFromOriginToDestination;
@property(nonatomic) int distanceFromOriginToDestination;
- (int)StringAsDistanceFromHereToOrigin:(id)arg1;	// IMP=0x00000000013d7a44
- (id)distanceFromHereToOriginAsString:(int)arg1;	// IMP=0x00000000013d79c6
@property(nonatomic) _Bool hasDistanceFromHereToOrigin;
@property(nonatomic) int distanceFromHereToOrigin;
- (int)StringAsDistanceFromHere:(id)arg1;	// IMP=0x00000000013d78a0
- (id)distanceFromHereAsString:(int)arg1;	// IMP=0x00000000013d7821
@property(nonatomic) _Bool hasDistanceFromHere;
@property(nonatomic) int distanceFromHere;
- (int)StringAsActualTransportMode:(id)arg1;	// IMP=0x00000000013d76bc
- (id)actualTransportModeAsString:(int)arg1;	// IMP=0x00000000013d7622
@property(nonatomic) _Bool hasActualTransportMode;
@property(nonatomic) int actualTransportMode;
- (int)StringAsPredictedTransportMode:(id)arg1;	// IMP=0x00000000013d74bc
- (id)predictedTransportModeAsString:(int)arg1;	// IMP=0x00000000013d7423
@property(nonatomic) _Bool hasPredictedTransportMode;
@property(nonatomic) int predictedTransportMode;
@property(nonatomic) _Bool hasRoutePlanningScreenPresented;
@property(nonatomic) _Bool routePlanningScreenPresented;
@property(nonatomic) _Bool hasTimeSinceBackgrounded;
@property(nonatomic) double timeSinceBackgrounded;
@property(nonatomic) _Bool hasIsInBasemode;
@property(nonatomic) _Bool isInBasemode;
@property(nonatomic) _Bool hasIsTransitPossible;
@property(nonatomic) _Bool isTransitPossible;
- (int)StringAsMapType:(id)arg1;	// IMP=0x00000000013d7148
- (id)mapTypeAsString:(int)arg1;	// IMP=0x00000000013d70be
@property(nonatomic) _Bool hasMapType;
@property(nonatomic) int mapType;
- (int)StringAsPreferredTransportMode:(id)arg1;	// IMP=0x00000000013d6f58
- (id)preferredTransportModeAsString:(int)arg1;	// IMP=0x00000000013d6ec0
@property(nonatomic) _Bool hasPreferredTransportMode;
@property(nonatomic) int preferredTransportMode;
@property(nonatomic) _Bool hasIsTourist;
@property(nonatomic) double isTourist;
@property(nonatomic) _Bool hasDayOfWeek;
@property(nonatomic) double dayOfWeek;
@property(nonatomic) _Bool hasTimeOfDay;
@property(nonatomic) double timeOfDay;
@property(nonatomic) _Bool hasChanceOfSnow;
@property(nonatomic) double chanceOfSnow;
@property(nonatomic) _Bool hasChanceOfRain;
@property(nonatomic) double chanceOfRain;
@property(nonatomic) _Bool hasChanceOfPrecipitation;
@property(nonatomic) double chanceOfPrecipitation;
@property(nonatomic) _Bool hasTemperature;
@property(nonatomic) double temperature;
@property(nonatomic) _Bool hasEndTime;
@property(nonatomic) double endTime;
@property(nonatomic) _Bool hasStartTime;
@property(nonatomic) double startTime;
@property(nonatomic) _Bool hasDurationUntilEventEnd;
@property(nonatomic) double durationUntilEventEnd;
@property(nonatomic) _Bool hasDurationUntilEventStart;
@property(nonatomic) double durationUntilEventStart;
- (int)StringAsEntryType:(id)arg1;	// IMP=0x00000000013d6728
- (id)entryTypeAsString:(int)arg1;	// IMP=0x00000000013d65da
@property(nonatomic) _Bool hasEntryType;
@property(nonatomic) int entryType;
- (id)initWithData:(id)arg1;	// IMP=0x00000000013d6507
- (id)init;	// IMP=0x00000000013d64ab

@end
