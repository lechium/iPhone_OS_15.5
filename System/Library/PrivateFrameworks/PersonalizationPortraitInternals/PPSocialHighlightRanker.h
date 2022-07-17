//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol PPSocialHighlightScorer;

@interface PPSocialHighlightRanker : NSObject
{
    NSObject<PPSocialHighlightScorer> *_firstPassScorer;	// 8 = 0x8
    NSObject<PPSocialHighlightScorer> *_topKScorer;	// 16 = 0x10
    unsigned int _topKCount;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000011d956
- (id)rerankSocialHighlightsForTopOneResult:(id)arg1 client:(id)arg2;	// IMP=0x000000000011d069
- (id)rankSocialHighlights:(id)arg1 client:(id)arg2 performRerank:(_Bool)arg3;	// IMP=0x000000000011cb7f
- (id)initWithFirstPassScorer:(id)arg1 topKScorer:(id)arg2 topKCount:(unsigned int)arg3;	// IMP=0x000000000011cadb
- (id)init;	// IMP=0x000000000011c9b8

@end
