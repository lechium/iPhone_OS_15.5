//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader;

@interface GEOAvailableAnnouncements : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_announcements;	// 16 = 0x10
    NSString *_languageCode;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_announcements:1;
        unsigned int read_languageCode:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000007f245e
+ (Class)announcementType;	// IMP=0x00000000007f19bc
- (void).cxx_destruct;	// IMP=0x00000000007f31b9
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000007f3029
- (unsigned long long)hash;	// IMP=0x00000000007f2fcd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007f2edc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000007f2bc8
- (void)copyTo:(id)arg1;	// IMP=0x00000000007f2a81
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000007f2930
- (void)writeTo:(id)arg1;	// IMP=0x00000000007f2668
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000007f2659
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000007f21ab
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000007f2199
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000007f1e96
- (id)jsonRepresentation;	// IMP=0x00000000007f1e87
- (id)dictionaryRepresentation;	// IMP=0x00000000007f1bbb
- (id)description;	// IMP=0x00000000007f1b0c
@property(retain, nonatomic) NSString *languageCode;
@property(readonly, nonatomic) _Bool hasLanguageCode;
- (id)announcementAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007f198b
- (unsigned long long)announcementsCount;	// IMP=0x00000000007f195f
- (void)addAnnouncement:(id)arg1;	// IMP=0x00000000007f18ab
- (void)clearAnnouncements;	// IMP=0x00000000007f1883
@property(retain, nonatomic) NSMutableArray *announcements;
- (id)initWithData:(id)arg1;	// IMP=0x00000000007f1108
- (id)init;	// IMP=0x00000000007f10ac

@end
