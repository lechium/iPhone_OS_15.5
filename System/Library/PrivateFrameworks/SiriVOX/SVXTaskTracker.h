//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXTaskTracking-Protocol.h>

@class AFAnalyticsTurnBasedInstrumentationContext, NSError, NSString, NSUUID, SAUIListenAfterSpeakingBehavior, SVXActivationContext, SVXDeactivationContext, SVXTaskContext;
@protocol SVXTaskTracking, SVXTaskTrackingDelegate;

__attribute__((visibility("hidden")))
@interface SVXTaskTracker : NSObject <SVXTaskTracking>
{
    id <SVXTaskTrackingDelegate> _delegate;	// 8 = 0x8
    SVXTaskContext *_context;	// 16 = 0x10
    id <SVXTaskTracking> _parent;	// 24 = 0x18
    AFAnalyticsTurnBasedInstrumentationContext *_instrumentationContext;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000048bd2
@property(readonly, nonatomic) AFAnalyticsTurnBasedInstrumentationContext *instrumentationContext; // @synthesize instrumentationContext=_instrumentationContext;
@property(readonly, nonatomic) id <SVXTaskTracking> parent; // @synthesize parent=_parent;
@property(readonly, copy, nonatomic) SVXTaskContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) SVXDeactivationContext *deactivationContext;
@property(readonly, nonatomic) SVXActivationContext *activationContext;
@property(readonly, nonatomic) SAUIListenAfterSpeakingBehavior *listenAfterSpeakingBehavior;
@property(readonly, nonatomic) _Bool listensAfterSpeaking;
@property(readonly, nonatomic) _Bool isUUFR;
@property(readonly, nonatomic) NSString *dialogPhase;
@property(readonly, nonatomic) NSString *dialogIdentifier;
@property(readonly, nonatomic) NSString *refId;
@property(readonly, nonatomic) NSString *aceId;
@property(readonly, nonatomic) NSUUID *requestUUID;
@property(readonly, nonatomic) NSUUID *sessionUUID;
@property(readonly, nonatomic) unsigned long long timestamp;
@property(readonly, nonatomic) long long origin;
- (id)beginChildWithContext:(id)arg1;	// IMP=0x0000000000048114
- (id)initWithContext:(id)arg1 instrumentationContext:(id)arg2 delegate:(id)arg3;	// IMP=0x000000000004804f
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000047f68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
