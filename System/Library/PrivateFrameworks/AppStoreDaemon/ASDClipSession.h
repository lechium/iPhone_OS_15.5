//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDClipSessionChannel-Protocol.h>

@class ASDClipRequest, NSString, NSUUID;
@protocol ASDClipServiceBroker, ASDClipSessionDelegate, OS_dispatch_queue;

@interface ASDClipSession : NSObject <ASDClipSessionChannel>
{
    id <ASDClipServiceBroker> _broker;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    ASDClipRequest *_request;	// 24 = 0x18
    id <ASDClipSessionDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000071580
@property(nonatomic) __weak id <ASDClipSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_establishBoostingConnection;	// IMP=0x0000000000071226
- (void)_dispatchHandler:(CDUnknownBlockType)arg1 withError:(id)arg2;	// IMP=0x0000000000071144
- (void)_dispatchFailWithError:(id)arg1;	// IMP=0x0000000000071019
- (void)channelStateDidClose;	// IMP=0x0000000000071013
- (void)channelStateDidOpen;	// IMP=0x000000000007100d
- (void)channelNotifyDidProgress:(double)arg1;	// IMP=0x0000000000070ef2
- (void)channelNotifyDidInstallPlaceholder;	// IMP=0x0000000000070dba
- (void)channelNotifyDidFailWithError:(id)arg1;	// IMP=0x0000000000070c92
- (void)channelNotifyDidComplete;	// IMP=0x0000000000070b99
- (void)installPlaceholderWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000708fb
- (void)downloadAndInstallWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000708e9
- (void)continueInstallWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000007064b
- (void)cancelInstallWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000703ad
- (void)startDownloadWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000007010f
@property(readonly, nonatomic) NSUUID *uniqueID;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2 usingBroker:(id)arg3;	// IMP=0x000000000006ff12
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000006fe7b
- (id)initWithRequest:(id)arg1;	// IMP=0x000000000006fe67

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
