//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>

@class NSString;

@interface SGM2SearchResultsUserSelectedContact : PBCodable <NSCopying>
{
    int _app;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    _Bool _wasKnownContact;	// 24 = 0x18
    _Bool _wasSuggestedContact;	// 25 = 0x19
    CDStruct_73da3db5 _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000028bca
@property(nonatomic) _Bool wasKnownContact; // @synthesize wasKnownContact=_wasKnownContact;
@property(nonatomic) _Bool wasSuggestedContact; // @synthesize wasSuggestedContact=_wasSuggestedContact;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000028afb
- (unsigned long long)hash;	// IMP=0x0000000000028a70
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002894f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002887f
- (void)copyTo:(id)arg1;	// IMP=0x00000000000287e4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000028735
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000028728
- (id)dictionaryRepresentation;	// IMP=0x00000000000284f3
- (id)description;	// IMP=0x0000000000028444
- (int)StringAsApp:(id)arg1;	// IMP=0x0000000000028288
- (id)appAsString:(int)arg1;	// IMP=0x000000000002819d
@property(nonatomic) _Bool hasApp;
@property(nonatomic) int app; // @synthesize app=_app;
@property(nonatomic) _Bool hasWasKnownContact;
@property(nonatomic) _Bool hasWasSuggestedContact;
@property(readonly, nonatomic) _Bool hasKey;

@end

