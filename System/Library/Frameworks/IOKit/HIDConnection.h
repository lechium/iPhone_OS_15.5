//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HIDConnection : NSObject
{
    struct {
        struct __IOHIDEventSystem *system;
        struct __CFDictionary *notifications;
        struct __IOHIDEventQueue *queue;
        struct __IOMIGMachPort *port;
        unsigned int reply_port;
        CDUnknownFunctionPointerType demuxCallback;
        void *demuxRefcon;
        CDUnknownFunctionPointerType terminationCallback;
        void *terminationRefcon;
        struct __CFSet *services;
        int pid;
        NSObject<OS_dispatch_queue> *dispatchQueue;
        unsigned int sendPossiblePort;
        NSObject<OS_dispatch_source> *sendPossibleSource;
        NSObject<OS_dispatch_source> *replySendPossibleSource;
        unsigned int sendPossible;
        struct __CFSet *propertySet;
        struct __CFString *caller;
        struct __CFString *procName;
        struct __CFString *uuid;
        char *uuidStr;
        int type;
        struct __CFDictionary *attributes;
        unsigned int task_name_port;
        struct {
            unsigned int val[8];
        } audit_token;
        struct os_unfair_recursive_lock_s lock;
        union IOHIDEventSystemConnectionEntitlements *entitlements;
        unsigned int disableProtectedServices;
        int filterPriority;
        unsigned int state;
        struct os_unfair_lock_s notificationsLock;
        struct __CFDictionary *virtualServices;
        unsigned long long eventFilterMask;
        unsigned int eventFilteredCount;
        unsigned int eventFilterTimeoutCount;
        unsigned int droppedEventCount;
        unsigned int currentDroppedEventCount;
        unsigned long long droppedEventTypeMask;
        unsigned int eventCount;
        unsigned long long eventMask;
        struct timeval lastDroppedEventTime;
        struct timeval firstDroppedEventTime;
        unsigned long long maxEventLatency;
        int droppedEventStatus;
        unsigned long long propertyChangeNotificationHandlingTime;
        struct __CFData *eventLog;
        unsigned int *eventTypeCnt;
        unsigned int activityState;
        unsigned int activityStateChangeCount;
        unsigned long long idleNotificationTime;
        NSObject<OS_dispatch_source> *activityDispatchSource;
        struct __IOHIDNotification *activityNotification;
        struct __CFData *activityLog;
        struct __IOHIDConnectionFilter *filter;
    } _connection;	// 8 = 0x8
}

- (void)dealloc;	// IMP=0x0000000000002867
- (id)description;	// IMP=0x0000000000002855
- (unsigned long long)_cfTypeID;	// IMP=0x000000000000284b

@end

