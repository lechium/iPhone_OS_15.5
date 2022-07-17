//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol ICPeerMessageControllerDelegate;

@interface ICPeerMessageController : NSObject
{
    NSMutableDictionary *_deviceRequests;	// 8 = 0x8
    NSMutableDictionary *_sourceToDevices;	// 16 = 0x10
    NSMutableDictionary *_deviceUUIDToSource;	// 24 = 0x18
    id <ICPeerMessageControllerDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000012b563
@property(nonatomic) __weak id <ICPeerMessageControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)sendMessage:(void *)arg1 toSource:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000012b3cb
- (id)sendMessage:(void *)arg1 toSources:(id)arg2;	// IMP=0x000000000012b0f5
- (id)sendMessage:(void *)arg1 toDevices:(id)arg2;	// IMP=0x000000000012aeaa
- (void)handleMessage:(id)arg1 fromSource:(id)arg2;	// IMP=0x000000000012abcc
- (void)handleKeepAliveMessage:(const void *)arg1 fromDevice:(id)arg2;	// IMP=0x000000000012ab1b
- (void)handleMediaMessage:(const void *)arg1 fromDevice:(id)arg2;	// IMP=0x000000000012a823
- (void)handleUnavailableMediaMessage:(const void *)arg1 fromDevice:(id)arg2;	// IMP=0x000000000012a575
- (void)handleRequestMedia:(const void *)arg1 fromDevice:(id)arg2;	// IMP=0x000000000012a0b1
- (void)handleAttachment:(const void *)arg1 fromDevice:(id)arg2;	// IMP=0x00000000001296f0
- (void)handleRequestAttachment:(const void *)arg1 fromDevice:(id)arg2;	// IMP=0x0000000000128d52
- (void)handleRequestNoteMessage:(const void *)arg1 fromDevice:(id)arg2;	// IMP=0x0000000000128b16
- (void)handleNoteMessage:(const void *)arg1 fromDevice:(id)arg2 data:(id)arg3;	// IMP=0x00000000001285b1
- (void)didFinishReceivingResourceWithName:(id)arg1 fromSource:(id)arg2 atURL:(id)arg3 withError:(id)arg4;	// IMP=0x0000000000128268
- (id)mediaRequestForDevice:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0000000000127f64
- (void)sendKeepAlive;	// IMP=0x0000000000127e7f
- (void)disconnectedFromSource:(id)arg1;	// IMP=0x0000000000127ac3
- (void)sendMediaURL:(id)arg1 toSource:(id)arg2;	// IMP=0x000000000012768b
- (id)sendNote:(id)arg1 toDevices:(id)arg2;	// IMP=0x00000000001272ef
- (void)requestMedia:(id)arg1;	// IMP=0x0000000000126e63
- (void)requestAttachment:(id)arg1;	// IMP=0x00000000001268b6
- (void)requestNote:(id)arg1 from:(id)arg2;	// IMP=0x00000000001265e3
- (id)deviceRequestsForUUID:(id)arg1;	// IMP=0x000000000012653e
- (id)init;	// IMP=0x0000000000126490

@end
