//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTimeToLeaveMapLaunch, NSString, PBDataReader;

@interface GEOLogMsgEventMapLaunch : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_launchUri;	// 16 = 0x10
    NSString *_sourceAppId;	// 24 = 0x18
    GEOTimeToLeaveMapLaunch *_timeToLeave;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_launchUri:1;
        unsigned int read_sourceAppId:1;
        unsigned int read_timeToLeave:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000013bfa8c
- (void).cxx_destruct;	// IMP=0x00000000013c0306
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000013c025a
- (unsigned long long)hash;	// IMP=0x00000000013c01de
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000013c00b9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000013bfeef
- (void)copyTo:(id)arg1;	// IMP=0x00000000013bfe01
- (void)writeTo:(id)arg1;	// IMP=0x00000000013bfc49
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000013bfc3a
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000013bf775
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000013bf763
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000013bf52c
- (id)jsonRepresentation;	// IMP=0x00000000013bf51d
- (id)dictionaryRepresentation;	// IMP=0x00000000013bf388
- (id)description;	// IMP=0x00000000013bf2d9
@property(retain, nonatomic) GEOTimeToLeaveMapLaunch *timeToLeave;
@property(readonly, nonatomic) _Bool hasTimeToLeave;
@property(retain, nonatomic) NSString *launchUri;
@property(readonly, nonatomic) _Bool hasLaunchUri;
@property(retain, nonatomic) NSString *sourceAppId;
@property(readonly, nonatomic) _Bool hasSourceAppId;
- (id)initWithData:(id)arg1;	// IMP=0x00000000013be972
- (id)init;	// IMP=0x00000000013be916

@end

