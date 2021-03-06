//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSInputStream.h>

@class EAAccessory, EASession, NSCondition, NSMutableData, NSObject, NSRecursiveLock;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface EAInputStream : NSInputStream
{
    id _delegate;	// 8 = 0x8
    EAAccessory *_accessory;	// 16 = 0x10
    EASession *_session;	// 24 = 0x18
    int _sock;	// 32 = 0x20
    _Bool _useSocket;	// 36 = 0x24
    NSMutableData *_inputFromAccData;	// 40 = 0x28
    NSCondition *_inputFromAccCondition;	// 48 = 0x30
    NSRecursiveLock *_statusLock;	// 56 = 0x38
    NSRecursiveLock *_runloopLock;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_inputFromAccQueue;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_sockListenSource;	// 80 = 0x50
    char *_inputFromAccBuffer;	// 88 = 0x58
    _Bool _isOpenCompletedEventSent;	// 96 = 0x60
    _Bool _hasNewBytesAvailable;	// 97 = 0x61
    _Bool _isAtEndEventSent;	// 98 = 0x62
    unsigned long long _streamStatus;	// 104 = 0x68
    struct __CFRunLoop *_runLoop;	// 112 = 0x70
    struct __CFRunLoopSource *_runLoopSource;	// 120 = 0x78
    int _zeroBytesReadCount;	// 128 = 0x80
}

@property int zeroBytesReadCount; // @synthesize zeroBytesReadCount=_zeroBytesReadCount;
- (void)_scheduleCallback;	// IMP=0x000000000000a116
- (void)_streamEventTrigger;	// IMP=0x0000000000009f3f
- (void)_performAtEndOfStreamValidation;	// IMP=0x0000000000009ebd
- (void)_accessoryDidDisconnect:(id)arg1;	// IMP=0x0000000000009eab
- (void)endStream;	// IMP=0x0000000000009e02
- (void)openCompleted;	// IMP=0x0000000000009da5
- (void)processIncomingAccessoryData:(id)arg1;	// IMP=0x0000000000009c76
- (_Bool)hasBytesAvailable;	// IMP=0x0000000000009bcc
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;	// IMP=0x0000000000009bc4
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x0000000000009a89
- (id)streamError;	// IMP=0x0000000000009a81
- (unsigned long long)streamStatus;	// IMP=0x0000000000009a28
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x0000000000009988
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x0000000000009824
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000981c
- (id)propertyForKey:(id)arg1;	// IMP=0x0000000000009814
- (void)setDelegate:(id)arg1;	// IMP=0x00000000000097f8
- (id)delegate;	// IMP=0x00000000000097e7
- (void)close;	// IMP=0x00000000000095dc
- (void)open;	// IMP=0x0000000000009075
- (void)dealloc;	// IMP=0x0000000000008f62
- (id)initWithAccessoryWithoutSocket:(id)arg1 forSession:(id)arg2;	// IMP=0x0000000000008e31
- (id)initWithAccessory:(id)arg1 forSession:(id)arg2 socket:(int)arg3;	// IMP=0x0000000000008cf1

@end

