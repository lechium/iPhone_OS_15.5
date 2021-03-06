//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserManagement/NSXPCListenerDelegate-Protocol.h>
#import <UserManagement/UMUserSwitchManagement-Protocol.h>
#import <UserManagement/UMUserSwitchManagement_Private-Protocol.h>

@class NSData, NSDictionary, NSMutableArray, NSString, NSXPCConnection, NSXPCListener;
@protocol UMSideEffectsProviding;

__attribute__((visibility("hidden")))
@interface UMXPCServer : NSObject <NSXPCListenerDelegate, UMUserSwitchManagement, UMUserSwitchManagement_Private>
{
    _Bool _currentlyBroadcastingWillSwitchToUser;	// 8 = 0x8
    _Bool _didRegisterStakeholder;	// 9 = 0x9
    _Bool _didBroadcastWillSwitchToUser;	// 10 = 0xa
    _Bool _didSendTasks;	// 11 = 0xb
    _Bool _didBroadcastUploadContent;	// 12 = 0xc
    _Bool _didRegisterPersonaCalbackStakeholder;	// 13 = 0xd
    unsigned int _interruptionRetryCount;	// 16 = 0x10
    NSObject<UMSideEffectsProviding> *_se;	// 24 = 0x18
    id _stakeholder;	// 32 = 0x20
    unsigned long long _stakeholderType;	// 40 = 0x28
    NSString *_machServiceName;	// 48 = 0x30
    unsigned long long _unregistrationStatus;	// 56 = 0x38
    NSString *_unregistrationReason;	// 64 = 0x40
    NSDictionary *_personaSpec;	// 72 = 0x48
    NSData *_passcodeData;	// 80 = 0x50
    NSData *_contextData;	// 88 = 0x58
    NSDictionary *_preferencesDict;	// 96 = 0x60
    NSDictionary *_personaProfileDict;	// 104 = 0x68
    NSDictionary *_provisionDict;	// 112 = 0x70
    CDUnknownBlockType _provisionCompletionHandler;	// 120 = 0x78
    CDUnknownBlockType _registrationCompletionHandler;	// 128 = 0x80
    CDUnknownBlockType _switchCompletionHandler;	// 136 = 0x88
    CDUnknownBlockType _suspendQuotasCompletionHandler;	// 144 = 0x90
    CDUnknownBlockType _directSwitchCompletionHandler;	// 152 = 0x98
    CDUnknownBlockType _logoutToLoginSessionCompletionHandler;	// 160 = 0xa0
    CDUnknownBlockType _loginUICheckinSessionCompletionHandler;	// 168 = 0xa8
    CDUnknownBlockType _uploadContentCompletionHandler;	// 176 = 0xb0
    CDUnknownBlockType _willSwitchCompletionHandler;	// 184 = 0xb8
    NSMutableArray *_switchBlockingTasks;	// 192 = 0xc0
    NSMutableArray *_syncTasks;	// 200 = 0xc8
    CDUnknownBlockType _bubblePopHandler;	// 208 = 0xd0
    unsigned long long _willSwitchToUserAddedTaskCount;	// 216 = 0xd8
    NSXPCConnection *_xpcConnection;	// 224 = 0xe0
    NSXPCListener *_xpcListener;	// 232 = 0xe8
    id _personaStakeholder;	// 240 = 0xf0
    CDUnknownBlockType _personaRegistrationCompletionHandler;	// 248 = 0xf8
    id _personaUpdateCallbackStakeholder;	// 256 = 0x100
}

