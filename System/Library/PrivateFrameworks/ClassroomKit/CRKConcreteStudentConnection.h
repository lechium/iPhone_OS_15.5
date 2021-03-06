//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKStudentConnection-Protocol.h>
#import <ClassroomKit/CRKStudentDaemonProxyObserver-Protocol.h>

@class CRKStudentDaemonProxy, NSHashTable, NSString;

@interface CRKConcreteStudentConnection : NSObject <CRKStudentDaemonProxyObserver, CRKStudentConnection>
{
    CRKStudentDaemonProxy *_studentDaemonProxy;	// 8 = 0x8
    CDUnknownBlockType _invalidationHandler;	// 16 = 0x10
    NSHashTable *_notificationObservations;	// 24 = 0x18
}

+ (id)connectionWithStudentDaemonProxy:(id)arg1 invalidationHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c8bc
- (void).cxx_destruct;	// IMP=0x000000000001cd60
@property(readonly, nonatomic) NSHashTable *notificationObservations; // @synthesize notificationObservations=_notificationObservations;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(readonly, nonatomic) CRKStudentDaemonProxy *studentDaemonProxy; // @synthesize studentDaemonProxy=_studentDaemonProxy;
- (void)daemonProxy:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000000001cbb3
- (void)daemonProxyDidDisconnect:(id)arg1;	// IMP=0x000000000001cb32
- (id)observeNotificationWithName:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001ca82
- (void)invalidate;	// IMP=0x000000000001ca45
- (id)operationForRequest:(id)arg1;	// IMP=0x000000000001c9c2
- (id)initWithStudentDaemonProxy:(id)arg1 invalidationHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c7ee
- (void)dealloc;	// IMP=0x000000000001c7b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

