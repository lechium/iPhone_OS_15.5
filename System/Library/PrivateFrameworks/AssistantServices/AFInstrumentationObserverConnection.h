//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFInvalidating-Protocol.h>

@class AFAnalyticsObserverConnection, NSSet, NSString;

@interface AFInstrumentationObserverConnection : NSObject <AFInvalidating>
{
    AFAnalyticsObserverConnection *_observerConnection;	// 8 = 0x8
    NSSet *_filteredTagIdentifiers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000123a28
- (void)flushWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000123a12
- (void)waitUntilInvalidated;	// IMP=0x00000000001239fc
- (void)invalidate;	// IMP=0x00000000001239e6
- (id)initWithObservation:(CDUnknownBlockType)arg1 filterByInstrumentationTypes:(id)arg2;	// IMP=0x0000000000123431
- (id)initWithObservation:(CDUnknownBlockType)arg1;	// IMP=0x000000000012341d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

