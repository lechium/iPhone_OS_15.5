//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ABVCardLexer, ABVCardValueSetter, ABVCardWatchdogTimer, NSData, NSMutableArray, NSMutableDictionary, NSMutableString, NSString;

@interface ABVCardParser : NSObject
{
    ABVCardValueSetter *_valueSetter;	// 8 = 0x8
    void *_source;	// 16 = 0x10
    ABVCardLexer *_lexer;	// 24 = 0x18
    NSData *_data;	// 32 = 0x20
    unsigned long long _defaultEncoding;	// 40 = 0x28
    _Bool _hasImportErrors;	// 48 = 0x30
    _Bool _30vCard;	// 49 = 0x31
    NSString *_first;	// 56 = 0x38
    NSString *_last;	// 64 = 0x40
    NSString *_org;	// 72 = 0x48
    NSString *_formattedName;	// 80 = 0x50
    NSMutableArray *_emails;	// 88 = 0x58
    NSMutableArray *_dates;	// 96 = 0x60
    NSMutableArray *_phones;	// 104 = 0x68
    NSMutableArray *_addresses;	// 112 = 0x70
    NSMutableArray *_aims;	// 120 = 0x78
    NSMutableArray *_jabbers;	// 128 = 0x80
    NSMutableArray *_msns;	// 136 = 0x88
    NSMutableArray *_yahoos;	// 144 = 0x90
    NSMutableArray *_icqs;	// 152 = 0x98
    NSMutableArray *_untypedIMs;	// 160 = 0xa0
    NSMutableArray *_instantMessengers;	// 168 = 0xa8
    NSMutableArray *_socialProfiles;	// 176 = 0xb0
    NSMutableArray *_relatedNames;	// 184 = 0xb8
    NSMutableArray *_urls;	// 192 = 0xc0
    NSMutableDictionary *_activityAlerts;	// 200 = 0xc8
    NSMutableString *_notes;	// 208 = 0xd0
    NSMutableString *_otherNotes;	// 216 = 0xd8
    NSMutableDictionary *_extensions;	// 224 = 0xe0
    NSString *_uid;	// 232 = 0xe8
    NSData *_imageData;	// 240 = 0xf0
    NSString *_imageURI;	// 248 = 0xf8
    int _cropRectX;	// 256 = 0x100
    int _cropRectY;	// 260 = 0x104
    int _cropRectWidth;	// 264 = 0x108
    int _cropRectHeight;	// 268 = 0x10c
    NSData *_cropRectChecksum;	// 272 = 0x110
    NSMutableArray *_itemParameters;	// 280 = 0x118
    NSString *_grouping;	// 288 = 0x120
    unsigned long long _encoding;	// 296 = 0x128
    _Bool _quotedPrintable;	// 304 = 0x130
    _Bool _base64;	// 305 = 0x131
    ABVCardWatchdogTimer *_timer;	// 312 = 0x138
}

