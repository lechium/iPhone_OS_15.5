//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener;

@interface ConnectionReceiver : NSObject
{
    NSXPCListener *_connectionListener;	// 8 = 0x8
}

+ (id)sharedReceiver;	// IMP=0x0020000000007941
- (void).cxx_destruct;	// IMP=0x002000000000a207
@property(retain, nonatomic) NSXPCListener *connectionListener; // @synthesize connectionListener=_connectionListener;
- (void)didReceiveStorePushNotificationWithPayload:(id)arg1;	// IMP=0x001000000000a084
- (void)presentProductPageWithTitle:(id)arg1 body:(id)arg2 approve:(id)arg3 decline:(id)arg4 itemIdentifier:(id)arg5 previewURL:(id)arg6;	// IMP=0x0010000000009ad8
- (void)updateRequestWithIdentifier:(id)arg1 action:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000096c7
- (void)presentApprovalSheetWithRequestIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009379
- (void)localApproveRequestWithItemIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008f86
- (void)getCachedRequestsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008dd1
- (void)checkDownloadQueueWithContentType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008a9e
- (void)resetAccountWithType:(long long)arg1;	// IMP=0x00100000000084cf
- (void)addRequestWithURL:(id)arg1 account:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000808c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000007b6c
- (void)start;	// IMP=0x0010000000007996

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

