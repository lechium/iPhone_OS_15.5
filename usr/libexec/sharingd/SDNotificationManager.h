//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet, NSString, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SDNotificationManager : NSObject
{
    _Bool _activated;	// 8 = 0x8
    NSMutableDictionary *_autoFillRequests;	// 16 = 0x10
    UNUserNotificationCenter *_homePodNotifCenter;	// 24 = 0x18
    UNUserNotificationCenter *_homePodMiniNotificationCenter;	// 32 = 0x20
    _Bool _homePodNotifGranted;	// 40 = 0x28
    NSMutableDictionary *_homePodRequests;	// 48 = 0x30
    _Bool _invalidated;	// 56 = 0x38
    NSMutableDictionary *_tvKeyboardRequests;	// 64 = 0x40
    UNUserNotificationCenter *_tvNotifCenter;	// 72 = 0x48
    _Bool _tvNotifGranted;	// 80 = 0x50
    NSMutableDictionary *_watchKeyboardRequests;	// 88 = 0x58
    UNUserNotificationCenter *_watchNotifCenter;	// 96 = 0x60
    _Bool _watchNotifGranted;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 112 = 0x70
}

+ (id)sharedManager;	// IMP=0x002000000016e1a4
- (void).cxx_destruct;	// IMP=0x00200000001764bc
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)testWatchKeyboardAutoFill;	// IMP=0x00100000001763c3
- (void)testWatchKeyboard;	// IMP=0x00100000001762f7
- (void)testKeyboardUpdate;	// IMP=0x001000000017622a
- (void)testKeyboardRemove;	// IMP=0x001000000017615e
- (void)testKeyboardPostAutoFill;	// IMP=0x001000000017607e
- (void)testKeyboardPost;	// IMP=0x0010000000175fb0
- (void)testHandoffPost;	// IMP=0x0010000000175e0c
- (void)testAutoFillRemove;	// IMP=0x0010000000175d40
- (void);	// IMP=0x0010000000175c74
- (void)testPostBasic;	// IMP=0x0010000000175b3d
- (void)testPost:(id)arg1;	// IMP=0x0010000000175969
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001753f1
- (void)_homePodHandleResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000174eef
- (void)_homePodHandoffUpdateIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x00100000001749ea
- (void)homePodHandoffUpdateIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x0010000000174911
- (void)_homePodHandoffRemoveAll;	// IMP=0x0010000000174861
- (void)homePodHandoffRemoveAll;	// IMP=0x0010000000174800
- (void)_homePodHandoffRemove:(id)arg1 reason:(long long)arg2;	// IMP=0x0010000000174557
- (void)homePodHandoffRemove:(id)arg1 reason:(long long)arg2;	// IMP=0x001000000017449f
- (void)_homePodHandoffPostIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x00100000001742c8
- (void)homePodHandoffPostIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x00100000001741ef
- (id)homePodHandoffContentForDevice:(id)arg1 info:(id)arg2;	// IMP=0x0010000000173cd6
- (void)_watchHandleResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000173c3b
- (void)_watchKeyboardUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x00100000001735bf
- (void)watchKeyboardUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x00100000001734e6
- (void)_watchKeyboardUpdate:(id)arg1 info:(id)arg2;	// IMP=0x001000000017306b
- (void)watchKeyboardUpdate:(id)arg1 info:(id)arg2;	// IMP=0x0010000000172f92
- (void)_watchKeyboardRemoveAll;	// IMP=0x0010000000172f0e
- (void)watchKeyboardRemoveAll;	// IMP=0x0010000000172ead
- (void)_watchKeyboardRemove:(id)arg1;	// IMP=0x0010000000172d27
- (void)watchKeyboardRemove:(id)arg1;	// IMP=0x0010000000172c7f
- (void)_watchKeyboardPostIfNeeded:(id)arg1;	// IMP=0x0010000000172b00
- (void)watchKeyboardPostIfNeeded:(id)arg1;	// IMP=0x0010000000172a58
- (id)watchKeyboardContentForDevice:(id)arg1;	// IMP=0x0010000000172727
- (void)_tvAutoFillRemoveAll;	// IMP=0x0010000000172697
- (void)tvAutoFillRemoveAll;	// IMP=0x0010000000172636
- (void)_tvAutoFillRemove:(id)arg1;	// IMP=0x00100000001724b0
- (void)tvAutoFillRemove:(id)arg1;	// IMP=0x0010000000172408
- (void)_tvAutoFillPostIfNeeded:(id)arg1;	// IMP=0x00100000001720da
- (void)tvAutoFillPostIfNeeded:(id)arg1;	// IMP=0x0010000000172032
@property(readonly, copy, nonatomic) NSSet *activeTVAutoFillPrompts;
- (void)_riServerUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x001000000017193c
- (void)riServerUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x0010000000171863
- (void)_riServerUpdate:(id)arg1 info:(id)arg2;	// IMP=0x00100000001713e8
- (void)riServerUpdate:(id)arg1 info:(id)arg2;	// IMP=0x001000000017130f
- (void)_riServerRemoveAll;	// IMP=0x001000000017128b
- (void)riServerRemoveAll;	// IMP=0x001000000017122a
- (void)_riServerRemove:(id)arg1;	// IMP=0x00100000001710a4
- (void)riServerRemove:(id)arg1;	// IMP=0x0010000000170ffc
- (void)_riServerPostIfNeeded:(id)arg1 backgroundAction:(_Bool)arg2;	// IMP=0x0010000000170e55
- (void)riServerPostIfNeeded:(id)arg1 backgroundAction:(_Bool)arg2;	// IMP=0x0010000000170d9d
- (id)riServerContentForDevice:(id)arg1 backgroundAction:(_Bool)arg2;	// IMP=0x0010000000170ab0
- (void)_tvHandleResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000017044a
- (id)attachmentFromURL:(id)arg1;	// IMP=0x0010000000170247
- (void)_addRequestWithID:(id)arg1 content:(id)arg2 type:(unsigned int)arg3 isHomePodMini:(_Bool)arg4;	// IMP=0x001000000016f90f
- (void)_addRequestWithID:(id)arg1 content:(id)arg2 type:(unsigned int)arg3;	// IMP=0x001000000016f8fa
- (void)_homePodEnsureStarted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000016f18d
- (void)_watchEnsureStarted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000016edde
- (void)_riServerEnsureStarted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000016ea22
- (void)_update;	// IMP=0x001000000016e9c4
- (void)prefsChanged;	// IMP=0x001000000016e9b2
- (void)_invalidate;	// IMP=0x001000000016e965
- (void)invalidate;	// IMP=0x001000000016e904
- (void)_activate;	// IMP=0x001000000016e883
- (void)activate;	// IMP=0x001000000016e820
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x001000000016e1f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

