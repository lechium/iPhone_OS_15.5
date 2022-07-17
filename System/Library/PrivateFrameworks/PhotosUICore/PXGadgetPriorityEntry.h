//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol PXForYouRankable;

@interface PXGadgetPriorityEntry : NSObject
{
    id <PXForYouRankable> _rankable;	// 8 = 0x8
    NSDate *_cachedPriorityDate;	// 16 = 0x10
    long long _currentRank;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000869f9a
@property(nonatomic) long long currentRank; // @synthesize currentRank=_currentRank;
@property(retain, nonatomic) NSDate *cachedPriorityDate; // @synthesize cachedPriorityDate=_cachedPriorityDate;
@property(retain, nonatomic) id <PXForYouRankable> rankable; // @synthesize rankable=_rankable;

@end
