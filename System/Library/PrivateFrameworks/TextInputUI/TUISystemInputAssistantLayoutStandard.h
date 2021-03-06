//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TUISystemInputAssistantLayoutStandard
{
    _Bool _isSplit;	// 9 = 0x9
    double _leftSplitWidth;	// 16 = 0x10
    double _rightSplitWidth;	// 24 = 0x18
}

@property(nonatomic) double rightSplitWidth; // @synthesize rightSplitWidth=_rightSplitWidth;
@property(nonatomic) double leftSplitWidth; // @synthesize leftSplitWidth=_leftSplitWidth;
@property(nonatomic) _Bool isSplit; // @synthesize isSplit=_isSplit;
- (void)layoutViewSet:(id)arg1 inBounds:(struct CGRect)arg2 forAssistantView:(id)arg3;	// IMP=0x00000000000211f8
- (void)_layoutViewSet:(id)arg1 forFlexibleCenterViewInBounds:(struct CGRect)arg2 forAssistantView:(id)arg3;	// IMP=0x0000000000020f05
- (void)_layoutViewSet:(id)arg1 forFixedCenterViewWidth:(double)arg2 inBounds:(struct CGRect)arg3 forAssistantView:(id)arg4;	// IMP=0x0000000000020aff
- (void)configureButtonBarsInViewSet:(id)arg1 forApplicationAssistantItem:(id)arg2 withSystemAssistantItem:(id)arg3 withAssistantView:(id)arg4;	// IMP=0x000000000002079b

@end

