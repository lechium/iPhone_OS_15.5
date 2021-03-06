//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVOutputContext, NSMapTable, NSString;
@protocol MRDAirPlayRemoteControlServiceDelegate;

@interface MRDAirPlayRemoteControlService : NSObject
{
    AVOutputContext *_systemMusicContext;	// 8 = 0x8
    _Bool _started;	// 16 = 0x10
    NSMapTable *_connections;	// 24 = 0x18
    id <MRDAirPlayRemoteControlServiceDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000a4534
@property(nonatomic) __weak id <MRDAirPlayRemoteControlServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didCloseCommunicationChannelWithID:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x00100000000a43b6
- (void)_didReceiveData:(id)arg1 fromConnectionID:(unsigned long long)arg2 connectionFactory:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a415a
- (void)failedToSetupReverseCommunicationChannel:(id)arg1;	// IMP=0x00100000000a4154
- (void)didSetupReverseCommunicationChannel:(id)arg1;	// IMP=0x00100000000a414e
- (void)didCloseCommunicationChannel:(id)arg1;	// IMP=0x00100000000a40dd
- (void)didReceiveData:(id)arg1 fromCommunicationChannel:(id)arg2;	// IMP=0x00100000000a3fe4
- (void)outputContext:(id)arg1 didCloseCommunicationChannel:(id)arg2;	// IMP=0x00100000000a3f73
- (void)outputContext:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3;	// IMP=0x00100000000a3e4c
- (void)startContext:(id)arg1;	// IMP=0x00100000000a3e31
- (void)stop;	// IMP=0x00100000000a3d4e
- (void)start;	// IMP=0x00100000000a3bf8
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;	// IMP=0x00100000000a3ad2
- (id)init;	// IMP=0x00100000000a3a68

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

