//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDCameraFrame, GEOPDLocationInfo, PBDataReader;

@interface GEOPDMuninViewState : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOPDCameraFrame *_cameraFrame;	// 16 = 0x10
    GEOPDLocationInfo *_locationInfo;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_cameraFrame:1;
        unsigned int read_locationInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000103d5a3
- (void).cxx_destruct;	// IMP=0x000000000103de03
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000103dd60
- (unsigned long long)hash;	// IMP=0x000000000103dd04
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000103dc13
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000103da6b
- (void)copyTo:(id)arg1;	// IMP=0x000000000103d99d
- (void)writeTo:(id)arg1;	// IMP=0x000000000103d7bf
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000103d7b0
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000103d2f0
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000103d2de
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000103d11a
- (id)jsonRepresentation;	// IMP=0x000000000103d10b
- (id)dictionaryRepresentation;	// IMP=0x000000000103cf89
- (id)description;	// IMP=0x000000000103ceda
@property(retain, nonatomic) GEOPDLocationInfo *locationInfo;
@property(readonly, nonatomic) _Bool hasLocationInfo;
@property(retain, nonatomic) GEOPDCameraFrame *cameraFrame;
@property(readonly, nonatomic) _Bool hasCameraFrame;
- (id)initWithData:(id)arg1;	// IMP=0x000000000103c700
- (id)init;	// IMP=0x000000000103c6a4

@end

