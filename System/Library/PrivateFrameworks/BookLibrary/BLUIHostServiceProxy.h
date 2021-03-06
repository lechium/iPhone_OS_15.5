//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BookLibrary/BLUIHostServiceProtocol-Protocol.h>

@class BLDownloadQueue, BLRequest, BLUIHostServiceNonUI;
@protocol BLDownloadQueueUIManagerProtocol;

@interface BLUIHostServiceProxy : NSObject <BLUIHostServiceProtocol>
{
    BLDownloadQueue *_downloadQueue;	// 8 = 0x8
    BLUIHostServiceNonUI *_fallback;	// 16 = 0x10
    BLRequest *_request;	// 24 = 0x18
    id <BLDownloadQueueUIManagerProtocol> _uiManagerDelegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000003c07
@property(readonly) __weak id <BLDownloadQueueUIManagerProtocol> uiManagerDelegate; // @synthesize uiManagerDelegate=_uiManagerDelegate;
@property(readonly) __weak BLRequest *request; // @synthesize request=_request;
@property(readonly) BLUIHostServiceNonUI *fallback; // @synthesize fallback=_fallback;
@property(readonly) __weak BLDownloadQueue *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
- (id)_topMostViewController;	// IMP=0x00000000000035b6
- (void)handleEngagementRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002e06
- (void)handleDialogRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002787
- (void)handleAuthenticateRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002154
- (id)initWithUIManager:(id)arg1 forRequest:(id)arg2 inDownloadQueue:(id)arg3;	// IMP=0x0000000000002083

@end

