//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPersistentMap, IDSRegistrationKeychainManager, MISSING_TYPE, NSDictionary, NSMapTable;
@protocol OS_dispatch_queue;

@interface IDSUserStore : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    IDSPersistentMap *_persistentMap;	// 16 = 0x10
    IDSRegistrationKeychainManager *_registrationKeychainManager;	// 24 = 0x18
    NSMapTable *_realmByListener;	// 32 = 0x20
    NSDictionary *_dataProviderByRealm;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000032e370
@property(retain, nonatomic) NSDictionary *dataProviderByRealm; // @synthesize dataProviderByRealm=_dataProviderByRealm;
@property(retain, nonatomic) NSMapTable *realmByListener; // @synthesize realmByListener=_realmByListener;
@property(retain, nonatomic) IDSRegistrationKeychainManager *registrationKeychainManager; // @synthesize registrationKeychainManager=_registrationKeychainManager;
@property(retain, nonatomic) IDSPersistentMap *persistentMap; // @synthesize persistentMap=_persistentMap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)removeActionListener:(id)arg1;	// IMP=0x001000000032e180
- (void)addActionListener:(id)arg1 forRealm:(long long)arg2;	// IMP=0x001000000032e0e0
- (void)addActionListener:(id)arg1;	// IMP=0x001000000032e080
- (void)_iterateByRealm:(long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x001000000032ddc0
- (void)setProperties:(id)arg1 forUser:(id)arg2;	// IMP=0x001000000032d860
- (id)propertiesForUser:(id)arg1;	// IMP=0x001000000032d770
- (void)silentlySetAuthenticationCertificate:(id)arg1 forUser:(id)arg2;	// IMP=0x001000000032d660
- (void)setAuthenticationCertificate:(id)arg1 forUser:(id)arg2;	// IMP=0x001000000032d310
- (id)authenticationCertificateForUser:(id)arg1;	// IMP=0x001000000032d170
- (void)setCredential:(id)arg1 forUser:(id)arg2;	// IMP=0x001000000032cc60
- (id)credentialForUser:(id)arg1;	// IMP=0x001000000032c8b0
- (id)_stringRepresentationOfUserRealm:(long long)arg1;	// IMP=0x001000000032c810
- (void)_removeUser:(id)arg1;	// IMP=0x001000000032c490
- (void)_addUser:(id)arg1;	// IMP=0x001000000032bfd0
- (void)_updateUsersForCurrentUsers:(id)arg1 updatedUsers:(id)arg2;	// IMP=0x001000000032b700
- (void)updateUser:(id)arg1;	// IMP=0x001000000032b190
- (void)forceRemoveUser:(id)arg1 silently:(_Bool)arg2;	// IMP=0x001000000032b070
- (void)reloadUsersForRealm:(long long)arg1;	// IMP=0x001000000032acf0
- (void)reloadUsers;	// IMP=0x001000000032aca0
- (void)persistUsersImmediately;	// IMP=0x001000000032ac70
- (id)userWithUniqueIdentifier:(id)arg1;	// IMP=0x001000000032ab70
- (id)usersWithRealms:(id)arg1;	// IMP=0x001000000032a910
- (id)usersWithRealm:(long long)arg1;	// IMP=0x001000000032a760
- (id)debugDescription;	// IMP=0x001000000032a6a0
- (MISSING_TYPE *)description;	// IMP=0x001000000032a640
- (void)setDataProvider:(id)arg1 forRealm:(long long)arg2;	// IMP=0x001000000032a4b0
- (id)initWithQueue:(id)arg1 persister:(id)arg2 registrationKeychainManager:(id)arg3;	// IMP=0x0010000000329780
- (id)initWithQueue:(id)arg1;	// IMP=0x0010000000329680

@end
