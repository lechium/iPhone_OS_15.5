//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSString, NTPBDate;

@interface NTPBAppConfigurationResource : PBCodable <NSCopying>
{
    long long _maxAge;	// 8 = 0x8
    NSString *_etag;	// 16 = 0x10
    NSData *_gzippedConfigurationData;	// 24 = 0x18
    NTPBDate *_lastFetchedDate;	// 32 = 0x20
    NTPBDate *_lastModifiedDate;	// 40 = 0x28
    NSString *_lastModifiedString;	// 48 = 0x30
    NSString *_resourceID;	// 56 = 0x38
    NSString *_sourceURL;	// 64 = 0x40
    struct {
        unsigned int maxAge:1;
    } _has;	// 72 = 0x48
}

@property(retain, nonatomic) NSString *resourceID; // @synthesize resourceID=_resourceID;
@property(nonatomic) long long maxAge; // @synthesize maxAge=_maxAge;
@property(retain, nonatomic) NSString *lastModifiedString; // @synthesize lastModifiedString=_lastModifiedString;
@property(retain, nonatomic) NTPBDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(retain, nonatomic) NTPBDate *lastFetchedDate; // @synthesize lastFetchedDate=_lastFetchedDate;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) NSString *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(retain, nonatomic) NSData *gzippedConfigurationData; // @synthesize gzippedConfigurationData=_gzippedConfigurationData;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001f565d
- (unsigned long long)hash;	// IMP=0x00000000001f5563
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001f539f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f5220
- (void)writeTo:(id)arg1;	// IMP=0x00000000001f511d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001f5110
- (id)dictionaryRepresentation;	// IMP=0x00000000001f4b5a
- (id)description;	// IMP=0x00000000001f4ae3
@property(readonly, nonatomic) _Bool hasResourceID;
@property(nonatomic) _Bool hasMaxAge;
@property(readonly, nonatomic) _Bool hasLastModifiedString;
@property(readonly, nonatomic) _Bool hasLastModifiedDate;
@property(readonly, nonatomic) _Bool hasLastFetchedDate;
@property(readonly, nonatomic) _Bool hasEtag;
@property(readonly, nonatomic) _Bool hasSourceURL;
@property(readonly, nonatomic) _Bool hasGzippedConfigurationData;
- (void)dealloc;	// IMP=0x00000000001f4968

@end
