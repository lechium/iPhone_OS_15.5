//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>

@class NSString;

@interface SBZStackAuditorParticipantRecord : NSObject <BSDescriptionProviding>
{
    _Bool _ownsHomeGesture;	// 8 = 0x8
    _Bool _homeAffordanceSuppressed;	// 9 = 0x9
    NSString *_name;	// 16 = 0x10
    long long _activationPolicy;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000028f643
@property(nonatomic) _Bool homeAffordanceSuppressed; // @synthesize homeAffordanceSuppressed=_homeAffordanceSuppressed;
@property(nonatomic) _Bool ownsHomeGesture; // @synthesize ownsHomeGesture=_ownsHomeGesture;
@property(nonatomic) long long activationPolicy; // @synthesize activationPolicy=_activationPolicy;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000028f40f
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000028f3bf
- (id)succinctDescriptionBuilder;	// IMP=0x000000000028f3a3
- (id)succinctDescription;	// IMP=0x000000000028f353
- (id)summaryForLogging;	// IMP=0x000000000028f278
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
