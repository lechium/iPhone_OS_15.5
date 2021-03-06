//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, SISchemaViewContainer;

@interface SISchemaPunchOut
{
    NSString *_appID;	// 8 = 0x8
    NSString *_urlScheme;	// 16 = 0x10
    SISchemaViewContainer *_viewContainer;	// 24 = 0x18
    NSData *_viewElementID;	// 32 = 0x20
    int _punchOutUI;	// 40 = 0x28
    struct {
        unsigned int punchOutUI:1;
    } _has;	// 44 = 0x2c
    _Bool _hasAppID;	// 48 = 0x30
    _Bool _hasUrlScheme;	// 49 = 0x31
    _Bool _hasViewContainer;	// 50 = 0x32
    _Bool _hasViewElementID;	// 51 = 0x33
}

- (void).cxx_destruct;	// IMP=0x00000000002caaec
@property(nonatomic) _Bool hasViewElementID; // @synthesize hasViewElementID=_hasViewElementID;
@property(nonatomic) _Bool hasViewContainer; // @synthesize hasViewContainer=_hasViewContainer;
@property(nonatomic) _Bool hasUrlScheme; // @synthesize hasUrlScheme=_hasUrlScheme;
@property(nonatomic) _Bool hasAppID; // @synthesize hasAppID=_hasAppID;
@property(nonatomic) int punchOutUI; // @synthesize punchOutUI=_punchOutUI;
@property(copy, nonatomic) NSData *viewElementID; // @synthesize viewElementID=_viewElementID;
@property(retain, nonatomic) SISchemaViewContainer *viewContainer; // @synthesize viewContainer=_viewContainer;
@property(copy, nonatomic) NSString *urlScheme; // @synthesize urlScheme=_urlScheme;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002ca72a
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002ca66c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002ca2e0
- (unsigned long long)hash;	// IMP=0x00000000002ca22e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002c9d43
- (void)writeTo:(id)arg1;	// IMP=0x00000000002c9bd3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002c9bc6
- (void)deletePunchOutUI;	// IMP=0x00000000002c9b9c
@property(nonatomic) _Bool hasPunchOutUI;
- (void)deleteViewElementID;	// IMP=0x00000000002c9b43
- (void)deleteViewContainer;	// IMP=0x00000000002c9b1a
- (void)deleteUrlScheme;	// IMP=0x00000000002c9af1
- (void)deleteAppID;	// IMP=0x00000000002c9ac8
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000035a210
- (id)suppressMessageUnderConditions;	// IMP=0x000000000035a1d8

@end

