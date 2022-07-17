//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface WebVisiblePosition : NSObject
{
    struct WebObjectInternal *_internal;	// 8 = 0x8
}

+ (id)_wrapVisiblePositionIfValid:(struct VisiblePosition)arg1;	// IMP=0x00000000001367c0
+ (id)_wrapVisiblePosition:(struct VisiblePosition)arg1;	// IMP=0x0000000000136740
@property(nonatomic) unsigned long long affinity;
- (id)enclosingRangeWithCorrectionIndicator;	// IMP=0x0000000000138f90
- (id)enclosingRangeWithDictationPhraseAlternatives:(id *)arg1;	// IMP=0x0000000000138ad0
- (_Bool)atAlphaNumericBoundaryInDirection:(int)arg1;	// IMP=0x0000000000138920
- (_Bool)requiresContextForWordBoundary;	// IMP=0x00000000001387c0
- (_Bool)isEditable;	// IMP=0x00000000001386a0
- (id)positionAtStartOrEndOfWord;	// IMP=0x0000000000137b90
- (id)enclosingTextUnitOfGranularity:(int)arg1 inDirectionIfAtBoundary:(int)arg2;	// IMP=0x0000000000137970
- (_Bool)withinTextUnitOfGranularity:(int)arg1 inDirectionIfAtBoundary:(int)arg2;	// IMP=0x0000000000137880
- (id)positionOfNextBoundaryOfGranularity:(int)arg1 inDirection:(int)arg2;	// IMP=0x0000000000137710
- (_Bool)atBoundaryOfGranularity:(int)arg1 inDirection:(int)arg2;	// IMP=0x0000000000137620
- (id)positionByMovingInDirection:(int)arg1 amount:(unsigned int)arg2;	// IMP=0x0000000000137600
- (id)positionByMovingInDirection:(int)arg1 amount:(unsigned int)arg2 withAffinityDownstream:(_Bool)arg3;	// IMP=0x0000000000136f90
- (_Bool)directionIsDownstream:(int)arg1;	// IMP=0x0000000000136f40
- (_Bool)textDirection;	// IMP=0x0000000000136f30
- (id)description;	// IMP=0x0000000000136d10
- (int)distanceFromPosition:(id)arg1;	// IMP=0x0000000000136be0
- (long long)compare:(id)arg1;	// IMP=0x0000000000136a80
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000136920
- (void)dealloc;	// IMP=0x00000000001368b0
- (struct VisiblePosition)_visiblePosition;	// IMP=0x0000000000136880

@end
