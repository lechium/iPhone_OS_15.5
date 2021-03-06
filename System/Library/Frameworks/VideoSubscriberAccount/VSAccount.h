//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSSecureCoding-Protocol.h>

@class NSNumber, NSString, VSAccountStore, VSKeychainGenericPassword, VSOptional;

@interface VSAccount : NSObject <NSSecureCoding>
{
    _Bool _synchronizable;	// 8 = 0x8
    unsigned long long _version;	// 16 = 0x10
    VSAccountStore *_accountStore;	// 24 = 0x18
    NSString *_accountTypeDescription;	// 32 = 0x20
    NSString *_accountDescription;	// 40 = 0x28
    VSOptional *_optionalIdentityProviderDisplayName;	// 48 = 0x30
    VSOptional *_identityProviderID;	// 56 = 0x38
    NSString *_username;	// 64 = 0x40
    NSString *_preferredAppID;	// 72 = 0x48
    VSOptional *_authenticationToken;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000052211
- (void).cxx_destruct;	// IMP=0x000000000005345b
@property(nonatomic, getter=isSynchronizable) _Bool synchronizable; // @synthesize synchronizable=_synchronizable;
@property(retain, nonatomic) VSOptional *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property(copy, nonatomic) NSString *preferredAppID; // @synthesize preferredAppID=_preferredAppID;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) VSOptional *identityProviderID; // @synthesize identityProviderID=_identityProviderID;
@property(retain, nonatomic) VSOptional *optionalIdentityProviderDisplayName; // @synthesize optionalIdentityProviderDisplayName=_optionalIdentityProviderDisplayName;
@property(copy, nonatomic) NSString *accountDescription; // @synthesize accountDescription=_accountDescription;
@property(copy, nonatomic) NSString *accountTypeDescription; // @synthesize accountTypeDescription=_accountTypeDescription;
@property(nonatomic) __weak VSAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
- (id)description;	// IMP=0x0000000000052fcf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000052b03
- (unsigned long long)hash;	// IMP=0x0000000000052999
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000052632
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000052219
@property(readonly, nonatomic) NSString *identityProviderDisplayName;
- (id)init;	// IMP=0x0000000000052100
- (unsigned long long)contentsHash;	// IMP=0x0000000000007c30
- (id)effectiveModificationDate;	// IMP=0x0000000000007be0
@property(retain, nonatomic) VSKeychainGenericPassword *legacyKeychainItem;
@property(retain, nonatomic) NSNumber *legacyItemHash;
@property(retain, nonatomic) VSKeychainGenericPassword *keychainItem;

@end

