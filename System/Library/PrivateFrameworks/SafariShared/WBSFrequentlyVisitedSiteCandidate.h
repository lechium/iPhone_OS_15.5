//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WBSHistoryItem;

@interface WBSFrequentlyVisitedSiteCandidate : NSObject
{
    float _score;	// 8 = 0x8
    WBSHistoryItem *_historyItem;	// 16 = 0x10
}

+ (id)titleForHistoryItem:(id)arg1;	// IMP=0x00000000000c39f2
- (void).cxx_destruct;	// IMP=0x00000000000c3c98
@property(readonly, nonatomic) float score; // @synthesize score=_score;
@property(readonly, nonatomic) WBSHistoryItem *historyItem; // @synthesize historyItem=_historyItem;
- (id)initWithHistoryItem:(id)arg1 score:(float)arg2;	// IMP=0x00000000000c3bf6

@end
