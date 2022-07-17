//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarDaemon/CalActivatable-Protocol.h>
#import <CalendarDaemon/ClientConnectionDelegate-Protocol.h>
#import <CalendarDaemon/DatabaseChangeHandling-Protocol.h>
#import <CalendarDaemon/NSXPCListenerDelegate-Protocol.h>

@class NSArray, NSLock, NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CADServer : NSObject <NSXPCListenerDelegate, ClientConnectionDelegate, DatabaseChangeHandling, CalActivatable>
{
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 8 = 0x8
    int _backgroundTaskCount;	// 16 = 0x10
    NSXPCListener *_NSXPCListener;	// 24 = 0x18
    NSObject<OS_xpc_object> *_xpcConnection;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_xpcQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_tccQueue;	// 48 = 0x30
    NSMutableSet *_clientConnections;	// 56 = 0x38
    NSLock *_connectionLock;	// 64 = 0x40
    NSArray *_signalSensors;	// 72 = 0x48
    _Bool _initializationFinished;	// 80 = 0x50
    _Bool _active;	// 81 = 0x51
    NSArray *_modules;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_workQueue;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_alarmQueue;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000039047
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *alarmQueue; // @synthesize alarmQueue=_alarmQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NSArray *modules; // @synthesize modules=_modules;
- (void)_enableICloudBackups;	// IMP=0x0000000000038db6
- (void)_dumpState;	// IMP=0x0000000000038bef
- (void)_exitWithStatus:(int)arg1;	// IMP=0x0000000000038b28
- (void)_deactivateAndExitWithStatus:(int)arg1;	// IMP=0x0000000000038af7
- (void)_startBirthdayListener;	// IMP=0x0000000000038aa3
- (void)_setupBirthdayListener;	// IMP=0x0000000000038789
- (void)_registerContactsAccess;	// IMP=0x0000000000038746
- (unsigned long long)_contactsAuthorization;	// IMP=0x00000000000385d9
- (unsigned long long)_lastKnownContactsAuthorization;	// IMP=0x0000000000038587
- (void)_cleanupChangeTablesInDatabase:(struct CalDatabase *)arg1;	// IMP=0x0000000000038491
- (void)cleanupDatabase:(struct CalDatabase *)arg1;	// IMP=0x00000000000383fc
- (void)_registerForConferenceURLRenewal;	// IMP=0x00000000000383c3
- (void)_registerForChangeTableCleanup;	// IMP=0x0000000000038278
- (void)_registerForAttachmentCleanup;	// IMP=0x00000000000381b7
- (void)_registerForAnalyticsCollection;	// IMP=0x000000000003818d
- (void)_registerForDatabaseCleanup;	// IMP=0x00000000000380a7
- (void)_registerActivityWithIdentifier:(const char *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000037928
- (void)_registerMaintenanceActivities;	// IMP=0x0000000000037883
- (void)_registerForAlarmEvents;	// IMP=0x000000000003735c
- (void)_registerForNotifications;	// IMP=0x0000000000036d23
- (void)_updateOccurrenceCacheTimeZone;	// IMP=0x0000000000036b09
- (_Bool)_trimAndExtendOccurrenceCache;	// IMP=0x00000000000369d0
- (void)_tearDownSignalHandlers;	// IMP=0x00000000000368f0
- (void)_setUpSignalHandlers;	// IMP=0x00000000000363a0
- (void)_protectedDataDidBecomeAvailable;	// IMP=0x0000000000036128
- (void)_finishInitializationWithDataAvailable;	// IMP=0x000000000003606c
- (void)_handleXPCConnection:(id)arg1;	// IMP=0x0000000000035e39
- (void)clientConnectionDied:(id)arg1;	// IMP=0x0000000000035dc9
- (void)_handleDatabaseChanged;	// IMP=0x0000000000035c68
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000035b2a
- (void)deactivate;	// IMP=0x0000000000035698
- (void)activate;	// IMP=0x0000000000035258
- (void)dealloc;	// IMP=0x00000000000351b3
- (id)initWithModules:(id)arg1;	// IMP=0x0000000000034b70
- (id)init;	// IMP=0x0000000000034afc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
