//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, NSString;

@interface MSPCloudKitAccountAccess : NSObject
{
    CKContainer *_container;	// 8 = 0x8
    CKContainer *_containerWithZoneWidePCS;	// 16 = 0x10
    CKContainer *_secureContainer;	// 24 = 0x18
    CKContainer *_secureContainerWithZoneWidePCS;	// 32 = 0x20
    _Bool _useSecureContainer;	// 40 = 0x28
    _Bool _disableDeviceToDeviceEncryption;	// 41 = 0x29
    NSString *_accountIdentifier;	// 48 = 0x30
}

+ (void)fetchDeviceToDeviceEncryptionStatus:(CDUnknownBlockType)arg1;	// IMP=0x000000000009fe99
+ (id)sharedAccess;	// IMP=0x000000000009fde2
+ (long long)containerEnvironmentForAccessEnvironment:(long long)arg1;	// IMP=0x000000000009fdd0
+ (long long)defaultEnvironment;	// IMP=0x000000000009fdc5
+ (_Bool)hasCloudKitEntitlement;	// IMP=0x000000000009fc32
+ (_Bool)useLongLivedOperations;	// IMP=0x000000000009fb69
- (void).cxx_destruct;	// IMP=0x00000000000a130f
@property(nonatomic) _Bool disableDeviceToDeviceEncryption; // @synthesize disableDeviceToDeviceEncryption=_disableDeviceToDeviceEncryption;
@property(retain, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(nonatomic) _Bool useSecureContainer; // @synthesize useSecureContainer=_useSecureContainer;
- (id)description;	// IMP=0x00000000000a123f
- (void)fetchDeviceToDeviceEncryptionStatus:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a113e
- (void)fetchAccountStatus:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a10cc
- (void)fetchAccountIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a0657
- (id)containerForAccount;	// IMP=0x00000000000a05ab
- (id)containerWithZoneWidePCS:(_Bool)arg1;	// IMP=0x00000000000a03dd
- (id)initWithEnvironment:(long long)arg1 createContainers:(_Bool)arg2;	// IMP=0x000000000009ff33
- (id)initWithEnvironment:(long long)arg1;	// IMP=0x000000000009ff1c

@end

