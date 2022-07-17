//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_data, OS_dispatch_io, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface NSConcreteFileHandle
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Atomic int _error;	// 12 = 0xc
    _Atomic int _resultSocket;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_dsrc;	// 24 = 0x18
    NSObject<OS_dispatch_data> *_resultData;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_fhQueue;	// 40 = 0x28
    NSObject<OS_dispatch_io> *_readChannel;	// 48 = 0x30
    CDUnknownBlockType _readabilityHandler;	// 56 = 0x38
    CDUnknownBlockType _writeabilityHandler;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_readMonitoringSource;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_writeMonitoringSource;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_monitoringQueue;	// 88 = 0x58
    int _fd;	// 96 = 0x60
    _Atomic unsigned short _flags;	// 100 = 0x64
}

- (void)_closeOnDealloc;	// IMP=0x00000000000601b5
- (void)setWriteabilityHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000060120
- (CDUnknownBlockType)writeabilityHandler;	// IMP=0x00000000000600dc
- (void)setReadabilityHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000006004a
- (CDUnknownBlockType)readabilityHandler;	// IMP=0x0000000000060006
- (void)_locked_clearHandler:(CDUnknownBlockType *)arg1 forSource:(id *)arg2;	// IMP=0x000000000005ffd2
- (id)_monitor:(int)arg1;	// IMP=0x000000000005fd93
- (void)waitForDataInBackgroundAndNotify;	// IMP=0x000000000005fd7f
- (void)waitForDataInBackgroundAndNotifyForModes:(id)arg1;	// IMP=0x000000000005fd65
- (void)acceptConnectionInBackgroundAndNotify;	// IMP=0x000000000005fd51
- (void)acceptConnectionInBackgroundAndNotifyForModes:(id)arg1;	// IMP=0x000000000005fd37
- (void)readToEndOfFileInBackgroundAndNotify;	// IMP=0x000000000005fd23
- (void)readToEndOfFileInBackgroundAndNotifyForModes:(id)arg1;	// IMP=0x000000000005fd09
- (void)readInBackgroundAndNotify;	// IMP=0x000000000005fcf5
- (void)readInBackgroundAndNotifyForModes:(id)arg1;	// IMP=0x000000000005fcdb
- (void)performActivity:(long long)arg1 modes:(id)arg2;	// IMP=0x000000000005f06b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005f060
- (void)dealloc;	// IMP=0x000000000005ef90
- (void)setPort:(id)arg1;	// IMP=0x000000000005ef8a
- (id)port;	// IMP=0x000000000005ef82
- (_Bool)closeAndReturnError:(out id *)arg1;	// IMP=0x000000000005ee56
- (void)closeFile;	// IMP=0x000000000005ed5e
- (void)_cancelDispatchSources;	// IMP=0x000000000005ec94
- (_Bool)synchronizeAndReturnError:(out id *)arg1;	// IMP=0x000000000005eb68
- (void)synchronizeFile;	// IMP=0x000000000005eb29
- (_Bool)truncateAtOffset:(unsigned long long)arg1 error:(out id *)arg2;	// IMP=0x000000000005e9fd
- (void)truncateFileAtOffset:(unsigned long long)arg1;	// IMP=0x000000000005e99c
- (_Bool)seekToOffset:(unsigned long long)arg1 error:(out id *)arg2;	// IMP=0x000000000005e870
- (void)seekToFileOffset:(unsigned long long)arg1;	// IMP=0x000000000005e826
- (_Bool)seekToEndReturningOffset:(out unsigned long long *)arg1 error:(out id *)arg2;	// IMP=0x000000000005e6ee
- (unsigned long long)seekToEndOfFile;	// IMP=0x000000000005e6a2
- (_Bool)getOffset:(out unsigned long long *)arg1 error:(out id *)arg2;	// IMP=0x000000000005e56a
- (unsigned long long)offsetInFile;	// IMP=0x000000000005e51e
- (_Bool)writeData:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000005e3f2
- (void)writeData:(id)arg1;	// IMP=0x000000000005e25c
- (id)readDataToEndOfFileAndReturnError:(out id *)arg1;	// IMP=0x000000000005e13f
- (id)readDataToEndOfFile;	// IMP=0x000000000005e126
- (id)readDataUpToLength:(unsigned long long)arg1 error:(out id *)arg2;	// IMP=0x000000000005e009
- (id)readDataOfLength:(unsigned long long)arg1;	// IMP=0x000000000005dc83
- (unsigned long long)readDataOfLength:(unsigned long long)arg1 buffer:(char *)arg2;	// IMP=0x000000000005dadf
- (id)availableData;	// IMP=0x000000000005d986
- (id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3;	// IMP=0x000000000005d971
- (id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id *)arg4;	// IMP=0x000000000005d894
- (id)initWithURL:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id *)arg4;	// IMP=0x000000000005d751
- (id)initWithFileDescriptor:(int)arg1;	// IMP=0x000000000005d73d
- (id)initWithFileDescriptor:(int)arg1 closeOnDealloc:(_Bool)arg2;	// IMP=0x000000000005d6d8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005d646
- (id)init;	// IMP=0x000000000005d5f2
- (int)fileDescriptor;	// IMP=0x000000000005d5c3

@end
