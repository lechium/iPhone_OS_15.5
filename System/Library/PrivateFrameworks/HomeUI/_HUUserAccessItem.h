//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItem.h>

@class HMUser;

@interface _HUUserAccessItem : HFItem
{
    HMUser *_user;	// 8 = 0x8
    CDUnknownBlockType _resultsBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000088cdf
@property(readonly, copy, nonatomic) CDUnknownBlockType resultsBlock; // @synthesize resultsBlock=_resultsBlock;
@property(readonly, nonatomic) HMUser *user; // @synthesize user=_user;
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x0000000000088a1c
- (id)initWithUser:(id)arg1 resultsBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000008896f

@end

