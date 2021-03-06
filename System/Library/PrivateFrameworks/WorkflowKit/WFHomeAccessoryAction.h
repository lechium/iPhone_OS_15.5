//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFHomeManagerEventObserver-Protocol.h>

@class HMHome, NSArray, NSString;

@interface WFHomeAccessoryAction <WFHomeManagerEventObserver>
{
}

+ (id)homeAccessoryActionWithHome:(id)arg1 actionSets:(id)arg2;	// IMP=0x0000000000214abd
+ (id)homeAccessoryActionWithTriggerActionSetsBuilder:(id)arg1;	// IMP=0x0000000000214a17
- (void)homeManagerDidUpdateHomes:(id)arg1;	// IMP=0x0000000000213ea9
- (id)localizedSummaryText;	// IMP=0x0000000000213d3d
- (void)localizedParameterSummaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000213c7d
- (id)parameterSummaryString;	// IMP=0x0000000000213c6b
- (id)homeName;	// IMP=0x0000000000213c1b
- (id)localizedAttribution;	// IMP=0x0000000000213bc1
- (id)localizedDescriptionSummary;	// IMP=0x0000000000213aec
- (id)localizedName;	// IMP=0x0000000000213a17
- (void)performHomeAccessoryAction;	// IMP=0x00000000002136f1
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x000000000021366c
@property(readonly, nonatomic) NSArray *shortcutsDictionaryRepresentations;
@property(readonly, nonatomic) NSString *homeIdentifier;
@property(readonly, nonatomic) NSArray *actionSets;
@property(readonly, nonatomic) HMHome *home;
- (void)dealloc;	// IMP=0x000000000021317a
- (void)initializeParameters;	// IMP=0x0000000000213105

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

