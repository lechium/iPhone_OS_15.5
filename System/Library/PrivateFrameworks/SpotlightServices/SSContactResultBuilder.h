//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContact, NSArray, NSDateComponents, NSString;

@interface SSContactResultBuilder
{
    int _type;	// 8 = 0x8
    _Bool _scopesSearchOnEngagement;	// 12 = 0xc
    CNContact *_contact;	// 16 = 0x10
    NSArray *_phoneNumbers;	// 24 = 0x18
    NSArray *_addresses;	// 32 = 0x20
    NSArray *_emailAddresses;	// 40 = 0x28
    NSArray *_rawPhoneNumbers;	// 48 = 0x30
    NSArray *_alternateNames;	// 56 = 0x38
    NSDateComponents *_birthdayComponents;	// 64 = 0x40
    NSString *_contactIdentifier;	// 72 = 0x48
    NSString *_personIdentifier;	// 80 = 0x50
    NSString *_personQueryIdentifier;	// 88 = 0x58
    NSString *_name;	// 96 = 0x60
}

+ (id)dialRequestURLWithPhoneNumber:(id)arg1 contact:(id)arg2;	// IMP=0x0000000000070210
+ (id)valueWithTitle:(id)arg1 copyString:(id)arg2 command:(id)arg3 previewSymbolName:(id)arg4;	// IMP=0x000000000006ff58
+ (id)infoTupleWithKeyTitle:(id)arg1 values:(id)arg2;	// IMP=0x000000000006fe43
+ (id)nextUpcomingDateForDateComponents:(id)arg1;	// IMP=0x000000000006e2ea
+ (id)nextUpcomingDateForDateComponents:(id)arg1 fromDate:(id)arg2;	// IMP=0x000000000006e15d
+ (id)punchoutCommandWithScheme:(id)arg1 path:(id)arg2 queryItems:(id)arg3;	// IMP=0x000000000006e030
+ (_Bool)supportsResult:(id)arg1;	// IMP=0x000000000006dead
+ (_Bool)isCoreSpotlightResult;	// IMP=0x000000000006dea5
+ (id)bundleId;	// IMP=0x000000000006de91
- (void).cxx_destruct;	// IMP=0x00000000000732db
@property(nonatomic) _Bool scopesSearchOnEngagement; // @synthesize scopesSearchOnEngagement=_scopesSearchOnEngagement;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *personQueryIdentifier; // @synthesize personQueryIdentifier=_personQueryIdentifier;
@property(retain, nonatomic) NSString *personIdentifier; // @synthesize personIdentifier=_personIdentifier;
@property(retain, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(retain, nonatomic) NSDateComponents *birthdayComponents; // @synthesize birthdayComponents=_birthdayComponents;
@property(retain, nonatomic) NSArray *alternateNames; // @synthesize alternateNames=_alternateNames;
@property(retain, nonatomic) NSArray *rawPhoneNumbers; // @synthesize rawPhoneNumbers=_rawPhoneNumbers;
@property(retain, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(retain, nonatomic) NSArray *addresses; // @synthesize addresses=_addresses;
@property(retain, nonatomic) NSArray *phoneNumbers; // @synthesize phoneNumbers=_phoneNumbers;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (id)buildThumbnail;	// IMP=0x0000000000072d11
- (id)buildAction;	// IMP=0x0000000000072cac
- (id)buildTitle;	// IMP=0x0000000000072c49
- (id)buildCompactCardSection;	// IMP=0x0000000000072bf4
- (id)buildCommand;	// IMP=0x00000000000728ce
- (id)buildDetailedRowCardSection;	// IMP=0x00000000000727e9
- (id)buildSocialMediaResultForEntity;	// IMP=0x0000000000071c29
- (id)buildFooterResultForEntity;	// IMP=0x0000000000070f00
- (id)buildHeaderResultForEntity;	// IMP=0x0000000000070b39
- (id)rowsForKey:(id)arg1 withValues:(id)arg2 symbolName:(id)arg3 commandForString:(CDUnknownBlockType)arg4;	// IMP=0x0000000000070883
- (id)infoTupleForPhoneNumbers;	// IMP=0x00000000000703ae
- (id)buildResult;	// IMP=0x000000000006fd16
- (id)initWithContactEntity:(id)arg1;	// IMP=0x000000000006f2e8
- (id)initWithContact:(id)arg1;	// IMP=0x000000000006eb1c
- (id)initWithResult:(id)arg1;	// IMP=0x000000000006e377

@end

