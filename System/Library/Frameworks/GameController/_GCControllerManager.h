//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/GameControllerClientProtocol-Protocol.h>
#import <GameController/_GCHIDEventSource-Protocol.h>
#import <GameController/_GCIPCObjectMaterializationContext-Protocol.h>
#import <GameController/_GCIPCObjectRegistry-Protocol.h>
#import <GameController/_GCIPCServiceRegistry-Protocol.h>
#import <GameController/_GCImplicitIPCObject-Protocol.h>

@class GCController, GCExtendedGamepad, GCKeyboardAndMouseManager, GCMicroGamepad, GCMouse, NSMapTable, NSMutableArray, NSMutableDictionary, NSString, NSThread, NSTimer, NSXPCConnection, _GCHIDEventSubject;
@protocol GCRemoteDaemonProxy, NSObject><NSCopying><NSSecureCoding, OS_dispatch_queue, _GCIPCObjectRegistry, _GCIPCServiceRegistry;

@interface _GCControllerManager : NSObject <_GCImplicitIPCObject, _GCIPCObjectRegistry, _GCIPCServiceRegistry, _GCIPCObjectMaterializationContext, GameControllerClientProtocol, _GCHIDEventSource>
{
    NSObject<OS_dispatch_queue> *_controllersQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_hidSystemClientQueue;	// 16 = 0x10
    struct os_unfair_lock_s _ipcRegistryLock;	// 24 = 0x18
    NSMapTable *_ipcObjectRegistry;	// 32 = 0x20
    struct __IOHIDEventSystemClient *_hidSystemClient;	// 40 = 0x28
    _GCHIDEventSubject *_hidEventSource;	// 48 = 0x30
    GCController *_currentController;	// 56 = 0x38
    GCMicroGamepad *_currentMicroGamepad;	// 64 = 0x40
    GCExtendedGamepad *_currentExtendedGamepad;	// 72 = 0x48
    NSXPCConnection *_connection;	// 80 = 0x50
    NSXPCConnection *_daemonConnection;	// 88 = 0x58
    NSObject<GCRemoteDaemonProxy> *_remote;	// 96 = 0x60
    NSThread *_hidInputThread;	// 104 = 0x68
    struct __CFRunLoop *_hidInputThreadRunLoop;	// 112 = 0x70
    struct __CFRunLoopSource *_hidThreadRunLoopSource;	// 120 = 0x78
    NSMutableArray *_hidThreadExecutionBlocks;	// 128 = 0x80
    struct __IOHIDManager *_hidManager;	// 136 = 0x88
    struct IONotificationPort *_usbNotify;	// 144 = 0x90
    unsigned int _usbAddedIterator;	// 152 = 0x98
    unsigned int _usbRemovedIterator;	// 156 = 0x9c
    id _hidEventObservation;	// 160 = 0xa0
    _Bool _shouldKeepRunning;	// 168 = 0xa8
    CDUnknownBlockType _requestConnectedHostsCallback;	// 176 = 0xb0
    NSMutableDictionary *_controllersByUDID;	// 184 = 0xb8
    NSMutableDictionary *_controllersByRegistryID;	// 192 = 0xc0
    CDUnknownBlockType _logger;	// 200 = 0xc8
    GCController *_firstMicroGamepad;	// 208 = 0xd0
    NSTimer *_idleWatchTimer;	// 216 = 0xd8
    _Bool _gameControllerActive;	// 224 = 0xe0
    _Bool _isAppInBackground;	// 225 = 0xe1
    long long _currentMediaRemoteInputMode;	// 232 = 0xe8
    GCKeyboardAndMouseManager *_keyboardAndMouseManager;	// 240 = 0xf0
    GCController *__controller_genericBTRemote;	// 248 = 0xf8
    _Bool _shouldMonitorBackgroundEvents;	// 256 = 0x100
    NSObject<OS_dispatch_queue> *_hidSystemPropertyQueue;	// 264 = 0x108
}

