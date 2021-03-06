//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, SISchemaRedactableString;

@interface SISchemaDialogOutput
{
    NSString *_viewID;	// 8 = 0x8
    SISchemaRedactableString *_spokenDialogOutput;	// 16 = 0x10
    SISchemaRedactableString *_displayedDialogOutput;	// 24 = 0x18
    _Bool _hasViewID;	// 32 = 0x20
    _Bool _hasSpokenDialogOutput;	// 33 = 0x21
    _Bool _hasDisplayedDialogOutput;	// 34 = 0x22
}

- (void).cxx_destruct;	// IMP=0x0000000000125905
@property(nonatomic) _Bool hasDisplayedDialogOutput; // @synthesize hasDisplayedDialogOutput=_hasDisplayedDialogOutput;
@property(nonatomic) _Bool hasSpokenDialogOutput; // @synthesize hasSpokenDialogOutput=_hasSpokenDialogOutput;
@property(nonatomic) _Bool hasViewID; // @synthesize hasViewID=_hasViewID;
@property(retain, nonatomic) SISchemaRedactableString *displayedDialogOutput; // @synthesize displayedDialogOutput=_displayedDialogOutput;
@property(retain, nonatomic) SISchemaRedactableString *spokenDialogOutput; // @synthesize spokenDialogOutput=_spokenDialogOutput;
@property(copy, nonatomic) NSString *viewID; // @synthesize viewID=_viewID;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000012566e
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001255b0
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000125314
- (unsigned long long)hash;	// IMP=0x00000000001252a7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000124eb8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000124d94
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000124b75
- (void)deleteDisplayedDialogOutput;	// IMP=0x0000000000124b61
- (void)deleteSpokenDialogOutput;	// IMP=0x0000000000124b38
- (void)deleteViewID;	// IMP=0x0000000000124b0f
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000340b7c
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000340b44

@end

