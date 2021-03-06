//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, PVPersonClusterManager, PVPersonDeduperProfile, PVPersonPromoter;
@protocol PVPersonPromoterDelegate;

@interface PVPersonDeduper : NSObject
{
    PVPersonClusterManager *_personClusterManager;	// 8 = 0x8
    NSDictionary *_invalidCandidatesMapping;	// 16 = 0x10
    PVPersonDeduperProfile *_profile;	// 24 = 0x18
    id <PVPersonPromoterDelegate> _delegate;	// 32 = 0x20
    PVPersonPromoter *_personPromoter;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000071f5
@property(nonatomic) __weak PVPersonPromoter *personPromoter; // @synthesize personPromoter=_personPromoter;
@property(nonatomic) __weak id <PVPersonPromoterDelegate> delegate; // @synthesize delegate=_delegate;
- (id)dedupeNewVerifiedPersons:(id)arg1 withExistingVerifiedPersons:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000006e19
- (id)dedupeUnverifiedPersons:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006cbc
- (id)dedupeUnverifiedPersons:(id)arg1 withVerifiedPersons:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000006b2f
- (id)basicSequence;	// IMP=0x0000000000006995
- (void)_executeStepsInSequences:(id)arg1 forPersons:(id)arg2 andOtherPersons:(id)arg3 updateBlock:(CDUnknownBlockType)arg4 resultBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000064e9
- (id)initWithPersonClusterManager:(id)arg1 andInvalidCandidatesMapping:(id)arg2 profile:(id)arg3;	// IMP=0x0000000000006432

@end