+ (void)initialize;	// IMP=0x000000000001fd98
+ (id)sharedInstance;	// IMP=0x000000000001fd2e
- (void).cxx_destruct;	// IMP=0x0000000000020bbd
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *hidSystemPropertyQueue; // @synthesize hidSystemPropertyQueue=_hidSystemPropertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *controllersQueue; // @synthesize controllersQueue=_controllersQueue;
- (void)open;	// IMP=0x0000000000020b06
- (id)observeHIDEvents:(CDUnknownBlockType)arg1;	// IMP=0x0000000000020af0
- (id)observeHIDEvents:(CDUnknownBlockType)arg1 forService:(id)arg2;	// IMP=0x0000000000020ada
- (void)teardownHIDMonitor:(_Bool)arg1;	// IMP=0x000000000002098b
- (void)setupHIDMonitor:(_Bool)arg1;	// IMP=0x000000000002028b
- (void)onScreenshotTriggeredWithController:(id)arg1;	// IMP=0x0000000000020285
- (void)onVideoRecordingToggledWithController:(id)arg1 mode:(long long)arg2;	// IMP=0x000000000002027f
- (void)onVideoRecordingToggledWithController:(id)arg1;	// IMP=0x0000000000020279
- (void)stopVideoRecordingBuffering;	// IMP=0x0000000000020273
- (void)startVideoRecordingBuffering;	// IMP=0x000000000002026d
- (void)enableKeyboardAndMouseSupport;	// IMP=0x0000000000020267
- (void)onHIDDeviceRemoved:(struct __IOHIDServiceClient *)arg1;	// IMP=0x0000000000020261
- (void)onHIDDeviceAdded:(struct __IOHIDServiceClient *)arg1;	// IMP=0x000000000002025b
- (id)makeHIDEventSource:(struct __IOHIDEventSystemClient *)arg1;	// IMP=0x0000000000020249
- (id)HIDDeviceMatchingAttributes;	// IMP=0x0000000000020096
@property(nonatomic) _Bool shouldMonitorBackgroundEvents; // @synthesize shouldMonitorBackgroundEvents=_shouldMonitorBackgroundEvents;
- (void)dealloc;	// IMP=0x000000000001ff70
- (id)init;	// IMP=0x000000000001fe4a
@property(readonly) id <_GCIPCServiceRegistry> IPCServiceRegistry;
@property(readonly) id <_GCIPCObjectRegistry> IPCObjectRegistry;
- (id)serviceClientForIPCService:(id)arg1;	// IMP=0x0000000000020e60
- (void)registerIPCObject:(id)arg1;	// IMP=0x0000000000020d54
- (id)IPCObjectWithIdentifier:(id)arg1;	// IMP=0x0000000000020ced
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier;
- (void)microControllerWithUDID:(unsigned long long)arg1 setDigitizerX:(float)arg2 digitizerY:(float)arg3 withTimeStamp:(unsigned long long)arg4 touchDown:(_Bool)arg5;	// IMP=0x00000000000a096f
- (void)microControllerWithDigitizerX:(float)arg1 withY:(float)arg2 withTimeStamp:(unsigned long long)arg3 touchDown:(_Bool)arg4;	// IMP=0x00000000000a0969
- (void)controllerWithUDID:(unsigned long long)arg1 setValue0:(float)arg2 setValue1:(float)arg3 setValue2:(float)arg4 setValue3:(float)arg5 forElement:(int)arg6;	// IMP=0x00000000000a05bb
- (void)controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3;	// IMP=0x000000000009f2dc
- (void)controller:(id)arg1 setValue:(float)arg2 forElement:(int)arg3;	// IMP=0x000000000009f28f
- (void)controllerWithUDID:(unsigned long long)arg1 setData:(id)arg2;	// IMP=0x000000000009f198
- (void)addControllerForAppStoreRemote:(id)arg1;	// IMP=0x000000000009f00a
- (_Bool)combineSiriRemoteHIDDevicesWithNewController:(id)arg1 existingController:(id)arg2;	// IMP=0x000000000009e7a9
@property(nonatomic) __weak GCController *firstMicroGamepad;
- (int)connectedATVRemoteCount;	// IMP=0x000000000009e54c
- (void)removeCoalescedControllerComponent:(id)arg1;	// IMP=0x000000000009df5b
- (void)_legacy_updateControllerWithEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000000009dbdf
@property(retain) GCExtendedGamepad *currentExtendedGamepad;
@property(retain) GCMicroGamepad *currentMicroGamepad;
@property(retain) GCController *currentController;
- (id)_legacy_coalescedKeyboard;	// IMP=0x000000000009d321
- (id)coalescedKeyboard;	// IMP=0x000000000009d30f
@property(retain) GCMouse *currentMouse;
- (id)_legacy_mice;	// IMP=0x000000000009d2af
- (id)mice;	// IMP=0x000000000009d29d
- (void)_legacy_removeControllerWithServiceRef:(struct __IOHIDServiceClient *)arg1;	// IMP=0x000000000009d123
- (void)_legacy_addControllerWithServiceRef:(struct __IOHIDServiceClient *)arg1;	// IMP=0x000000000009cf77
- (_Bool)isExistingController:(id)arg1;	// IMP=0x000000000009cd8f
- (id)_legacy_controllers;	// IMP=0x000000000009ca89
- (void)_queue_removeController:(id)arg1 registryID:(id)arg2;	// IMP=0x000000000009c62a
- (void)removeController:(id)arg1 registryID:(id)arg2;	// IMP=0x000000000009c4f0
- (void)removeController:(id)arg1;	// IMP=0x000000000009c4dc
- (void)addController:(id)arg1;	// IMP=0x000000000009c072
- (void)storeController:(id)arg1;	// IMP=0x000000000009bd39
- (void)_legacy_unpublishController:(id)arg1;	// IMP=0x000000000009bae5
- (void)updateCurrentControllerAndProfileForUnpublishedController:(id)arg1;	// IMP=0x000000000009b4e8
- (void)_legacy_publishController:(id)arg1;	// IMP=0x000000000009b266
- (id)controllers;	// IMP=0x000000000009b254
- (void)_legacy_stopHIDEventMonitor;	// IMP=0x000000000009b1c7
- (void)_legacy_startHIDEventMonitor;	// IMP=0x000000000009b0b4
- (void)_legacy_stopHIDDeviceMonitor;	// IMP=0x000000000009b031
- (void)_legacy_startHIDDeviceMonitor;	// IMP=0x000000000009afab
- (id)_legacy_makeHIDEventSource:(struct __IOHIDEventSystemClient *)arg1;	// IMP=0x000000000009ae5b
@property(nonatomic) struct __IOHIDManager *hidManager;
- (void)startIdleWatchTimer;	// IMP=0x000000000009add5
- (void)updateIdleTimer:(id)arg1;	// IMP=0x000000000009ad9a
@property(nonatomic) _Bool gameControllerActive;
- (void)CBApplicationDidBecomeActive;	// IMP=0x000000000009aa3c
- (void)CBApplicationWillResignActive;	// IMP=0x000000000009a6ff
@property(readonly, nonatomic) _Bool isAppInBackground;
@property(retain, nonatomic) NSObject<GCRemoteDaemonProxy> *remote;
@property(retain, nonatomic) NSXPCConnection *daemonConnection;
@property(retain, nonatomic) NSXPCConnection *connection;
- (void)async_HIDBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000009a578
- (void)launchHIDInputThread;	// IMP=0x000000000009a521
- (void)threadHIDInputOnMain:(id)arg1;	// IMP=0x000000000009a497
- (void)threadHIDInputOffMain:(id)arg1;	// IMP=0x000000000009a29c
@property(readonly, nonatomic) NSMutableArray *hidThreadExecutionBlocks;
@property(readonly, nonatomic) struct __CFRunLoopSource *hidThreadRunLoopSource;
@property(readonly, nonatomic) struct __CFRunLoop *hidInputThreadRunLoop;
@property(readonly, nonatomic) NSThread *hidInputThread;
- (void)_legacy_dealloc;	// IMP=0x000000000009a14f
- (void)_legacy_init;	// IMP=0x0000000000099fcc
@property(copy, nonatomic) CDUnknownBlockType logger;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

