//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSAudioStreamProvidingDelegate-Protocol.h>
#import <CoreSpeech/CSXPCClientDelegate-Protocol.h>

@class CSAudioStream, CSXPCClient, NSString;
@protocol CSAudioStreamProviding, CSCommandControlListenerDelegate, OS_dispatch_queue;

@interface CSCommandControlListener : NSObject <CSAudioStreamProvidingDelegate, CSXPCClientDelegate>
{
    id <CSCommandControlListenerDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <CSAudioStreamProviding> _audioStreamProvider;	// 24 = 0x18
    CSAudioStream *_audioStream;	// 32 = 0x20
    CSXPCClient *_xpcClient;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000349bb
@property(retain, nonatomic) CSXPCClient *xpcClient; // @synthesize xpcClient=_xpcClient;
@property(retain, nonatomic) CSAudioStream *audioStream; // @synthesize audioStream=_audioStream;
@property(retain, nonatomic) id <CSAudioStreamProviding> audioStreamProvider; // @synthesize audioStreamProvider=_audioStreamProvider;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSCommandControlListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)CSXPCClient:(id)arg1 didDisconnect:(_Bool)arg2;	// IMP=0x00000000000346e4
- (void)audioStreamProvider:(id)arg1 didHardwareConfigurationChange:(long long)arg2;	// IMP=0x00000000000346de
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;	// IMP=0x00000000000346d8
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;	// IMP=0x0000000000034591
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;	// IMP=0x0000000000034456
- (void)stopListenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003418d
- (void)_startRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000033e1a
- (void)startListenWithOption:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033b3b
- (id)init;	// IMP=0x0000000000033ae3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
