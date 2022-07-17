//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContextKit/NSSecureCoding-Protocol.h>

@protocol OS_xpc_object;

@interface CKContextSemaphore : NSObject <NSSecureCoding>
{
    _Bool _semaOwner;	// 8 = 0x8
    unsigned int _sema;	// 12 = 0xc
    unsigned long long _shmSize;	// 16 = 0x10
    struct {
        _Atomic unsigned int _field1;
        _Atomic unsigned int _field2;
        _Atomic unsigned int _field3;
        _Atomic unsigned int _field4;
        _Atomic int _field5;
        _Atomic int _field6;
        _Atomic unsigned long long _field7;
        _Atomic unsigned int _field8;
        _Atomic unsigned int _field9;
    } *_shm;	// 24 = 0x18
    NSObject<OS_xpc_object> *_shmObject;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000003edc
+ (void)initialize;	// IMP=0x000000000000385c
- (void).cxx_destruct;	// IMP=0x0000000000004220
- (_Bool)tryAcquireNeedsIncPending:(_Bool)arg1;	// IMP=0x00000000000040dc
- (long long)waitFor:(double)arg1;	// IMP=0x0000000000003f56
- (void)notifyAll;	// IMP=0x0000000000003f1d
- (void)notify;	// IMP=0x0000000000003ee4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003e2d
- (unsigned long long)requestsServed;	// IMP=0x0000000000003e20
- (unsigned long long)numAcquired;	// IMP=0x0000000000003e13
- (long long)pendingExceptionsCount;	// IMP=0x0000000000003e04
- (void)decPending;	// IMP=0x0000000000003d9e
- (void)incPending;	// IMP=0x0000000000003d72
- (void)resetPending;	// IMP=0x0000000000003d4d
- (long long)pending;	// IMP=0x0000000000003d3e
- (void)setActiveGauge:(unsigned long long)arg1;	// IMP=0x0000000000003d32
- (unsigned long long)activeGauge;	// IMP=0x0000000000003d26
- (unsigned long long)gauge;	// IMP=0x0000000000003c80
- (_Bool)busy;	// IMP=0x0000000000003c67
- (unsigned long long)sharedMemorySize;	// IMP=0x0000000000003c5d
- (void)dealloc;	// IMP=0x0000000000003ba6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000039d8
- (id)initSemaphoreForXPCService;	// IMP=0x00000000000038a0

@end
