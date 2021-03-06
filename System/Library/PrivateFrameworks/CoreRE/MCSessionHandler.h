//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreRE/MCSessionPrivateDelegate-Protocol.h>

@class MCSession, NSLock, NSMutableArray, NSMutableDictionary, NSString;
@protocol MCSessionPrivateDelegate;

__attribute__((visibility("hidden")))
@interface MCSessionHandler : NSObject <MCSessionPrivateDelegate>
{
    void *_protocolLayer;	// 8 = 0x8
    MCSession *_session;	// 16 = 0x10
    NSMutableDictionary *_peersToHandles;	// 24 = 0x18
    NSMutableArray *_pendingData;	// 32 = 0x20
    NSLock *_handlesLock;	// 40 = 0x28
    id <MCSessionPrivateDelegate> _nextDelegate;	// 48 = 0x30
    struct DynamicArray<re::SharedPtr<(anonymous namespace)::MCProtocolHandle>> _handles;	// 56 = 0x38
    DynamicArray_8f05e591 _tempBuf;	// 96 = 0x60
}

- (id).cxx_construct;	// IMP=0x00000000007c9add
- (void).cxx_destruct;	// IMP=0x00000000007c99d4
@property(nonatomic) __weak id <MCSessionPrivateDelegate> nextDelegate; // @synthesize nextDelegate=_nextDelegate;
@property(nonatomic) DynamicArray_8f05e591 tempBuf; // @synthesize tempBuf=_tempBuf;
@property(nonatomic) void *handles; // @synthesize handles=_handles;
@property(retain, nonatomic) NSLock *handlesLock; // @synthesize handlesLock=_handlesLock;
@property(retain, nonatomic) NSMutableArray *pendingData; // @synthesize pendingData=_pendingData;
@property(retain, nonatomic) NSMutableDictionary *peersToHandles; // @synthesize peersToHandles=_peersToHandles;
@property(retain, nonatomic) MCSession *session; // @synthesize session=_session;
@property(nonatomic) void *protocolLayer; // @synthesize protocolLayer=_protocolLayer;
- (void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4 propagate:(_Bool *)arg5;	// IMP=0x00000000007c96fe
- (void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5 propagate:(_Bool *)arg6;	// IMP=0x00000000007c95a8
- (void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4 propagate:(_Bool *)arg5;	// IMP=0x00000000007c946c
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(long long)arg3 propagate:(_Bool *)arg4;	// IMP=0x00000000007c916e
- (void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3 propagate:(_Bool *)arg4;	// IMP=0x00000000007c8bd0
- (id)dataForPacket:(const void *)arg1 channel:(unsigned char)arg2;	// IMP=0x00000000007c8b41
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000007c8aaf
- (void)dealloc;	// IMP=0x00000000007c8a23
- (id)initWithSession:(id)arg1 protocolLayer:(void *)arg2;	// IMP=0x00000000007c8796

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

