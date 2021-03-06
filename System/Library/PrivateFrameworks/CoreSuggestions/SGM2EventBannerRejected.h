//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestions/NSCopying-Protocol.h>

@class NSString;

@interface SGM2EventBannerRejected : PBCodable <NSCopying>
{
    int _app;	// 8 = 0x8
    int _category;	// 12 = 0xc
    int _extracted;	// 16 = 0x10
    NSString *_key;	// 24 = 0x18
    struct {
        unsigned int app:1;
        unsigned int category:1;
        unsigned int extracted:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001069e
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000105ef
- (unsigned long long)hash;	// IMP=0x0000000000010564
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001045d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001038d
- (void)copyTo:(id)arg1;	// IMP=0x00000000000102f2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000010245
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000010238
- (id)dictionaryRepresentation;	// IMP=0x000000000000ffc3
- (id)description;	// IMP=0x000000000000ff14
- (int)StringAsExtracted:(id)arg1;	// IMP=0x000000000000feb2
- (id)extractedAsString:(int)arg1;	// IMP=0x000000000000fe5d
@property(nonatomic) _Bool hasExtracted;
@property(nonatomic) int extracted; // @synthesize extracted=_extracted;
- (int)StringAsCategory:(id)arg1;	// IMP=0x000000000000fc58
- (id)categoryAsString:(int)arg1;	// IMP=0x000000000000fb80
@property(nonatomic) _Bool hasCategory;
@property(nonatomic) int category; // @synthesize category=_category;
- (int)StringAsApp:(id)arg1;	// IMP=0x000000000000fa86
- (id)appAsString:(int)arg1;	// IMP=0x000000000000fa20
@property(nonatomic) _Bool hasApp;
@property(nonatomic) int app; // @synthesize app=_app;
@property(readonly, nonatomic) _Bool hasKey;

@end

