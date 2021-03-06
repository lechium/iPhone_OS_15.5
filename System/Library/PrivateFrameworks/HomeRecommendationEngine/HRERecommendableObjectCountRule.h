//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HRERecommendableObjectCountRule
{
    struct _NSRange _allowedCount;	// 16 = 0x10
}

+ (id)ruleWithAccessoryType:(id)arg1 allowedCount:(struct _NSRange)arg2;	// IMP=0x000000000000ea82
@property(readonly, nonatomic) struct _NSRange allowedCount; // @synthesize allowedCount=_allowedCount;
- (_Bool)passesWithHomeObjects:(id)arg1;	// IMP=0x000000000000eae3
- (id)initWithAccessoryType:(id)arg1 allowedCount:(struct _NSRange)arg2;	// IMP=0x000000000000ea32

@end

