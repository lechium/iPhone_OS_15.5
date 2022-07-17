//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSAudioStream, MISSING_TYPE, NSString;

@interface CSAudioTandemStream
{
    CSAudioStream *_primaryStream;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000059d74
@property(nonatomic) __weak CSAudioStream *primaryStream; // @synthesize primaryStream=_primaryStream;
- (MISSING_TYPE *)isStreaming;	// IMP=0x0010000000059d03
- (void)stopAudioStreamWithOption:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000059cc7
- (void)startAudioStreamWithOption:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000059c8b
- (void)prepareAudioStreamWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000059c4f
- (_Bool)prepareAudioStreamSyncWithRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000059c23
- (void)attachToPrimaryStreamWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000059ad2
- (id)initWithMasterAudioStream:(id)arg1 name:(id)arg2;	// IMP=0x00100000000599ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
