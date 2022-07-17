//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface GEOPDModuleOptions : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_webContentUrl;	// 16 = 0x10
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000b8e951
- (void).cxx_destruct;	// IMP=0x0000000000b8ec70
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000b8ec2a
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000b8eba6
- (unsigned long long)hash;	// IMP=0x0000000000b8eb6b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b8eaa8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b8ea1d
- (void)copyTo:(id)arg1;	// IMP=0x0000000000b8e9c8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b8e96d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b8e95e
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000b8e8f1
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000b8e8df
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000b8e7e8
- (id)jsonRepresentation;	// IMP=0x0000000000b8e6d6
- (id)dictionaryRepresentation;	// IMP=0x0000000000b8e515
- (id)description;	// IMP=0x0000000000b8e466
@property(retain, nonatomic) NSString *webContentUrl;
@property(readonly, nonatomic) _Bool hasWebContentUrl;

@end