+ (id)sharedServer;	// IMP=0x0000000000008084
- (void).cxx_destruct;	// IMP=0x0000000000012e67
@property(nonatomic) _Bool didRegisterPersonaCalbackStakeholder; // @synthesize didRegisterPersonaCalbackStakeholder=_didRegisterPersonaCalbackStakeholder;
@property(nonatomic) __weak id personaUpdateCallbackStakeholder; // @synthesize personaUpdateCallbackStakeholder=_personaUpdateCallbackStakeholder;
@property(copy, nonatomic) CDUnknownBlockType personaRegistrationCompletionHandler; // @synthesize personaRegistrationCompletionHandler=_personaRegistrationCompletionHandler;
@property(nonatomic) __weak id personaStakeholder; // @synthesize personaStakeholder=_personaStakeholder;
@property(nonatomic) unsigned int interruptionRetryCount; // @synthesize interruptionRetryCount=_interruptionRetryCount;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic) _Bool didBroadcastUploadContent; // @synthesize didBroadcastUploadContent=_didBroadcastUploadContent;
@property(nonatomic) _Bool didSendTasks; // @synthesize didSendTasks=_didSendTasks;
@property(nonatomic) _Bool didBroadcastWillSwitchToUser; // @synthesize didBroadcastWillSwitchToUser=_didBroadcastWillSwitchToUser;
@property(nonatomic) _Bool didRegisterStakeholder; // @synthesize didRegisterStakeholder=_didRegisterStakeholder;
@property(nonatomic) unsigned long long willSwitchToUserAddedTaskCount; // @synthesize willSwitchToUserAddedTaskCount=_willSwitchToUserAddedTaskCount;
@property(nonatomic) _Bool currentlyBroadcastingWillSwitchToUser; // @synthesize currentlyBroadcastingWillSwitchToUser=_currentlyBroadcastingWillSwitchToUser;
@property(copy, nonatomic) CDUnknownBlockType bubblePopHandler; // @synthesize bubblePopHandler=_bubblePopHandler;
@property(retain, nonatomic) NSMutableArray *syncTasks; // @synthesize syncTasks=_syncTasks;
@property(retain, nonatomic) NSMutableArray *switchBlockingTasks; // @synthesize switchBlockingTasks=_switchBlockingTasks;
@property(copy, nonatomic) CDUnknownBlockType willSwitchCompletionHandler; // @synthesize willSwitchCompletionHandler=_willSwitchCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType uploadContentCompletionHandler; // @synthesize uploadContentCompletionHandler=_uploadContentCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType loginUICheckinSessionCompletionHandler; // @synthesize loginUICheckinSessionCompletionHandler=_loginUICheckinSessionCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType logoutToLoginSessionCompletionHandler; // @synthesize logoutToLoginSessionCompletionHandler=_logoutToLoginSessionCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType directSwitchCompletionHandler; // @synthesize directSwitchCompletionHandler=_directSwitchCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType suspendQuotasCompletionHandler; // @synthesize suspendQuotasCompletionHandler=_suspendQuotasCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType switchCompletionHandler; // @synthesize switchCompletionHandler=_switchCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType registrationCompletionHandler; // @synthesize registrationCompletionHandler=_registrationCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType provisionCompletionHandler; // @synthesize provisionCompletionHandler=_provisionCompletionHandler;
@property(retain, nonatomic) NSDictionary *provisionDict; // @synthesize provisionDict=_provisionDict;
@property(retain, nonatomic) NSDictionary *personaProfileDict; // @synthesize personaProfileDict=_personaProfileDict;
@property(retain, nonatomic) NSDictionary *preferencesDict; // @synthesize preferencesDict=_preferencesDict;
@property(retain, nonatomic) NSData *contextData; // @synthesize contextData=_contextData;
@property(retain, nonatomic) NSData *passcodeData; // @synthesize passcodeData=_passcodeData;
@property(retain, nonatomic) NSDictionary *personaSpec; // @synthesize personaSpec=_personaSpec;
@property(retain, nonatomic) NSString *unregistrationReason; // @synthesize unregistrationReason=_unregistrationReason;
@property(nonatomic) unsigned long long unregistrationStatus; // @synthesize unregistrationStatus=_unregistrationStatus;
@property(retain, nonatomic) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
@property(nonatomic) unsigned long long stakeholderType; // @synthesize stakeholderType=_stakeholderType;
@property(nonatomic) __weak id stakeholder; // @synthesize stakeholder=_stakeholder;
@property(retain, nonatomic) NSObject<UMSideEffectsProviding> *se; // @synthesize se=_se;
- (id)grantSandboxExtensionForPersonaWithUniqueString:(id)arg1;	// IMP=0x00000000000126e5
- (int)personaSynchronousLogoutWithODuuid:(id)arg1 withUid:(unsigned int)arg2;	// IMP=0x0000000000012485
- (int)personaSynchronousLoginWithODuuid:(id)arg1 withUid:(unsigned int)arg2;	// IMP=0x0000000000012225
- (id)_createUMServerSyncConnection;	// IMP=0x0000000000012191
- (void)setupUMUserSessionProvisioning:(id)arg1 WithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012034
- (void)registerPersonaListUpdateObserver:(id)arg1 withMachService:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000011ddb
- (void)registerPersonaListUpdateObserver:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011dc4
- (id)_registerPersonaListObserver:(id)arg1 withMachService:(id)arg2;	// IMP=0x0000000000011660
- (void)launchPersonaCallback;	// IMP=0x000000000001150b
- (id)registerPersonaUpdateCallbackWithMachService:(id)arg1;	// IMP=0x00000000000111cf
- (void)fetchMultiPersonaBundleIdentifierWithcompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011018
- (void)setMultiPersonaBundleIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010e3a
- (void)fetchBundleIdentifierForPersona:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010c5a
- (void)setBundlesIdentifiers:(id)arg1 forUniquePersona:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010a63
- (void)fetchAsidMapwithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000108ac
- (id)fetchPersonaSynchronous:(id)arg1 WithError:(id *)arg2;	// IMP=0x0000000000010532
- (void)fetchPersona:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010352
- (id)fetchListOfPersonasSynchronousWithError:(id *)arg1;	// IMP=0x000000000000fec2
- (void)fetchListOfAllUsersPersonasWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000fd0b
- (void)fetchListOfPersonasWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000fb54
- (void)disableUserPersona:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f976
- (void)deleteUserPersona:(id)arg1 passcodeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000f798
- (void)createUserPersona:(id)arg1 passcodeData:(id)arg2 passcodeDataType:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000f593
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000000f39f
- (void)personaUpdateCallbackForMachServiceCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f16a
- (void)personaListDidUpdateCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ef35
- (void)_broadcastpersonaListDidUpdate;	// IMP=0x000000000000ee70
- (void)bubbleDidPop;	// IMP=0x000000000000ed53
- (void)uploadContentWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e9ae
- (void)deviceLoginSessionStateDidUpdate;	// IMP=0x000000000000e94e
- (void)userSwitchTaskListDidUpdate;	// IMP=0x000000000000e2d9
- (void)readyToSwitchToLoginSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e0ec
- (void)readyToSwitchToUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000de57
- (void)willSwitchToUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000db1e
- (void)_broadcastReadyToSwitchToLoginSession:(id)arg1;	// IMP=0x000000000000da39
- (void)_broadcastReadyToSwitchToUser:(id)arg1;	// IMP=0x000000000000d954
- (void)_broadcastWillSwitchToUser:(id)arg1;	// IMP=0x000000000000d802
- (void)_resendXPCMessages;	// IMP=0x000000000000d3b9
- (void)_sendXPCMessageToServerOfType:(unsigned long long)arg1 backingObject:(id)arg2;	// IMP=0x000000000000a363
- (void)_sendXPCMessageToServerOfType:(unsigned long long)arg1;	// IMP=0x000000000000a34f
- (void)_tearDownConnectionToUMServer;	// IMP=0x000000000000a2f5
- (void)_setUpXPCConnectionToUMServerIfNeeded;	// IMP=0x000000000000a265
- (void)_setUpUMServerXPCConnectionIfNeeded:(id)arg1;	// IMP=0x0000000000009e59
- (int)_pid;	// IMP=0x0000000000009e1d
- (void)_registerStakeholder:(id)arg1;	// IMP=0x0000000000009d84
- (void)userInteractionIsEnabled;	// IMP=0x0000000000009c59
- (void)removeTask:(id)arg1;	// IMP=0x00000000000099f1
- (void)addTask:(id)arg1;	// IMP=0x0000000000009789
- (void)resumeSync;	// IMP=0x00000000000096db
- (void)terminateSyncWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000095c2
- (void)resumeQuotas;	// IMP=0x0000000000009514
- (void)suspendQuotasWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000093fb
- (void)loginUICheckInWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000092e2
- (void)directSwitchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000009069
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000008d67
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000008d45
- (void)logoutToLoginSessionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008c2c
- (void)switchToLoginUserWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008b10
- (void)switchToLoginUserWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008af9
- (void)unregisterStakeHolder:(id)arg1 status:(unsigned long long)arg2 reason:(id)arg3;	// IMP=0x0000000000008861
- (void)registerUserSyncStakeholder:(id)arg1 withMachServiceName:(id)arg2;	// IMP=0x000000000000856a
- (void)registerCriticalUserSwitchStakeHolder:(id)arg1;	// IMP=0x000000000000843f
- (void)registerUserSwitchStakeHolder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000082c7
- (void)registerUserSwitchStakeHolder:(id)arg1;	// IMP=0x00000000000082b3
- (void)_abortIfWeDoNotHaveASyncStakeholder;	// IMP=0x0000000000008244
- (void)_abortIfWeDoNotHaveAStakeholder;	// IMP=0x00000000000081ee
- (id)init;	// IMP=0x0000000000008109

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

