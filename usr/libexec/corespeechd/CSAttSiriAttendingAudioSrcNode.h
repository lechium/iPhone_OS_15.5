//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSAsset, CSAttSiriController, CSSpeechManager, NSArray, NSHashTable, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CSAttSiriAttendingAudioSrcNode
{
    _Bool _isReady;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    NSArray *_requiredNodes;	// 24 = 0x18
    CSAttSiriController *_attSiriController;	// 32 = 0x20
    NSString *_mhId;	// 40 = 0x28
    NSHashTable *_receivers;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    CSSpeechManager *_speechManager;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000011c23
@property(retain, nonatomic) CSSpeechManager *speechManager; // @synthesize speechManager=_speechManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSHashTable *receivers; // @synthesize receivers=_receivers;
@property(retain, nonatomic) NSString *mhId; // @synthesize mhId=_mhId;
@property(nonatomic) __weak CSAttSiriController *attSiriController; // @synthesize attSiriController=_attSiriController;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(readonly, nonatomic) NSArray *requiredNodes; // @synthesize requiredNodes=_requiredNodes;
- (unsigned long long)type;	// IMP=0x0010000000011b20
- (void)_handleDidAudioStartWithResult:(_Bool)arg1 error:(id)arg2;	// IMP=0x00100000000119af
- (void)_handleDidStopStreamUnexpectly;	// IMP=0x0010000000011957
- (void)_handleDidStop;	// IMP=0x00100000000117d5
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;	// IMP=0x00100000000117cf
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;	// IMP=0x00100000000115fb
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;	// IMP=0x0010000000011593
- (void)dealloc;	// IMP=0x00100000000114e9
- (void)stop;	// IMP=0x00100000000114e3
- (void)pause;	// IMP=0x00100000000114dd
- (void)start;	// IMP=0x00100000000114d7
- (void)removeReceiver:(id)arg1;	// IMP=0x0010000000011420
- (void)addReceiver:(id)arg1;	// IMP=0x00100000000112e8
- (void)stopAudioStreamWithOption:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000110fb
- (void)startAudioStreamWithOption:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010f27
- (id)initWithSpeechManager:(id)arg1 audioStreamProvider:(id)arg2 streamName:(id)arg3 streamRequest:(id)arg4;	// IMP=0x0010000000010c6e
- (id)initWithAudioStreamProvider:(id)arg1 streamName:(id)arg2 streamRequest:(id)arg3;	// IMP=0x0010000000010c51
- (id)initWithAttSiriController:(id)arg1;	// IMP=0x0010000000010c12

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) CSAsset *prefetchedAsset;
@property(readonly) Class superclass;

@end
