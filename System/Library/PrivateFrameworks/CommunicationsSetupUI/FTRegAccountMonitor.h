//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTRegConnectionHandler, IMServiceImpl, NSArray;

__attribute__((visibility("hidden")))
@interface FTRegAccountMonitor : NSObject
{
    long long _serviceType;	// 8 = 0x8
    IMServiceImpl *_service;	// 16 = 0x10
    NSArray *_accounts;	// 24 = 0x18
    FTRegConnectionHandler *_connectionHandler;	// 32 = 0x20
    CDStruct_34e8bc21 _monitorFlags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000638f1
@property(readonly, retain, nonatomic) NSArray *activeAccounts; // @synthesize activeAccounts=_accounts;
@property(nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) IMServiceImpl *service; // @synthesize service=_service;
- (void)_handleDaemonConnected:(id)arg1;	// IMP=0x00000000000637cc
- (void)_handleAccountNotification:(id)arg1;	// IMP=0x000000000006363c
- (void)_stopListeningForNotifications;	// IMP=0x00000000000634b4
- (void)_startListeningForNotifications;	// IMP=0x00000000000632ea
- (_Bool)_shouldHandleAccountNofication:(id)arg1;	// IMP=0x0000000000063229
- (void)_updateAccountState:(_Bool)arg1;	// IMP=0x0000000000062ccb
- (id)_activeAccounts;	// IMP=0x00000000000629f8
- (id)logName;	// IMP=0x000000000006296b
- (void)dealloc;	// IMP=0x00000000000628f6
- (id)initWithServiceType:(long long)arg1;	// IMP=0x00000000000626e0

@end

