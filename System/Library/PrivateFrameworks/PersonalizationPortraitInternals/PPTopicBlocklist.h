//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PPTrialWrapper, _PASCFBurstTrie;
@protocol TRINotificationToken;

@interface PPTopicBlocklist : NSObject
{
    _PASCFBurstTrie *_blocklistTrie;	// 8 = 0x8
    PPTrialWrapper *_trialWrapper;	// 16 = 0x10
    id <TRINotificationToken> _trialToken;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000000011421a
- (void).cxx_destruct;	// IMP=0x0000000000113ee6
- (id)indicesOfBlockedTopicsInScoredTopicArray:(id)arg1;	// IMP=0x0000000000113e85
- (id)indicesOfBlockedTopicsInRecordArray:(id)arg1;	// IMP=0x0000000000113e24
- (_Bool)shouldBlock:(id)arg1;	// IMP=0x0000000000113e08
- (void)dealloc;	// IMP=0x0000000000113dc2
- (id)initWithTrialWrapper:(id)arg1;	// IMP=0x0000000000113c91

@end

