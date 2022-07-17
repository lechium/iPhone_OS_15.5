//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileSafariUI/WBSURLCompletionMatchData-Protocol.h>

@class NSString, WebBookmark;

__attribute__((visibility("hidden")))
@interface URLCompletionMatchBookmarkData : NSObject <WBSURLCompletionMatchData>
{
    _Bool _shouldPreload;	// 8 = 0x8
    WebBookmark *_bookmark;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000009b28e
@property(readonly, nonatomic) WebBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(readonly, nonatomic) _Bool shouldPreload; // @synthesize shouldPreload=_shouldPreload;
- (float)_topSitesScoreAtTime:(double)arg1;	// IMP=0x000000000009b161
- (long long)visitCountScoreForPageTitleAtTime;	// IMP=0x000000000009b154
- (long long)visitCountScoreForURLStringAtIndex:(unsigned long long)arg1;	// IMP=0x000000000009b147
- (float)topSitesScoreForPageTitleAtTime:(double)arg1;	// IMP=0x000000000009b135
- (float)topSitesScoreForURLStringAtIndex:(unsigned long long)arg1 atTime:(double)arg2;	// IMP=0x000000000009b123
- (_Bool)matchesAutocompleteTrigger:(id)arg1 isStrengthened:(_Bool)arg2;	// IMP=0x000000000009b11b
- (void)enumerateUserVisibleURLsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000009b0a4
- (void)enumeratePageTitlesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000009b02c
- (id)matchDataByMergingWithMatchData:(id)arg1;	// IMP=0x000000000009af68
@property(readonly, nonatomic) _Bool lastVisitWasFailure;
@property(readonly, nonatomic) double lastVisitedTimeInterval;
@property(readonly, nonatomic) _Bool containsBookmark;
- (id)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)arg1;	// IMP=0x000000000009aec3
- (id)userVisibleURLStringAtIndex:(unsigned long long)arg1;	// IMP=0x000000000009aeb1
- (id)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)arg1;	// IMP=0x000000000009ae9f
- (id)pageTitleAtIndex:(unsigned long long)arg1;	// IMP=0x000000000009ae89
@property(readonly, nonatomic) NSString *originalURLString;
- (id)_userVisibleURLString;	// IMP=0x000000000009adcf
- (id)initWithBookmark:(id)arg1 shouldPreload:(_Bool)arg2;	// IMP=0x000000000009ad92
- (id)initWithBookmark:(id)arg1;	// IMP=0x000000000009acfe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long visitCount;
@property(readonly, nonatomic) long long visitCountScore;
@property(readonly, nonatomic) _Bool visitWasClientError;

@end
