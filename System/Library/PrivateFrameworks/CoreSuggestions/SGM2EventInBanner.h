//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestions/NSCopying-Protocol.h>

@class NSString;

@interface SGM2EventInBanner : PBCodable <NSCopying>
{
    int _app;	// 8 = 0x8
    int _category;	// 12 = 0xc
    int _extracted;	// 16 = 0x10
    NSString *_key;	// 24 = 0x18
    int _state;	// 32 = 0x20
    struct {
        unsigned int app:1;
        unsigned int category:1;
        unsigned int extracted:1;
        unsigned int state:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0000000000013841
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000013777
- (unsigned long long)hash;	// IMP=0x00000000000136d1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000135a6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000134bb
- (void)copyTo:(id)arg1;	// IMP=0x0000000000013405
- (void)writeTo:(id)arg1;	// IMP=0x0000000000013339
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001332c
- (id)dictionaryRepresentation;	// IMP=0x0000000000013031
- (id)description;	// IMP=0x0000000000012f82
- (int)StringAsState:(id)arg1;	// IMP=0x0000000000012ef0
- (id)stateAsString:(int)arg1;	// IMP=0x0000000000012e8a
@property(nonatomic) _Bool hasState;
@property(nonatomic) int state; // @synthesize state=_state;
- (int)StringAsExtracted:(id)arg1;	// IMP=0x0000000000012dbe
- (id)extractedAsString:(int)arg1;	// IMP=0x0000000000012d69
@property(nonatomic) _Bool hasExtracted;
@property(nonatomic) int extracted; // @synthesize extracted=_extracted;
- (int)StringAsCategory:(id)arg1;	// IMP=0x0000000000012b64
- (id)categoryAsString:(int)arg1;	// IMP=0x0000000000012a8b
@property(nonatomic) _Bool hasCategory;
@property(nonatomic) int category; // @synthesize category=_category;
- (int)StringAsApp:(id)arg1;	// IMP=0x0000000000012991
- (id)appAsString:(int)arg1;	// IMP=0x000000000001292b
@property(nonatomic) _Bool hasApp;
@property(nonatomic) int app; // @synthesize app=_app;
@property(readonly, nonatomic) _Bool hasKey;

@end

