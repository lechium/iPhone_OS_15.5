//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOTelemetricEntity : PBCodable <NSCopying>
{
    NSString *_eventDetail;	// 8 = 0x8
    unsigned long long _eventValue;	// 16 = 0x10
    int _eventKey;	// 24 = 0x18
    struct {
        unsigned int has_eventValue:1;
        unsigned int has_eventKey:1;
    } _flags;	// 28 = 0x1c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000015477b6
- (void).cxx_destruct;	// IMP=0x0000000001547bd3
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000001547b40
- (unsigned long long)hash;	// IMP=0x0000000001547ac4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000015479a2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000015478f4
- (void)copyTo:(id)arg1;	// IMP=0x0000000001547861
- (void)writeTo:(id)arg1;	// IMP=0x00000000015477d2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000015477c3
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000001547756
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000001547744
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000001545997
- (id)jsonRepresentation;	// IMP=0x0000000001545988
- (id)dictionaryRepresentation;	// IMP=0x00000000015448fa
- (id)description;	// IMP=0x000000000154484b
@property(retain, nonatomic) NSString *eventDetail;
@property(readonly, nonatomic) _Bool hasEventDetail;
@property(nonatomic) _Bool hasEventValue;
@property(nonatomic) unsigned long long eventValue;
- (int)StringAsEventKey:(id)arg1;	// IMP=0x0000000001542ee4
- (id)eventKeyAsString:(int)arg1;	// IMP=0x0000000001541faf
@property(nonatomic) _Bool hasEventKey;
@property(nonatomic) int eventKey;

@end
