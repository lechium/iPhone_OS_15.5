//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIFeedback;
@protocol _UIFeedbackDiscretePlayable;

@interface _UIDragSnappingFeedbackGeneratorConfiguration
{
    _UIFeedback<_UIFeedbackDiscretePlayable> *_objectSnappedFeedback;	// 40 = 0x28
}

+ (id)defaultConfiguration;	// IMP=0x00000000006437a2
- (void).cxx_destruct;	// IMP=0x00000000006439e2
@property(retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *objectSnappedFeedback; // @synthesize objectSnappedFeedback=_objectSnappedFeedback;
- (id)feedbackKeyPaths;	// IMP=0x00000000006436b2

@end

