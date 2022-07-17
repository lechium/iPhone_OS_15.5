//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface SISchemaUserViewRegionInteraction
{
    int _viewRegionDesignation;	// 8 = 0x8
    int _userViewInteraction;	// 12 = 0xc
    struct {
        unsigned int viewRegionDesignation:1;
        unsigned int userViewInteraction:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) int userViewInteraction; // @synthesize userViewInteraction=_userViewInteraction;
@property(nonatomic) int viewRegionDesignation; // @synthesize viewRegionDesignation=_viewRegionDesignation;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000329168
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000003290aa
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000328f16
- (unsigned long long)hash;	// IMP=0x0000000000328ed0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000328de1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000328d70
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000328d63
- (void)deleteUserViewInteraction;	// IMP=0x0000000000328d39
@property(nonatomic) _Bool hasUserViewInteraction;
- (void)deleteViewRegionDesignation;	// IMP=0x0000000000328cc6
@property(nonatomic) _Bool hasViewRegionDesignation;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000360c77

@end
