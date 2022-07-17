//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class CNContainerPermissions, NSData, NSDate, NSString;

@interface CNContainer : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    long long _type;	// 24 = 0x18
    int _iOSLegacyIdentifier;	// 32 = 0x20
    NSString *_accountIdentifier;	// 40 = 0x28
    _Bool _enabled;	// 48 = 0x30
    CNContainerPermissions *_permissions;	// 56 = 0x38
    NSString *_externalIdentifier;	// 64 = 0x40
    NSString *_externalModificationTag;	// 72 = 0x48
    NSString *_externalSyncTag;	// 80 = 0x50
    NSData *_externalSyncData;	// 88 = 0x58
    NSString *_constraintsPath;	// 96 = 0x60
    NSString *_meIdentifier;	// 104 = 0x68
    unsigned long long _restrictions;	// 112 = 0x70
    CNContainer *_snapshot;	// 120 = 0x78
    _Bool _guardianRestricted;	// 128 = 0x80
    _Bool _guardianStateDirty;	// 129 = 0x81
    NSDate *_lastSyncDate;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000983e3
+ (id)makeDefaultContainerPermissions;	// IMP=0x00000000000975b5
+ (id)makeIdentifier;	// IMP=0x00000000000975a3
+ (id)makeIdentifierString;	// IMP=0x0000000000097553
+ (id)identifierProvider;	// IMP=0x00000000000974e7
+ (id)predicateForContainerOfGroupWithIdentifier:(id)arg1;	// IMP=0x000000000005f9ab
+ (id)predicateForContainerOfContactWithIdentifier:(id)arg1;	// IMP=0x000000000005f95e
+ (id)predicateForContainersWithIdentifiers:(id)arg1;	// IMP=0x000000000005f911
+ (id)predicateForiOSLegacyIdentifier:(int)arg1;	// IMP=0x000000000005fb6a
+ (id)predicateForLocalContainerIncludingDisabled:(_Bool)arg1;	// IMP=0x000000000005fb36
+ (id)predicateForContainersIncludingDisabled:(_Bool)arg1;	// IMP=0x000000000005fb02
+ (id)predicateForDefaultContainerForAccountWithIdentifier:(id)arg1;	// IMP=0x000000000005fab5
+ (id)predicateForContainersInAccountWithExternalIdentifier:(id)arg1;	// IMP=0x000000000005fa68
+ (id)predicateForContainersInAccountWithIdentifier:(id)arg1;	// IMP=0x000000000005fa54
+ (id)predicateForContainersInAccountWithIdentifier:(id)arg1 includingDisabledContainers:(_Bool)arg2;	// IMP=0x000000000005f9f8
- (void).cxx_destruct;	// IMP=0x000000000009a08d
@property(readonly, nonatomic) NSDate *lastSyncDate; // @synthesize lastSyncDate=_lastSyncDate;
@property(readonly, nonatomic, getter=isGuardianRestricted) _Bool guardianRestricted; // @synthesize guardianRestricted=_guardianRestricted;
@property(readonly, copy, nonatomic) CNContainerPermissions *permissions; // @synthesize permissions=_permissions;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly, nonatomic) int iOSLegacyIdentifier; // @synthesize iOSLegacyIdentifier=_iOSLegacyIdentifier;
@property(readonly, nonatomic, getter=isGuardianStateDirty) _Bool guardianStateDirty; // @synthesize guardianStateDirty=_guardianStateDirty;
@property(readonly, nonatomic) unsigned long long restrictions; // @synthesize restrictions=_restrictions;
@property(readonly, copy, nonatomic) NSString *meIdentifier; // @synthesize meIdentifier=_meIdentifier;
@property(readonly, copy, nonatomic) NSString *constraintsPath; // @synthesize constraintsPath=_constraintsPath;
@property(readonly, copy, nonatomic) NSData *externalSyncData; // @synthesize externalSyncData=_externalSyncData;
@property(readonly, copy, nonatomic) NSString *externalSyncTag; // @synthesize externalSyncTag=_externalSyncTag;
@property(readonly, copy, nonatomic) NSString *externalModificationTag; // @synthesize externalModificationTag=_externalModificationTag;
@property(readonly, copy, nonatomic) NSString *externalIdentifier; // @synthesize externalIdentifier=_externalIdentifier;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;	// IMP=0x0000000000099714
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000988c7
- (id)description;	// IMP=0x0000000000098571
- (id)descriptionForContainerType:(long long)arg1;	// IMP=0x00000000000984f8
@property(readonly, nonatomic, getter=isParentallyManaged) _Bool parentallyManaged;
@property(readonly, copy, nonatomic) CNContainer *snapshot;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000983f6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000983eb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000098204
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000097e07
- (id)initWithContainer:(id)arg1;	// IMP=0x0000000000097b99
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 type:(long long)arg3 iOSLegacyIdentifier:(int)arg4 accountIdentifier:(id)arg5 enabled:(_Bool)arg6 permissions:(id)arg7 externalIdentifier:(id)arg8 externalModificationTag:(id)arg9 externalSyncTag:(id)arg10 externalSyncData:(id)arg11 constraintsPath:(id)arg12 meIdentifier:(id)arg13 restrictions:(unsigned long long)arg14 guardianRestricted:(_Bool)arg15 lastSyncDate:(id)arg16;	// IMP=0x0000000000097923
- (id)initWithIdentifier:(id)arg1 accountIdentifier:(id)arg2 name:(id)arg3 type:(long long)arg4 permissions:(id)arg5;	// IMP=0x00000000000978c1
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 type:(long long)arg3;	// IMP=0x000000000009781b
- (id)initWithName:(id)arg1 type:(long long)arg2;	// IMP=0x0000000000097768
- (id)initWithName:(id)arg1;	// IMP=0x00000000000976bd
- (id)init;	// IMP=0x0000000000097621

@end
