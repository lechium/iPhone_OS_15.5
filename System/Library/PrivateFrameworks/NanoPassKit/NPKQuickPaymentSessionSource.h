//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NPKButtonListener, NPKQuickPaymentSessionLocalAuthenticationCoordinator, NSDictionary, PKPass;
@protocol NPKQuickPaymentSessionSourceDelegate, OS_dispatch_queue;

@interface NPKQuickPaymentSessionSource : NSObject
{
    id <NPKQuickPaymentSessionSourceDelegate> _delegate;	// 8 = 0x8
    NPKButtonListener *_buttonListener;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_sessionSourceQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 32 = 0x20
    _Bool _delegateHandlingButtonEvents;	// 40 = 0x28
    _Bool _deferAuthorization;	// 41 = 0x29
    _Bool _requireFirstInQueue;	// 42 = 0x2a
    unsigned long long _preconditionState;	// 48 = 0x30
    PKPass *_initialPass;	// 56 = 0x38
    NSDictionary *_vasPasses;	// 64 = 0x40
    NPKQuickPaymentSessionLocalAuthenticationCoordinator *_localAuthenticationCoordinator;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000050ff6
- (void)_performDelegateCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000000050fe5
- (void)_handlePMUButtonEvent;	// IMP=0x0000000000050915
- (void)setLocalAuthenticationCoordinator:(id)arg1;	// IMP=0x0000000000050871
- (void)setVasPasses:(id)arg1;	// IMP=0x00000000000507cd
- (void)setInitialPass:(id)arg1;	// IMP=0x0000000000050729
- (void)setPreconditionState:(unsigned long long)arg1;	// IMP=0x00000000000506c8
- (void)setRequireFirstInQueue:(_Bool)arg1;	// IMP=0x000000000005066a
- (void)setDeferAuthorization:(_Bool)arg1;	// IMP=0x000000000005060c
- (void)setDelegateHandlingButtonEvents:(_Bool)arg1;	// IMP=0x00000000000505ae
- (void)handleDoublePressEvent;	// IMP=0x000000000005054d
- (id)initWithDelegate:(id)arg1 buttonListener:(id)arg2 callbackQueue:(id)arg3;	// IMP=0x0000000000050241

@end
