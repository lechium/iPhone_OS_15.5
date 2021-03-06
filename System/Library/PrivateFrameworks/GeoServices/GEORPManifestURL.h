//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader;

@interface GEORPManifestURL : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_urlName;	// 16 = 0x10
    NSString *_urlValue;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_urlName:1;
        unsigned int read_urlValue:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e3f0a4
- (void).cxx_destruct;	// IMP=0x0000000000e3f68f
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e3f61a
- (unsigned long long)hash;	// IMP=0x0000000000e3f5be
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e3f4cd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e3f325
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e3f257
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e3f0c0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e3f0b1
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e3ef98
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e3ef86
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e3ee02
- (id)jsonRepresentation;	// IMP=0x0000000000e3edf3
- (id)dictionaryRepresentation;	// IMP=0x0000000000e3ecea
- (id)description;	// IMP=0x0000000000e3ec3b
@property(retain, nonatomic) NSString *urlValue;
@property(readonly, nonatomic) _Bool hasUrlValue;
@property(retain, nonatomic) NSString *urlName;
@property(readonly, nonatomic) _Bool hasUrlName;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e3e59b
- (id)init;	// IMP=0x0000000000e3e53f

@end

