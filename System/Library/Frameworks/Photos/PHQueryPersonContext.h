//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHFetchOptions;

@interface PHQueryPersonContext : NSObject
{
    PHFetchOptions *_fetchOptions;	// 8 = 0x8
}

+ (id)subpredicatesForFetchOptions:(id)arg1;	// IMP=0x00000000001b21db
- (void).cxx_destruct;	// IMP=0x00000000001b21cb
- (id)personContextOneUpPredicate;	// IMP=0x00000000001b20cb
- (id)personContextDetailPredicate;	// IMP=0x00000000001b1e85
- (id)personContextAdditionalPredicate;	// IMP=0x00000000001b1e5e
- (id)personContextPeopleHomePredicate;	// IMP=0x00000000001b1d40
- (id)personContextNonePredicates;	// IMP=0x00000000001b1b23
- (id)_notHiddenTypePredicate;	// IMP=0x00000000001b1afa
- (id)_faceCountPredicateWithMinimum:(unsigned long long)arg1;	// IMP=0x00000000001b1ad5
- (id)_notVerifiedPredicate;	// IMP=0x00000000001b1ab1
- (id)_verifiedVisiblePredicate;	// IMP=0x00000000001b1a84
- (id)_verifiedPredicate;	// IMP=0x00000000001b1a60
- (id)subpredicates;	// IMP=0x00000000001b1951
- (id)initWithFetchOptions:(id)arg1;	// IMP=0x00000000001b18d3

@end
