//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPDXPCEventListener-Protocol.h>

@class NSMutableArray, NSString;

@interface CDPDAuthObserver : NSObject <CDPDXPCEventListener>
{
    NSMutableArray *_authListeners;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000015a73
- (void)eventReceived:(const char *)arg1 eventInfo:(id)arg2;	// IMP=0x00000000000157db
- (void)registerListener:(id)arg1;	// IMP=0x00000000000157c5
- (id)init;	// IMP=0x000000000001575f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