+ (struct __CFArray *)supportedProperties;	// IMP=0x000000000004b5d4
- (id)_valueSetter;	// IMP=0x0000000000053726
- (id)sortedPeopleAndProperties:(const struct __CFArray **)arg1;	// IMP=0x0000000000053612
- (struct __CFArray *)peopleAndProperties:(const struct __CFArray **)arg1;	// IMP=0x0000000000053454
- (void *)copyNextPersonWithLength:(int *)arg1 foundProperties:(const struct __CFArray **)arg2;	// IMP=0x0000000000053371
- (_Bool)importToValueSetter:(id)arg1;	// IMP=0x0000000000052c92
- (_Bool)importToPerson:(void *)arg1 foundProperties:(const struct __CFArray **)arg2;	// IMP=0x0000000000052c08
- (_Bool)parseItem;	// IMP=0x000000000005112d
- (_Bool)_usesRemainingLineForExternalPropKey:(id)arg1;	// IMP=0x00000000000510b4
- (_Bool)_usesArrayForExternalPropKey:(id)arg1;	// IMP=0x000000000005108c
- (_Bool)_handleUnknownTag:(id)arg1 withValue:(id)arg2;	// IMP=0x0000000000051084
- (_Bool)parseABReleatedNames;	// IMP=0x0000000000050f83
- (void)parseABOrder;	// IMP=0x0000000000050f7d
- (void)parseABShowAs;	// IMP=0x0000000000050eac
- (void)parseABPhoto;	// IMP=0x0000000000050ea6
- (_Bool)parsePhoto:(id)arg1;	// IMP=0x0000000000050e69
- (_Bool)parseABDATE;	// IMP=0x0000000000050d42
- (_Bool)parseAlternateBirthday;	// IMP=0x0000000000050a38
- (_Bool)parseBDAY;	// IMP=0x00000000000508bc
- (id)dateFromISO8601String:(id)arg1;	// IMP=0x00000000000504bc
- (_Bool)parseActivityAlerts;	// IMP=0x0000000000050378
- (_Bool)addIMValueTo:(id)arg1;	// IMP=0x000000000005019f
- (_Bool)parseIMAGEHASH;	// IMP=0x00000000000500da
- (_Bool)parseIMAGETYPE;	// IMP=0x000000000005004b
- (_Bool)parseGuardianWhitelisted;	// IMP=0x000000000004ff95
- (_Bool)parseIMPP;	// IMP=0x000000000004fea2
- (id)parseInstantMessengerProfile:(id)arg1;	// IMP=0x000000000004f94b
- (_Bool)parseSocialProfiles;	// IMP=0x000000000004f7c9
- (id)_socialProfileService;	// IMP=0x000000000004f627
- (id)_socialProfileBundleIdentifiers;	// IMP=0x000000000004f485
- (id)_socialProfileTeamIdentifier;	// IMP=0x000000000004f2e3
- (id)_socialProfileDisplayName;	// IMP=0x000000000004f141
- (id)_socialProfileUsername;	// IMP=0x000000000004ef9f
- (id)_socialProfileUserId;	// IMP=0x000000000004edfd
- (_Bool)parseABExtensionType:(id)arg1;	// IMP=0x000000000004ed3b
- (_Bool)parseADD;	// IMP=0x000000000004e88a
- (_Bool)parseADR;	// IMP=0x000000000004e2f6
- (_Bool)parseTEL;	// IMP=0x000000000004e1b9
- (_Bool)parseEMAIL;	// IMP=0x000000000004e07c
- (_Bool)parseUID;	// IMP=0x000000000004e074
- (_Bool)parseABUID;	// IMP=0x000000000004e03a
- (id)phoneLabel;	// IMP=0x000000000004dce7
- (id)defaultURLLabel;	// IMP=0x000000000004dcd7
- (id)defaultADRLabel;	// IMP=0x000000000004dcc7
- (id)defaultLabel;	// IMP=0x000000000004dcb7
- (id)genericLabel;	// IMP=0x000000000004dc95
- (id)_genericLabel;	// IMP=0x000000000004db4a
- (id)parseURL;	// IMP=0x000000000004dad2
- (id)parseValueArray;	// IMP=0x000000000004da63
- (id)parseRemainingLine;	// IMP=0x000000000004d9eb
- (id)parseSingleValue;	// IMP=0x000000000004d973
- (_Bool)parseORG;	// IMP=0x000000000004d88d
- (_Bool)parseABMaiden;	// IMP=0x000000000004d7fe
- (_Bool)parseNICKNAME;	// IMP=0x000000000004d76f
- (_Bool)parseN;	// IMP=0x000000000004d549
- (_Bool)_setMultiValuesOrNoteIfNull:(id)arg1 forProperty:(unsigned int)arg2 valueComparator:(CDUnknownBlockType)arg3;	// IMP=0x000000000004d50d
- (_Bool)_setStringValueOrNoteIfNull:(id)arg1 forProperty:(unsigned int)arg2;	// IMP=0x000000000004d4a5
- (_Bool)_setDataValueOrNoteIfNull:(id)arg1 forProperty:(unsigned int)arg2;	// IMP=0x000000000004d43d
- (_Bool)_setIntValueOrNoteIfNull:(int)arg1 forProperty:(int)arg2;	// IMP=0x000000000004d3f4
- (void)setLocalRecordHasAdditionalProperties:(_Bool)arg1;	// IMP=0x000000000004d3ee
- (void)noteLackOfValueForImageData;	// IMP=0x000000000004d3e8
- (void)noteLackOfValueForProperty:(unsigned int)arg1;	// IMP=0x000000000004d3e2
- (_Bool)parseVERSION;	// IMP=0x000000000004d37d
- (void)addActivityAlertMultiValues;	// IMP=0x000000000004d10a
- (_Bool)_setPersonSounds:(void *)arg1 identifier:(int)arg2 fromActivity:(id)arg3 alert:(id)arg4 otherValue:(id)arg5;	// IMP=0x000000000004ce9c
- (void)addInstantMessageMultiValues;	// IMP=0x000000000004cc7c
- (int)_addIMPPProfiles:(id)arg1 multiValue:(void *)arg2 uniquenessCheckingMultiValue:(void *)arg3;	// IMP=0x000000000004c7fb
- (int)_addIMHandles:(id)arg1 toService:(struct __CFString *)arg2 multiValue:(void *)arg3 uniquenessCheckingMultiValue:(void *)arg4;	// IMP=0x000000000004c2da
- (void)addSocialProfileMultiValues;	// IMP=0x000000000004c088
- (void)addAddressMultiValues;	// IMP=0x000000000004bd46
- (void)_setValueFromExtension:(id)arg1 forKey:(id)arg2 onAddress:(id)arg3 toKey:(id)arg4;	// IMP=0x000000000004bccb
- (void)addMultiValues:(id)arg1 toProperty:(unsigned int)arg2 valueComparator:(CDUnknownBlockType)arg3;	// IMP=0x000000000004b9fb
@property(nonatomic) void *source;
- (void)cleanUpCardState;	// IMP=0x000000000004b834
- (_Bool)hasImportErrors;	// IMP=0x000000000004b82b
- (void)dealloc;	// IMP=0x000000000004b7b2
- (id)initWithData:(id)arg1 watchdogTimer:(id)arg2;	// IMP=0x000000000004b661
- (id)initWithData:(id)arg1;	// IMP=0x000000000004b601
- (id)init;	// IMP=0x000000000004b5ed

@end

