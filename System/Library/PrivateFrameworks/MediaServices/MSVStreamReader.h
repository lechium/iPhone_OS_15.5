//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaServices/NSStreamDelegate-Protocol.h>

@class NSInputStream, NSString;
@protocol OS_dispatch_queue;

@interface MSVStreamReader : NSObject <NSStreamDelegate>
{
    _Bool _closeOnStop;	// 8 = 0x8
    _Bool _stopped;	// 9 = 0x9
    struct z_stream_s *_zstreamp;	// 16 = 0x10
    _Bool _compress;	// 24 = 0x18
    CDUnknownBlockType _didReadDataBlock;	// 32 = 0x20
    CDUnknownBlockType _didFinishReadingBlock;	// 40 = 0x28
    CDUnknownBlockType _didEncounterErrorBlock;	// 48 = 0x30
    unsigned long long _maximumBufferSize;	// 56 = 0x38
    double _timestamp;	// 64 = 0x40
    NSInputStream *_stream;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000020df7
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSInputStream *stream; // @synthesize stream=_stream;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic, getter=shouldCompress) _Bool compress; // @synthesize compress=_compress;
@property(nonatomic) unsigned long long maximumBufferSize; // @synthesize maximumBufferSize=_maximumBufferSize;
@property(copy, nonatomic) CDUnknownBlockType didEncounterErrorBlock; // @synthesize didEncounterErrorBlock=_didEncounterErrorBlock;
@property(copy, nonatomic) CDUnknownBlockType didFinishReadingBlock; // @synthesize didFinishReadingBlock=_didFinishReadingBlock;
@property(copy, nonatomic) CDUnknownBlockType didReadDataBlock; // @synthesize didReadDataBlock=_didReadDataBlock;
- (void)_stop;	// IMP=0x0000000000020c3d
- (_Bool)_shouldHandleEvent;	// IMP=0x0000000000020c30
- (id)_compressedDataForData:(id)arg1;	// IMP=0x0000000000020a0b
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x0000000000020644
- (void)readAllDataIntoFileHandle:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002036a
- (void)readAllDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000020089
- (id)readAllDataWithError:(id *)arg1;	// IMP=0x000000000001fef1
- (void)stopWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001fe66
- (void)stop;	// IMP=0x000000000001fe52
- (void)dealloc;	// IMP=0x000000000001fd87
- (void)start;	// IMP=0x000000000001fa83
- (id)initWithInputStream:(id)arg1 queue:(id)arg2;	// IMP=0x000000000001f942

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

