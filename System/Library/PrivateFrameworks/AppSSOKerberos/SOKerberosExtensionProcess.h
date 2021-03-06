//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary, SOKerberosHelper, SOKeychainHelper;

@interface SOKerberosExtensionProcess : NSObject
{
    NSMutableDictionary *_kerberosByRealm;	// 8 = 0x8
    NSMapTable *_requestContextMapping;	// 16 = 0x10
    SOKerberosHelper *_kerberosHelper;	// 24 = 0x18
    SOKeychainHelper *_keychainHelper;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000014e4c
@property(retain, nonatomic) SOKeychainHelper *keychainHelper; // @synthesize keychainHelper=_keychainHelper;
@property(retain) SOKerberosHelper *kerberosHelper; // @synthesize kerberosHelper=_kerberosHelper;
@property(retain, nonatomic) NSMapTable *requestContextMapping; // @synthesize requestContextMapping=_requestContextMapping;
@property(retain, nonatomic) NSMutableDictionary *kerberosByRealm; // @synthesize kerberosByRealm=_kerberosByRealm;
- (id)kerberosForRealm:(id)arg1;	// IMP=0x0000000000014be9
- (id)mapKnownPasswordErrorToString:(id)arg1;	// IMP=0x0000000000014772
- (void)handleAddKeychainCreds:(id)arg1;	// IMP=0x00000000000145d4
- (void)saveValuesAfterSuccessfulPasswordSync:(id)arg1;	// IMP=0x00000000000145ce
- (void)saveValuesAfterSuccessfulAuthentication:(id)arg1;	// IMP=0x000000000001422d
- (void)completeRequestWithHTTPResponseFromContext:(id)arg1;	// IMP=0x000000000001417c
- (void)completeRequestWithToken:(id)arg1 andContext:(id)arg2;	// IMP=0x0000000000014008
- (void)attemptKerberosWithContext:(id)arg1 andDelegate:(id)arg2;	// IMP=0x00000000000139e2
- (id)createContextForRequest:(id)arg1;	// IMP=0x000000000001310c
- (_Bool)checkSourceAppACLWithContext:(id)arg1;	// IMP=0x0000000000012c55
- (id)settingsForContext:(id)arg1 includeSiteCodeCache:(_Bool)arg2;	// IMP=0x0000000000012110
- (void)handleGetRealmInfo:(id)arg1;	// IMP=0x0000000000011d39
- (void)handleResetKeychainChoice:(id)arg1;	// IMP=0x0000000000011bb8
- (void)destroyCredentialsWithContext:(id)arg1;	// IMP=0x0000000000011775
- (void)handleLogout:(id)arg1 removeRealm:(_Bool)arg2;	// IMP=0x0000000000011623
- (void)handleLogoutWithContext:(id)arg1 removeRealm:(_Bool)arg2;	// IMP=0x0000000000010fee
- (void)handleRemoveRealm:(id)arg1;	// IMP=0x0000000000010eca
- (void)handleGetSiteCode:(id)arg1;	// IMP=0x000000000001049b
- (void)handleKerberosOperations:(id)arg1 andDelegate:(id)arg2;	// IMP=0x0000000000010127
- (void)cancelAuthorizationWithRequest:(id)arg1;	// IMP=0x000000000000ffc9
- (void)beginAuthorizationWithRequest:(id)arg1;	// IMP=0x000000000000fb1f
- (void)removeSettingFile:(int)arg1;	// IMP=0x000000000000fa61
- (void)handleMigration;	// IMP=0x000000000000f8f3
- (id)init;	// IMP=0x000000000000f840

@end

