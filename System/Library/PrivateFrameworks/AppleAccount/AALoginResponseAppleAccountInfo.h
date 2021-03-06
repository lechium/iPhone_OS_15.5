//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface AALoginResponseAppleAccountInfo : NSObject
{
    _Bool _managedAppleID;	// 8 = 0x8
    _Bool _sandboxAccount;	// 9 = 0x9
    _Bool _optionalTerms;	// 10 = 0xa
    _Bool _familyEligible;	// 11 = 0xb
    NSString *_personID;	// 16 = 0x10
    NSString *_altDSID;	// 24 = 0x18
    NSString *_appleID;	// 32 = 0x20
    NSArray *_appleIDAliases;	// 40 = 0x28
    NSString *_firstName;	// 48 = 0x30
    NSString *_lastName;	// 56 = 0x38
    NSString *_primaryEmail;	// 64 = 0x40
    NSNumber *_primaryEmailVerified;	// 72 = 0x48
    NSNumber *_cloudDocsMigrated;	// 80 = 0x50
    NSNumber *_notesMigrated;	// 88 = 0x58
    NSNumber *_remindersMigrated;	// 96 = 0x60
    NSNumber *_remindersAutoMigratableToCK;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000054139
@property(readonly, nonatomic, getter=isFamilyEligible) _Bool familyEligible; // @synthesize familyEligible=_familyEligible;
@property(readonly, nonatomic, getter=hasOptionalTerms) _Bool optionalTerms; // @synthesize optionalTerms=_optionalTerms;
@property(readonly, nonatomic, getter=isSandboxAccount) _Bool sandboxAccount; // @synthesize sandboxAccount=_sandboxAccount;
@property(readonly, nonatomic, getter=isManagedAppleID) _Bool managedAppleID; // @synthesize managedAppleID=_managedAppleID;
@property(readonly, nonatomic) NSNumber *remindersAutoMigratableToCK; // @synthesize remindersAutoMigratableToCK=_remindersAutoMigratableToCK;
@property(readonly, nonatomic) NSNumber *remindersMigrated; // @synthesize remindersMigrated=_remindersMigrated;
@property(readonly, nonatomic) NSNumber *notesMigrated; // @synthesize notesMigrated=_notesMigrated;
@property(readonly, nonatomic) NSNumber *cloudDocsMigrated; // @synthesize cloudDocsMigrated=_cloudDocsMigrated;
@property(readonly, nonatomic) NSNumber *primaryEmailVerified; // @synthesize primaryEmailVerified=_primaryEmailVerified;
@property(readonly, nonatomic) NSString *primaryEmail; // @synthesize primaryEmail=_primaryEmail;
@property(readonly, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, nonatomic) NSArray *appleIDAliases; // @synthesize appleIDAliases=_appleIDAliases;
@property(readonly, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(readonly, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(readonly, nonatomic) NSString *personID; // @synthesize personID=_personID;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000053d3e

@end

