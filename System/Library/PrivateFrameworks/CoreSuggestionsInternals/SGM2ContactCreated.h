//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>

@class NSString;

@interface SGM2ContactCreated : PBCodable <NSCopying>
{
    int _app;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    _Bool _wasSuggestedContact;	// 24 = 0x18
    CDStruct_02d9bdfe _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000000b2b7
@property(nonatomic) _Bool wasSuggestedContact; // @synthesize wasSuggestedContact=_wasSuggestedContact;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000b213
- (unsigned long long)hash;	// IMP=0x000000000000b1a3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000b0b1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000affc
- (void)copyTo:(id)arg1;	// IMP=0x000000000000af7c
- (void)writeTo:(id)arg1;	// IMP=0x000000000000aeed
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000aee0
- (id)dictionaryRepresentation;	// IMP=0x000000000000acff
- (id)description;	// IMP=0x000000000000ac50
- (int)StringAsApp:(id)arg1;	// IMP=0x000000000000aa94
- (id)appAsString:(int)arg1;	// IMP=0x000000000000a9ac
@property(nonatomic) _Bool hasApp;
@property(nonatomic) int app; // @synthesize app=_app;
@property(nonatomic) _Bool hasWasSuggestedContact;
@property(readonly, nonatomic) _Bool hasKey;

@end
