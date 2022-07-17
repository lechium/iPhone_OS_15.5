//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/NSStreamDelegate-Protocol.h>

@class NSData, NSFileHandle, NSInputStream, NSMutableArray, NSOutputStream, NSString;
@protocol OS_dispatch_queue;

@interface CKDProtobufStreamWriter : NSObject <NSStreamDelegate>
{
    NSMutableArray *_allObjects;	// 8 = 0x8
    NSData *_curData;	// 16 = 0x10
    unsigned long long _curDataPos;	// 24 = 0x18
    NSInputStream *_inputStream;	// 32 = 0x20
    NSOutputStream *_outputStream;	// 40 = 0x28
    struct z_stream_s _zlibStream;	// 48 = 0x30
    _Bool _haveFlushedZlib;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 168 = 0xa8
    _Bool _shouldCompress;	// 176 = 0xb0
    _Bool _hasInitedCompression;	// 177 = 0xb1
    _Bool _haveFinishedCompression;	// 178 = 0xb2
    _Bool _haveFinishedStreaming;	// 179 = 0xb3
    unsigned long long _bufferSize;	// 184 = 0xb8
    CDUnknownBlockType _logRequestObjectBlock;	// 192 = 0xc0
    NSFileHandle *_binaryLogFileHandle;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00000000001011fd
@property _Bool haveFinishedStreaming; // @synthesize haveFinishedStreaming=_haveFinishedStreaming;
@property(nonatomic) _Bool haveFinishedCompression; // @synthesize haveFinishedCompression=_haveFinishedCompression;
@property(nonatomic) _Bool hasInitedCompression; // @synthesize hasInitedCompression=_hasInitedCompression;
@property(retain, nonatomic) NSFileHandle *binaryLogFileHandle; // @synthesize binaryLogFileHandle=_binaryLogFileHandle;
@property(copy, nonatomic) CDUnknownBlockType logRequestObjectBlock; // @synthesize logRequestObjectBlock=_logRequestObjectBlock;
@property(nonatomic) unsigned long long bufferSize; // @synthesize bufferSize=_bufferSize;
@property(nonatomic) _Bool shouldCompress; // @synthesize shouldCompress=_shouldCompress;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x0000000000100e58
- (long long)_streamNextObject:(id)arg1;	// IMP=0x0000000000100d35
- (void)_prepareObjectForStreaming:(id)arg1;	// IMP=0x0000000000100c53
- (id)_dataForMessage:(id)arg1;	// IMP=0x0000000000100b82
- (long long)_writeDataToStream:(id)arg1;	// IMP=0x0000000000100ab8
- (_Bool)_finishStreaming:(id)arg1;	// IMP=0x0000000000100a2c
- (id)_compressBodyData:(id)arg1 shouldFlush:(_Bool)arg2;	// IMP=0x0000000000100801
- (id)open;	// IMP=0x00000000001005a4
- (void)setStreamedObjects:(id)arg1;	// IMP=0x0000000000100577
- (void)tearDown;	// IMP=0x00000000001004b7
- (void)dealloc;	// IMP=0x0000000000100479
- (void)_tearDownOutputStream;	// IMP=0x00000000001002db
- (id)initWithCompression:(_Bool)arg1;	// IMP=0x00000000001000f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
