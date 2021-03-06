//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, UITextReplacement, _UISlotView;

__attribute__((visibility("hidden")))
@interface UICalloutBarButton
{
    SEL m_action;	// 264 = 0x108
    int m_position;	// 272 = 0x110
    int m_type;	// 276 = 0x114
    UITextReplacement *m_textReplacement;	// 280 = 0x118
    double m_contentWidth;	// 288 = 0x120
    double m_contentScale;	// 296 = 0x128
    double m_additionalContentHeight;	// 304 = 0x130
    double m_dividerOffset;	// 312 = 0x138
    double m_imageVerticalAdjust;	// 320 = 0x140
    long long m_page;	// 328 = 0x148
    _Bool m_isText;	// 336 = 0x150
    _Bool m_single;	// 337 = 0x151
    _Bool m_padLeft;	// 338 = 0x152
    _Bool m_padRight;	// 339 = 0x153
    _Bool m_dontDismiss;	// 340 = 0x154
    NSDate *m_appearanceDate;	// 344 = 0x158
    _UISlotView *m_securePasteButtonSlotView;	// 352 = 0x160
    _Bool forceFlash;	// 360 = 0x168
}

+ (id)symbolConfigurationForScale:(double)arg1;	// IMP=0x0000000000766d0b
+ (id)buttonWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 type:(int)arg4 inView:(id)arg5;	// IMP=0x0000000000765e7b
+ (id)buttonWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3 inView:(id)arg4;	// IMP=0x0000000000765dcd
+ (id)buttonWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3 inView:(id)arg4;	// IMP=0x0000000000765d1f
+ (id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 maxWidth:(double)arg3 action:(SEL)arg4 type:(int)arg5 inView:(id)arg6;	// IMP=0x0000000000765c4b
- (void).cxx_destruct;	// IMP=0x00000000007689f4
@property(nonatomic) _Bool dontDismiss; // @synthesize dontDismiss=m_dontDismiss;
@property(nonatomic) double imageVerticalAdjust; // @synthesize imageVerticalAdjust=m_imageVerticalAdjust;
@property(nonatomic) double dividerOffset; // @synthesize dividerOffset=m_dividerOffset;
@property(nonatomic) long long page; // @synthesize page=m_page;
@property(nonatomic) _Bool forceFlash; // @synthesize forceFlash;
@property(retain, nonatomic) UITextReplacement *textReplacement; // @synthesize textReplacement=m_textReplacement;
@property(readonly, nonatomic) int type; // @synthesize type=m_type;
@property(readonly, nonatomic) double additionalContentHeight; // @synthesize additionalContentHeight=m_additionalContentHeight;
@property(readonly, nonatomic) double contentScale; // @synthesize contentScale=m_contentScale;
@property(readonly, nonatomic) double contentWidth; // @synthesize contentWidth=m_contentWidth;
@property(readonly, nonatomic) SEL action; // @synthesize action=m_action;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;	// IMP=0x000000000076875e
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;	// IMP=0x00000000007685eb
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x00000000007684bb
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x00000000007683a0
- (void)touchDown;	// IMP=0x000000000076836b
- (void)flash:(id)arg1 forEvent:(id)arg2;	// IMP=0x00000000007681fe
- (void)cancelFlash;	// IMP=0x0000000000768181
- (void)fadeAndSendActionWithAuthenticationMessage:(id)arg1;	// IMP=0x0000000000767fcd
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000767f2d
- (void)setContentScale:(double)arg1;	// IMP=0x0000000000767dd4
@property(readonly, nonatomic) _Bool isSecurePasteButton;
- (void)configureForVerticalPosition:(int)arg1;	// IMP=0x0000000000767d33
- (void)configureForRightPosition:(int)arg1;	// IMP=0x0000000000767cef
- (void)configureForMiddlePosition;	// IMP=0x0000000000767caf
- (void)configureForLeftPosition:(int)arg1;	// IMP=0x0000000000767c6b
- (void)configureForSingle:(int)arg1;	// IMP=0x0000000000767c24
- (void)configureSecurePasteButtonWithWidth:(double)arg1 height:(double)arg2;	// IMP=0x000000000076761d
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;	// IMP=0x0000000000767581
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;	// IMP=0x0000000000767482
- (struct CGRect)adjustRectForPosition:(struct CGRect)arg1;	// IMP=0x00000000007673cf
- (void)removeFromSuperview;	// IMP=0x000000000076737a
- (void)dealloc;	// IMP=0x000000000076733c
- (void)setupWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 type:(int)arg4;	// IMP=0x0000000000767021
- (void)setupWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3;	// IMP=0x0000000000766dd6
- (void)setupWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3;	// IMP=0x0000000000766b2c
- (void)setupWithTitle:(id)arg1 subtitle:(id)arg2 maxWidth:(double)arg3 action:(SEL)arg4 type:(int)arg5;	// IMP=0x0000000000766093
- (void)_commonSetupWithAction:(SEL)arg1 type:(int)arg2;	// IMP=0x0000000000765f45
- (double)_scaleFactorForImage;	// IMP=0x0000000000768a34

@end

