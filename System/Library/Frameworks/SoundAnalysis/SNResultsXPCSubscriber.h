//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNResultsObserving-Protocol.h>
#import <SoundAnalysis/SNResultsObservingXPCProtocol-Protocol.h>

@class NSString;
@protocol SNResultsObserving;

__attribute__((visibility("hidden")))
@interface SNResultsXPCSubscriber : NSObject <SNResultsObserving, SNResultsObservingXPCProtocol>
{
    id <SNResultsObserving> _receiver;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001fc22
- (void)xpcRequestDidComplete:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001fbd8
- (void)xpcRequest:(id)arg1 didFailWithError:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001fb7f
- (void)xpcRequest:(id)arg1 didProduceResult:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001fb26
- (void)requestDidComplete:(id)arg1;	// IMP=0x000000000001fa80
- (void)request:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000001f9f7
- (void)request:(id)arg1 didProduceResult:(id)arg2;	// IMP=0x000000000001f96e
- (id)initWithReceiver:(id)arg1;	// IMP=0x000000000001f88b
- (id)init;	// IMP=0x000000000001f842

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

