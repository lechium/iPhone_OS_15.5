//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UICollectionViewCellAppearanceState : NSObject
{
    _Bool _hasLifted;	// 8 = 0x8
    _Bool _hasBeganCancelling;	// 9 = 0x9
    int _dragState;	// 12 = 0xc
}

@property(nonatomic) int dragState; // @synthesize dragState=_dragState;
@property(nonatomic) _Bool hasBeganCancelling; // @synthesize hasBeganCancelling=_hasBeganCancelling;
@property(nonatomic) _Bool hasLifted; // @synthesize hasLifted=_hasLifted;
- (id)description;	// IMP=0x00000000003a2093
- (void)didEnd;	// IMP=0x00000000003a207c
@property(readonly, nonatomic) _Bool hasBeganDroppingInto;
@property(readonly, nonatomic) _Bool enrouteToOrReachedTerminalState;
- (void)didCompleteDropping;	// IMP=0x00000000003a1fd3
- (void)didCompleteCancelling;	// IMP=0x00000000003a1fbc
- (void)didBeginCancelling;	// IMP=0x00000000003a1fa5
- (void)willBeginCancelling;	// IMP=0x00000000003a1f8e
- (void)didBeginDroppingInto;	// IMP=0x00000000003a1f77
- (void)didBeginDropping;	// IMP=0x00000000003a1f60
- (void)didMove;	// IMP=0x00000000003a1f49
- (void)didCompleteLift;	// IMP=0x00000000003a1f11
- (void)didBeginLift;	// IMP=0x00000000003a1efa
@property(readonly, nonatomic) long long appearance;
- (id)init;	// IMP=0x00000000003a1e9e

@end
