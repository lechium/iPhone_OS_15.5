//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPCompanionAppServerProtocolStub : NSObject
{
}

- (void)replyTimingData:(id)arg1;	// IMP=0x00200000000090de
- (void)layoutDirection:(long long)arg1;	// IMP=0x00100000000090d8
- (void)preferredContentSizeCategory:(id)arg1;	// IMP=0x00100000000090d2
- (void)dataInterfaceWillResignActive:(id)arg1;	// IMP=0x00100000000090cc
- (void)dataInterfaceDidBecomeActive:(id)arg1;	// IMP=0x00100000000090c6
- (void)applicationDidReceiveNotification:(id)arg1 clientIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000090c0
- (void)applicationHandleWatchTaskKeys:(id)arg1 reasonForSnapshot:(unsigned long long)arg2 visibleVCID:(id)arg3 barTaskUUID:(id)arg4 clientIdentifier:(id)arg5;	// IMP=0x00100000000090ba
- (void)applicationIsStillActive;	// IMP=0x00100000000090b4
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x00100000000090ae
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x00100000000090a8
- (void)applicationDidFinishConnecting:(id)arg1;	// IMP=0x00100000000090a2
- (void)applicationContentsDidReset:(id)arg1;	// IMP=0x001000000000909c
- (void)applicationDidTerminate:(id)arg1;	// IMP=0x0010000000009096
- (void)receiveProtoData:(id)arg1 fromIdentifier:(id)arg2;	// IMP=0x0010000000009090
- (void)receiveData:(id)arg1 fromIdentifier:(id)arg2;	// IMP=0x000000000000908a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

