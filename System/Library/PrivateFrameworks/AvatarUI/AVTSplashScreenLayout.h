//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol AVTSplashScreenLayoutDelegate;

@interface AVTSplashScreenLayout : NSObject
{
    _Bool _wantsSecondaryVideo;	// 8 = 0x8
    _Bool _constrainToContainer;	// 9 = 0x9
    _Bool _needsLayout;	// 10 = 0xa
    id <AVTSplashScreenLayoutDelegate> _delegate;	// 16 = 0x10
    unsigned long long _labelEdgePaddingStyle;	// 24 = 0x18
    NSString *_currentContentSizeCategory;	// 32 = 0x20
    struct CGSize _containerSize;	// 40 = 0x28
    struct CGSize _unconstrainedContentSize;	// 56 = 0x38
    struct UIEdgeInsets _edgeInsets;	// 72 = 0x48
    struct CGRect _titleFrame;	// 104 = 0x68
    struct CGRect _subTitleFrame;	// 136 = 0x88
    struct CGRect _primaryVideoFrame;	// 168 = 0xa8
    struct CGRect _secondaryVideoFrame;	// 200 = 0xc8
    struct CGRect _buttonFrame;	// 232 = 0xe8
}

+ (struct CGRect)secondaryVideoFrameForContentFrame:(struct CGRect)arg1;	// IMP=0x0000000000068e42
+ (struct CGRect)primaryVideoFrameForContentFrame:(struct CGRect)arg1 wantsSecondaryVideo:(_Bool)arg2;	// IMP=0x0000000000068d76
+ (struct CGRect)subTitleFrameForString:(id)arg1 titleFrame:(struct CGRect)arg2 buttonFrame:(struct CGRect)arg3 wantsSecondaryVideo:(_Bool)arg4 containerSize:(struct CGSize)arg5 labelEdgePadding:(double)arg6;	// IMP=0x0000000000068a5e
+ (struct CGRect)titleFrameForString:(id)arg1 yOrigin:(double)arg2 containerSize:(struct CGSize)arg3 labelEdgePadding:(double)arg4;	// IMP=0x000000000006886f
+ (struct CGRect)buttonFrameForString:(id)arg1 containerSize:(struct CGSize)arg2 edgeInsets:(struct UIEdgeInsets)arg3;	// IMP=0x00000000000686ba
+ (double)defaultLabelEdgePaddingForLabelEdgePaddingStyle:(unsigned long long)arg1 contentSizeCategory:(id)arg2 numberOfLines:(long long)arg3;	// IMP=0x000000000006866d
+ (id)buttonFont;	// IMP=0x0000000000068654
+ (id)subTitleFont;	// IMP=0x000000000006863b
+ (id)titleFont;	// IMP=0x0000000000068622
+ (id)blueButton;	// IMP=0x00000000000684ce
+ (unsigned long long)appropriateLabelEdgePaddingStyleForViewSize:(struct CGSize)arg1;	// IMP=0x00000000000684bb
+ (struct CGSize)secondaryVideoSize;	// IMP=0x000000000006847e
+ (struct CGSize)primaryVideoSize;	// IMP=0x0000000000068452
+ (_Bool)isSmallScreen;	// IMP=0x00000000000683d3
- (void).cxx_destruct;	// IMP=0x000000000006a4d1
@property(nonatomic) _Bool needsLayout; // @synthesize needsLayout=_needsLayout;
@property(copy, nonatomic) NSString *currentContentSizeCategory; // @synthesize currentContentSizeCategory=_currentContentSizeCategory;
@property(nonatomic) _Bool constrainToContainer; // @synthesize constrainToContainer=_constrainToContainer;
@property(nonatomic) _Bool wantsSecondaryVideo; // @synthesize wantsSecondaryVideo=_wantsSecondaryVideo;
@property(readonly, nonatomic) struct CGSize unconstrainedContentSize; // @synthesize unconstrainedContentSize=_unconstrainedContentSize;
@property(nonatomic) struct CGRect buttonFrame; // @synthesize buttonFrame=_buttonFrame;
@property(nonatomic) struct CGRect secondaryVideoFrame; // @synthesize secondaryVideoFrame=_secondaryVideoFrame;
@property(nonatomic) struct CGRect primaryVideoFrame; // @synthesize primaryVideoFrame=_primaryVideoFrame;
@property(nonatomic) struct CGRect subTitleFrame; // @synthesize subTitleFrame=_subTitleFrame;
@property(nonatomic) struct CGRect titleFrame; // @synthesize titleFrame=_titleFrame;
@property(readonly, nonatomic) unsigned long long labelEdgePaddingStyle; // @synthesize labelEdgePaddingStyle=_labelEdgePaddingStyle;
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(readonly, nonatomic) struct CGSize containerSize; // @synthesize containerSize=_containerSize;
@property(nonatomic) __weak id <AVTSplashScreenLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)hash;	// IMP=0x000000000006a11a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000069f54
- (void)didChangeContentSizeCategory:(id)arg1;	// IMP=0x0000000000069de1
- (void)calculateLayoutWithTitleString:(id)arg1 subTitleString:(id)arg2 buttonTitle:(id)arg3;	// IMP=0x0000000000069179
- (void)dealloc;	// IMP=0x0000000000069104
- (id)initWithContainerSize:(struct CGSize)arg1 edgeInsets:(struct UIEdgeInsets)arg2 wantsSecondaryVideo:(_Bool)arg3 labelEdgePaddingStyle:(unsigned long long)arg4 currentContentSizeCategory:(id)arg5;	// IMP=0x0000000000068fc8
- (id)initWithContainerSize:(struct CGSize)arg1 edgeInsets:(struct UIEdgeInsets)arg2 wantsSecondaryVideo:(_Bool)arg3 labelEdgePaddingStyle:(unsigned long long)arg4;	// IMP=0x0000000000068f0e

@end
