//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSInputStream.h>

#import <CompanionSync/NSStreamDelegate-Protocol.h>
#import <CompanionSync/SYStreamEventHandlerBlocks-Protocol.h>
#import <CompanionSync/SYStreamProgress-Protocol.h>
#import <CompanionSync/SYStreamThroughputCounter-Protocol.h>
#import <CompanionSync/_SYStreamRunLoopSourceHandler-Protocol.h>

@class NSProgress, NSString, NSURL, _SYStreamGuts;

@interface SYCompressedFileInputStream : NSInputStream <_SYStreamRunLoopSourceHandler, NSStreamDelegate, SYStreamEventHandlerBlocks, SYStreamThroughputCounter, SYStreamProgress>
{
    NSURL *_url;	// 8 = 0x8
    struct gzFile_s *_file;	// 16 = 0x10
    _SYStreamGuts *_internal;	// 24 = 0x18
    CDUnknownBlockType _onOpenComplete;	// 32 = 0x20
    CDUnknownBlockType _onBytesAvailable;	// 40 = 0x28
    CDUnknownBlockType _onSpaceAvailable;	// 48 = 0x30
    CDUnknownBlockType _onEndOfFile;	// 56 = 0x38
    CDUnknownBlockType _onError;	// 64 = 0x40
    CDUnknownBlockType _onClose;	// 72 = 0x48
    NSProgress *_progress;	// 80 = 0x50
    unsigned long long _byteCount;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000000bc63
@property(readonly, nonatomic) unsigned long long bytesThroughput; // @synthesize bytesThroughput=_byteCount;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(copy, nonatomic) CDUnknownBlockType onClose; // @synthesize onClose=_onClose;
@property(copy, nonatomic) CDUnknownBlockType onError; // @synthesize onError=_onError;
@property(copy, nonatomic) CDUnknownBlockType onEndOfFile; // @synthesize onEndOfFile=_onEndOfFile;
@property(copy, nonatomic) CDUnknownBlockType onSpaceAvailable; // @synthesize onSpaceAvailable=_onSpaceAvailable;
@property(copy, nonatomic) CDUnknownBlockType onBytesAvailable; // @synthesize onBytesAvailable=_onBytesAvailable;
@property(copy, nonatomic) CDUnknownBlockType onOpenComplete; // @synthesize onOpenComplete=_onOpenComplete;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000bb41
- (id)propertyForKey:(id)arg1;	// IMP=0x000000000000bb24
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x000000000000ba51
- (_Bool)hasBytesAvailable;	// IMP=0x000000000000b9a4
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;	// IMP=0x000000000000b99c
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x000000000000b6bb
- (void)close;	// IMP=0x000000000000b5f5
- (void)open;	// IMP=0x000000000000b414
- (void)_postEventToDelegate:(unsigned long long)arg1;	// IMP=0x000000000000b3c4
@property(readonly, nonatomic, getter=_internal) _SYStreamGuts *internal;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x000000000000b303
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x000000000000b232
- (void)_SY_notifyOnQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b20c
- (unsigned long long)streamStatus;	// IMP=0x000000000000b1f7
- (id)streamError;	// IMP=0x000000000000b1de
- (void)setDelegate:(id)arg1;	// IMP=0x000000000000b193
- (id)delegate;	// IMP=0x000000000000b172
- (void)dealloc;	// IMP=0x000000000000b134
- (id)initWithURL:(id)arg1;	// IMP=0x000000000000b06d
- (id)initWithFileAtPath:(id)arg1;	// IMP=0x000000000000b013
- (id)initWithData:(id)arg1;	// IMP=0x000000000000b005
- (id)initWithCompressedFileAtURL:(id)arg1;	// IMP=0x000000000000aff3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

