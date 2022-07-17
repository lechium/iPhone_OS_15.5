//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CATNetworkReachability;

@interface CRKASMNetworkCheckingRosterProvider
{
    CATNetworkReachability *_networkReachability;	// 8 = 0x8
}

+ (id)reachabilityError;	// IMP=0x000000000009a766
- (void).cxx_destruct;	// IMP=0x000000000009a788
@property(readonly, nonatomic) CATNetworkReachability *networkReachability; // @synthesize networkReachability=_networkReachability;
- (void)removeCourseWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000009a661
- (void)updateCourseWithIdentifier:(id)arg1 properties:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000009a539
- (void)createCourseWithProperties:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000009a434
- (id)initWithRosterProvider:(id)arg1;	// IMP=0x000000000009a36f

@end
