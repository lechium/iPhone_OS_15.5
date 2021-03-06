//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AccountsDaemon/ACDAccountStoreDelegate-Protocol.h>
#import <AccountsDaemon/NSXPCConnectionDelegate-Protocol.h>
#import <AccountsDaemon/NSXPCListenerDelegate-Protocol.h>

@class ACDAccessPluginManager, ACDAccountNotifier, ACDAuthenticationDialogManager, ACDAuthenticationPluginManager, ACDDatabaseBackupActivity, ACDDataclassOwnersManager, ACRemoteDeviceProxy, NSMutableArray, NSMutableDictionary, NSString, NSXPCListener;
@protocol ACDClientProviderProtocol, ACDDatabaseProtocol, OS_dispatch_queue;

@interface ACDServer : NSObject <ACDAccountStoreDelegate, NSXPCConnectionDelegate, NSXPCListenerDelegate>
{
    struct os_unfair_lock_s _propertyLock;	// 8 = 0x8
    NSMutableArray *_accountStoreClients;	// 16 = 0x10
    NSMutableArray *_oauthSignerClients;	// 24 = 0x18
    NSMutableArray *_authenticationDialogManagerClients;	// 32 = 0x20
    NSMutableDictionary *_clientsByConnection;	// 40 = 0x28
    unsigned int _clientCountMaximum;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_performMigrationQueue;	// 56 = 0x38
    NSXPCListener *_accountStoreListener;	// 64 = 0x40
    NSXPCListener *_oauthSignerListener;	// 72 = 0x48
    NSXPCListener *_authenticationDialogListener;	// 80 = 0x50
    ACDAuthenticationPluginManager *_authenticationPluginManager;	// 88 = 0x58
    ACDAccessPluginManager *_accessPluginManager;	// 96 = 0x60
    ACDDataclassOwnersManager *_dataclassOwnersManager;	// 104 = 0x68
    ACDAuthenticationDialogManager *_authenticationDialogManager;	// 112 = 0x70
    ACDAccountNotifier *_accountNotifier;	// 120 = 0x78
    ACRemoteDeviceProxy *_remoteDeviceProxy;	// 128 = 0x80
    id <ACDClientProviderProtocol> _clientProvider;	// 136 = 0x88
    id <ACDDatabaseProtocol> _database;	// 144 = 0x90
    ACDDatabaseBackupActivity *_databaseBackupActivity;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000000578db
@property(retain, nonatomic) ACDDatabaseBackupActivity *databaseBackupActivity; // @synthesize databaseBackupActivity=_databaseBackupActivity;
@property(retain, nonatomic) id <ACDDatabaseProtocol> database; // @synthesize database=_database;
@property(retain, nonatomic) id <ACDClientProviderProtocol> clientProvider; // @synthesize clientProvider=_clientProvider;
@property(retain, nonatomic) ACRemoteDeviceProxy *remoteDeviceProxy; // @synthesize remoteDeviceProxy=_remoteDeviceProxy;
@property(retain, nonatomic) ACDAccountNotifier *accountNotifier; // @synthesize accountNotifier=_accountNotifier;
@property(retain, nonatomic) ACDAuthenticationDialogManager *authenticationDialogManager; // @synthesize authenticationDialogManager=_authenticationDialogManager;
@property(retain, nonatomic) ACDDataclassOwnersManager *dataclassOwnersManager; // @synthesize dataclassOwnersManager=_dataclassOwnersManager;
@property(retain, nonatomic) ACDAccessPluginManager *accessPluginManager; // @synthesize accessPluginManager=_accessPluginManager;
@property(retain, nonatomic) ACDAuthenticationPluginManager *authenticationPluginManager; // @synthesize authenticationPluginManager=_authenticationPluginManager;
@property(readonly, nonatomic) NSXPCListener *authenticationDialogListener; // @synthesize authenticationDialogListener=_authenticationDialogListener;
@property(readonly, nonatomic) NSXPCListener *oauthSignerListener; // @synthesize oauthSignerListener=_oauthSignerListener;
@property(readonly, nonatomic) NSXPCListener *accountStoreListener; // @synthesize accountStoreListener=_accountStoreListener;
- (void)_beginObservingIDSProxyNotifications;	// IMP=0x0000000000057751
- (_Bool)_shouldNotifyClient:(id)arg1 ofChangesForAccountType:(id)arg2;	// IMP=0x00000000000575f4
- (void)credentialsDidChangeForAccount:(id)arg1;	// IMP=0x00000000000571d8
- (void)accountStore:(id)arg1 didSaveAccount:(id)arg2 changeType:(int)arg3;	// IMP=0x0000000000056b95
- (void)_handleLanguageChangedDarwinNotification;	// IMP=0x0000000000056b4f
- (void)_endObservingLanguageChangeNotification;	// IMP=0x0000000000056b27
- (void)_beginObservingLanguageChangeNotfication;	// IMP=0x0000000000056a77
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;	// IMP=0x00000000000567fb
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000054fd4
- (id)_newOAuthSignerForClient:(id)arg1;	// IMP=0x0000000000054f4e
- (id)_newDaemonAccountStoreFilterForClient:(id)arg1;	// IMP=0x0000000000054d4a
- (id)_keyForConnection:(id)arg1;	// IMP=0x0000000000054d31
- (id)clientForConnection:(id)arg1;	// IMP=0x0000000000054c75
- (id)createDatabaseConnection;	// IMP=0x0000000000054b88
- (id)createClientForConnection:(id)arg1;	// IMP=0x0000000000054a7d
- (void)shutdown;	// IMP=0x00000000000541d7
- (void)start;	// IMP=0x00000000000540c4
- (void)dealloc;	// IMP=0x000000000005405f
- (id)initWithAccountStoreListener:(id)arg1 oauthSignerListener:(id)arg2 authenticationDialogListener:(id)arg3;	// IMP=0x0000000000053ad3
- (id)init;	// IMP=0x0000000000053a26

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

