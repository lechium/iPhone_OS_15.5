//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreNFC/NFReaderSessionCallbacks-Protocol.h>

@class NSString;

@interface NFCNDEFReaderSession <NFReaderSessionCallbacks>
{
    _Bool _invalidateAfterFirstRead;	// 8 = 0x8
    unsigned long long _tagsRead;	// 16 = 0x10
}

+ (_Bool)readingAvailable;	// IMP=0x0000000000013876
- (void)_callbackDidBecomeActive;	// IMP=0x0000000000013df7
- (void)connectToTag:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000139e9
- (void)restartPolling;	// IMP=0x0000000000013894
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 invalidateAfterFirstRead:(_Bool)arg3;	// IMP=0x0000000000013790
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 pollMethod:(unsigned long long)arg3;	// IMP=0x000000000001377b
- (void)didDetectNDEFMessages:(id)arg1 fromTags:(id)arg2 connectedTagIndex:(unsigned long long)arg3 updateUICallback:(CDUnknownBlockType)arg4;	// IMP=0x00000000000129ad
- (void)didTerminate:(id)arg1;	// IMP=0x000000000001297e
- (id)initWithDelegate:(id)arg1 sessionDelegateType:(long long)arg2 queue:(id)arg3 pollMethod:(unsigned long long)arg4 sessionConfig:(unsigned long long)arg5;	// IMP=0x0000000000012924

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

