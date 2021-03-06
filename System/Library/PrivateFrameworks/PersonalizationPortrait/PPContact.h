//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSArray, NSDateComponents, NSString;

@interface PPContact : NSObject <NSSecureCoding, NSCopying>
{
    unsigned char _source;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_namePrefix;	// 24 = 0x18
    NSString *_givenName;	// 32 = 0x20
    NSString *_middleName;	// 40 = 0x28
    NSString *_familyName;	// 48 = 0x30
    NSString *_nameSuffix;	// 56 = 0x38
    NSString *_nickname;	// 64 = 0x40
    NSString *_localizedFullName;	// 72 = 0x48
    NSString *_organizationName;	// 80 = 0x50
    NSString *_jobTitle;	// 88 = 0x58
    NSDateComponents *_birthday;	// 96 = 0x60
    NSDateComponents *_nonGregorianBirthday;	// 104 = 0x68
    NSArray *_phoneNumbers;	// 112 = 0x70
    NSArray *_emailAddresses;	// 120 = 0x78
    NSArray *_socialProfiles;	// 128 = 0x80
    NSArray *_postalAddresses;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000057033
+ (id)contactWithIdentifier:(id)arg1 source:(unsigned char)arg2 namePrefix:(id)arg3 givenName:(id)arg4 middleName:(id)arg5 familyName:(id)arg6 nameSuffix:(id)arg7 nickname:(id)arg8 localizedFullName:(id)arg9 organizationName:(id)arg10 jobTitle:(id)arg11 birthday:(id)arg12 nonGregorianBirthday:(id)arg13 phoneNumbers:(id)arg14 emailAddresses:(id)arg15 socialProfiles:(id)arg16 postalAddresses:(id)arg17;	// IMP=0x0000000000056dfd
+ (_Bool)identifier:(id)arg1 startsWithPrefix:(id)arg2;	// IMP=0x0000000000056cea
+ (unsigned char)sourceFromSourceIdentifier:(id)arg1;	// IMP=0x0000000000056bfe
+ (id)sourceIdentifierWithSource:(unsigned char)arg1 identifier:(id)arg2;	// IMP=0x0000000000056ac8
+ (id)contactsContactIdentifierWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000569f2
+ (long long)foundInAppsRecordIdentifierNumberWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005675e
- (void).cxx_destruct;	// IMP=0x0000000000056696
@property(readonly, nonatomic) NSArray *postalAddresses; // @synthesize postalAddresses=_postalAddresses;
@property(readonly, nonatomic) NSArray *socialProfiles; // @synthesize socialProfiles=_socialProfiles;
@property(readonly, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(readonly, nonatomic) NSArray *phoneNumbers; // @synthesize phoneNumbers=_phoneNumbers;
@property(readonly, nonatomic) NSDateComponents *nonGregorianBirthday; // @synthesize nonGregorianBirthday=_nonGregorianBirthday;
@property(readonly, nonatomic) NSDateComponents *birthday; // @synthesize birthday=_birthday;
@property(readonly, nonatomic) NSString *jobTitle; // @synthesize jobTitle=_jobTitle;
@property(readonly, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(readonly, nonatomic) NSString *localizedFullName; // @synthesize localizedFullName=_localizedFullName;
@property(readonly, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(readonly, nonatomic) NSString *nameSuffix; // @synthesize nameSuffix=_nameSuffix;
@property(readonly, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(readonly, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(readonly, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property(readonly, nonatomic) NSString *namePrefix; // @synthesize namePrefix=_namePrefix;
@property(readonly, nonatomic) unsigned char source; // @synthesize source=_source;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isEqualToContact:(id)arg1;	// IMP=0x0000000000056159
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000560f1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000055eb7
- (unsigned long long)hash;	// IMP=0x0000000000055945
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000557a1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000553ae
- (void)setEmailAddressForTesting:(id)arg1;	// IMP=0x00000000000552e9
- (void)setIdentifierForTesting:(id)arg1;	// IMP=0x00000000000552d8
- (void)_generateLocalizedFullName;	// IMP=0x00000000000551cf
- (id)description;	// IMP=0x0000000000055186
- (id)contactsContactIdentifierWithError:(id *)arg1;	// IMP=0x0000000000054f61
- (long long)foundInAppsRecordIdentifierNumberWithError:(id *)arg1;	// IMP=0x0000000000054d2e
- (id)initWithFoundInAppsContact:(id)arg1;	// IMP=0x000000000005427a
- (id)initWithContactsContact:(id)arg1;	// IMP=0x0000000000053209
- (id)initWithIdentifier:(id)arg1 source:(unsigned char)arg2 namePrefix:(id)arg3 givenName:(id)arg4 middleName:(id)arg5 familyName:(id)arg6 nameSuffix:(id)arg7 nickname:(id)arg8 localizedFullName:(id)arg9 organizationName:(id)arg10 jobTitle:(id)arg11 birthday:(id)arg12 nonGregorianBirthday:(id)arg13 phoneNumbers:(id)arg14 emailAddresses:(id)arg15 socialProfiles:(id)arg16 postalAddresses:(id)arg17;	// IMP=0x0000000000052ef7

@end

