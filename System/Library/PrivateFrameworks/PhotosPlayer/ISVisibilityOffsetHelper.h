//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosPlayer/ISVisibilityOffsetComputer-Protocol.h>

@class UIScrollView;

@interface ISVisibilityOffsetHelper : NSObject <ISVisibilityOffsetComputer>
{
    long long _direction;	// 8 = 0x8
    double _maximumDistance;	// 16 = 0x10
    double _maximumDistanceLag;	// 24 = 0x18
    UIScrollView *__scrollView;	// 32 = 0x20
    struct CGPoint __targetContentOffset;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000024d05
@property(nonatomic, setter=_setTargetContentOffset:) struct CGPoint _targetContentOffset; // @synthesize _targetContentOffset=__targetContentOffset;
@property(retain, nonatomic, setter=_setScrollView:) UIScrollView *_scrollView; // @synthesize _scrollView=__scrollView;
@property(nonatomic) double maximumDistanceLag; // @synthesize maximumDistanceLag=_maximumDistanceLag;
@property(nonatomic) double maximumDistance; // @synthesize maximumDistance=_maximumDistance;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
- (void)getVisibility:(_Bool *)arg1 offset:(double *)arg2 targetVisibilityOffset:(double *)arg3 forView:(id)arg4;	// IMP=0x00000000000249fc
- (struct CGRect)boundsForView:(id)arg1 inScrollView:(id)arg2;	// IMP=0x00000000000249de
- (struct CGRect)visibleRectForScrollView:(id)arg1;	// IMP=0x00000000000249c0
- (struct ISVisibilityRange)_visibilityRangeForRect:(struct CGRect)arg1;	// IMP=0x0000000000024889
- (void)_updateDirectionIfNeeded;	// IMP=0x00000000000247c6
- (void)computeVisibilityOffsetsInScrollView:(id)arg1 withTargetContentOffset:(struct CGPoint)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000002472c

@end
