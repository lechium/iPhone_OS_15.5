//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsFoundation/_CNObservableTakeUntilInputObserverDelegate-Protocol.h>
#import <ContactsFoundation/_CNObservableTakeUntilSignalObserverDelegate-Protocol.h>

@class CNObservable, NSString;
@protocol CNCancelable;

@interface _CNObservableTakeUntilOperator <_CNObservableTakeUntilInputObserverDelegate, _CNObservableTakeUntilSignalObserverDelegate>
{
    _Bool _active;	// 16 = 0x10
    CNObservable *_input;	// 24 = 0x18
    CNObservable *_signal;	// 32 = 0x20
    id <CNCancelable> _inputToken;	// 40 = 0x28
    id <CNCancelable> _signalToken;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000004ae1f
@property(retain) id <CNCancelable> signalToken; // @synthesize signalToken=_signalToken;
@property(retain) id <CNCancelable> inputToken; // @synthesize inputToken=_inputToken;
@property(getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly) CNObservable *signal; // @synthesize signal=_signal;
@property(readonly) CNObservable *input; // @synthesize input=_input;
- (void)signalDidGenerateEventWithObserver:(id)arg1;	// IMP=0x000000000004acd4
- (_Bool)shouldMirrorEvent:(id)arg1;	// IMP=0x000000000004abd5
- (void)cancel;	// IMP=0x000000000004ab54
- (id)subscribe:(id)arg1;	// IMP=0x000000000004a931
@property(readonly, copy) NSString *description;
- (id)initWithInput:(id)arg1 signal:(id)arg2;	// IMP=0x000000000004a75d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
