//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/SFCompanionXPCManagerObserver-Protocol.h>
#import <Sharing/SFRemoteHotspotClient-Protocol.h>

@class NSString;
@protocol SFRemoteHotspotProtocol, SFRemoteHotspotSessionDelegate;

@interface SFRemoteHotspotSession : NSObject <SFRemoteHotspotClient, SFCompanionXPCManagerObserver>
{
    _Bool _browsing;	// 8 = 0x8
    id <SFRemoteHotspotSessionDelegate> _delegate;	// 16 = 0x10
    id <SFRemoteHotspotProtocol> _connectionProxy;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003d821
@property(retain) id <SFRemoteHotspotProtocol> connectionProxy; // @synthesize connectionProxy=_connectionProxy;
@property _Bool browsing; // @synthesize browsing=_browsing;
@property(nonatomic) __weak id <SFRemoteHotspotSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)xpcManagerConnectionInterrupted;	// IMP=0x000000000003d767
- (void)updatedFoundDeviceList:(id)arg1;	// IMP=0x000000000003d693
- (void)removeDedicatedCellularBearerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003d61d
- (void)addDedicatedCellularBearer:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003d593
- (void)enableRemoteHotspotForDevice:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003d58d
- (void)enableHotspotForDevice:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003d587
- (void)stopBrowsing;	// IMP=0x000000000003d581
- (void)startBrowsing;	// IMP=0x000000000003d57b
- (id)init;	// IMP=0x000000000003d4e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
