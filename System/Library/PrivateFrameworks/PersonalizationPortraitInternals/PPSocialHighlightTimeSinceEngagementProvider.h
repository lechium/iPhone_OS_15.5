//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/PPSocialHighlightFeatureProvider-Protocol.h>

@class NSMutableDictionary;

@interface PPSocialHighlightTimeSinceEngagementProvider : NSObject <PPSocialHighlightFeatureProvider>
{
    NSMutableDictionary *_dates;	// 8 = 0x8
    CDUnknownBlockType _keyBlock;	// 16 = 0x10
    CDUnknownBlockType _groupByBlock;	// 24 = 0x18
    unsigned long long _feedbackType;	// 32 = 0x20
    _Bool _mostRecent;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000f0571
- (id)applyFeedback:(id)arg1;	// IMP=0x00000000000f0342
- (id)valueForHighlight:(id)arg1;	// IMP=0x00000000000f0286
- (id)initWithFeedbackType:(unsigned long long)arg1 feedbackGroupByBlock:(CDUnknownBlockType)arg2 highlightKeyBlock:(CDUnknownBlockType)arg3 mostRecent:(_Bool)arg4 highlights:(id)arg5;	// IMP=0x00000000000f0014

@end

