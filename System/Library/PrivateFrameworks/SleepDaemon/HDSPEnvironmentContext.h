//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SleepDaemon/BSDescriptionProviding-Protocol.h>

@class HDSPSleepScheduleModelChangeEvaluation, NSString;
@protocol HDSPSource;

__attribute__((visibility("hidden")))
@interface HDSPEnvironmentContext : NSObject <BSDescriptionProviding>
{
    id <HDSPSource> _source;	// 8 = 0x8
    HDSPSleepScheduleModelChangeEvaluation *_changeEvaluation;	// 16 = 0x10
}

+ (id)contextWithSource:(id)arg1;	// IMP=0x0000000000063b1e
- (void).cxx_destruct;	// IMP=0x0000000000063eb1
@property(readonly, nonatomic) HDSPSleepScheduleModelChangeEvaluation *changeEvaluation; // @synthesize changeEvaluation=_changeEvaluation;
@property(readonly, nonatomic) id <HDSPSource> source; // @synthesize source=_source;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000063dc9
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000063d79
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000063d60
- (id)succinctDescription;	// IMP=0x0000000000063d4e
@property(readonly, copy) NSString *description;
- (id)initWithSource:(id)arg1 changeEvaluation:(id)arg2;	// IMP=0x0000000000063c8d
- (id)contextByApplyingChangeEvaluation:(id)arg1;	// IMP=0x0000000000063b6d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
