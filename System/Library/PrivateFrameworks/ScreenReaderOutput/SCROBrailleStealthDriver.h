//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ScreenReaderOutput/SCROBrailleDriverProtocol-Protocol.h>

@class NSString;

@interface SCROBrailleStealthDriver : NSObject <SCROBrailleDriverProtocol>
{
    _Bool _isDriverLoaded;	// 8 = 0x8
    NSString *_modelIdentifier;	// 16 = 0x10
    long long _mainSize;	// 24 = 0x18
    long long _statusSize;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002d5c2
- (_Bool)setStatusCells:(const char *)arg1 length:(long long)arg2;	// IMP=0x000000000002d5ba
- (_Bool)setMainCells:(const char *)arg1 length:(long long)arg2;	// IMP=0x000000000002d5b2
- (id)getInputEvents;	// IMP=0x000000000002d5aa
- (long long)statusSize;	// IMP=0x000000000002d5a0
- (long long)mainSize;	// IMP=0x000000000002d596
- (int)brailleInputMode;	// IMP=0x000000000002d58e
- (_Bool)postsKeyboardEvents;	// IMP=0x000000000002d586
- (_Bool)isInputEnabled;	// IMP=0x000000000002d57e
- (_Bool)supportsBlinkingCursor;	// IMP=0x000000000002d576
- (id)modelIdentifier;	// IMP=0x000000000002d568
- (_Bool)isSleeping;	// IMP=0x000000000002d560
- (_Bool)isDriverLoaded;	// IMP=0x000000000002d558
- (_Bool)unloadDriver;	// IMP=0x000000000002d546
- (int)loadDriverWithIOElement:(id)arg1;	// IMP=0x000000000002d4fa
- (unsigned long long)interfaceVersion;	// IMP=0x000000000002d4ef
- (void)dealloc;	// IMP=0x000000000002d4b1
- (id)init;	// IMP=0x000000000002d479

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
