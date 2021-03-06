//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol CRKShareTargetCollectorDelegate;

@interface CRKShareTargetCollector : NSObject
{
    id <CRKShareTargetCollectorDelegate> _delegate;	// 8 = 0x8
    NSSet *_studentTargets;	// 16 = 0x10
    NSSet *_instructorTargets;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000081e41
@property(copy, nonatomic) NSSet *instructorTargets; // @synthesize instructorTargets=_instructorTargets;
@property(copy, nonatomic) NSSet *studentTargets; // @synthesize studentTargets=_studentTargets;
@property(nonatomic) __weak id <CRKShareTargetCollectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didRemoveTargets:(id)arg1;	// IMP=0x0000000000081cbf
- (void)didFindTargets:(id)arg1;	// IMP=0x0000000000081b96
- (void)diffNewTargets:(id)arg1 againstOldTargets:(id)arg2;	// IMP=0x0000000000081ad2
- (void)instructorTargetsDidChange:(id)arg1;	// IMP=0x00000000000819d6
- (void)studentTargetsDidChange:(id)arg1;	// IMP=0x00000000000818da
- (id)init;	// IMP=0x0000000000081865

@end

