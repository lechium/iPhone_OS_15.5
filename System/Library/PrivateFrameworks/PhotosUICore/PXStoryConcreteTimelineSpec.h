//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXStoryTimelineSpec-Protocol.h>

@interface PXStoryConcreteTimelineSpec <PXStoryTimelineSpec>
{
    double _nUpDividerWidth;	// 8 = 0x8
    long long _layoutDirection;	// 16 = 0x10
    struct CGSize _viewportSize;	// 24 = 0x18
    struct UIEdgeInsets _safeAreaInsets;	// 40 = 0x28
}

@property(readonly, nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(readonly, nonatomic) double nUpDividerWidth; // @synthesize nUpDividerWidth=_nUpDividerWidth;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsets; // @synthesize safeAreaInsets=_safeAreaInsets;
@property(readonly, nonatomic) struct CGSize viewportSize; // @synthesize viewportSize=_viewportSize;
- (unsigned long long)hash;	// IMP=0x00000000006feb3a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006fe9b0
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000006fe846

@end

