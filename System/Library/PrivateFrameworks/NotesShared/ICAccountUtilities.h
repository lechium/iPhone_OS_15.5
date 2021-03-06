//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NotesShared/ICStateHandlerProvider-Protocol.h>

@class ACAccount, ACAccountStore, NSDictionary, NSMutableDictionary, NSString;

@interface ICAccountUtilities : NSObject <ICStateHandlerProvider>
{
    _Bool _primaryICloudACAccountValid;	// 8 = 0x8
    ACAccount *_primaryICloudACAccount;	// 16 = 0x10
    ACAccountStore *_accountStore;	// 24 = 0x18
    NSDictionary *_currentICloudAccountState;	// 32 = 0x20
    NSMutableDictionary *_accountIsManagedByIdentifier;	// 40 = 0x28
}

+ (void)registerStateHandler;	// IMP=0x00000000000c6e19
+ (id)sharedInstance;	// IMP=0x00000000000c55ea
- (void).cxx_destruct;	// IMP=0x00000000000c73eb
@property(nonatomic, getter=isPrimaryICloudACAccountValid) _Bool primaryICloudACAccountValid; // @synthesize primaryICloudACAccountValid=_primaryICloudACAccountValid;
@property(retain, nonatomic) NSMutableDictionary *accountIsManagedByIdentifier; // @synthesize accountIsManagedByIdentifier=_accountIsManagedByIdentifier;
@property(copy, nonatomic) NSDictionary *currentICloudAccountState; // @synthesize currentICloudAccountState=_currentICloudAccountState;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void)createDirectoryIfNecessaryUsingURL:(id)arg1;	// IMP=0x00000000000c6cc0
- (void)performBlockInPersonaContextIfNecessary:(CDUnknownBlockType)arg1 forAccountIdentifier:(id)arg2;	// IMP=0x00000000000c6a3d
- (void)accountStoreDidChange:(id)arg1;	// IMP=0x00000000000c690a
- (void)invalidatePrimaryICloudACAccount;	// IMP=0x00000000000c68ba
- (void)internalInvalidatePrimaryICloudACAccount;	// IMP=0x00000000000c6876
@property(readonly, nonatomic) _Bool didChooseToMigratePrimaryICloudAccount;
@property(readonly, nonatomic) _Bool primaryICloudAccountEnabled;
- (id)temporaryDirectoryURLForAccountIdentifier:(id)arg1;	// IMP=0x00000000000c63ec
- (id)applicationDataContainerURLForAccountIdentifier:(id)arg1;	// IMP=0x00000000000c611b
- (id)applicationDocumentsURLForAccountIdentifier:(id)arg1;	// IMP=0x00000000000c5da7
- (_Bool)isManagedACAccountWithIdentifer:(id)arg1;	// IMP=0x00000000000c5bc6
- (id)iCloudACAccountWithIdentifier:(id)arg1;	// IMP=0x00000000000c5b43
- (id)allICloudACAccounts;	// IMP=0x00000000000c5af3
@property(readonly) ACAccount *primaryICloudACAccount; // @synthesize primaryICloudACAccount=_primaryICloudACAccount;
- (void)updateICloudACAccountFromStore;	// IMP=0x00000000000c583c
- (void)dealloc;	// IMP=0x00000000000c57c7
- (id)initForObservingAccountStoreChanges:(_Bool)arg1;	// IMP=0x00000000000c56e1
- (id)init;	// IMP=0x00000000000c56ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

