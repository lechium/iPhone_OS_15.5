//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol AXUIAlertStyleProvider;

@interface AXStyleProviderUIAlert
{
    double _dismissalGestureYOffset;	// 8 = 0x8
    struct CGPoint _backgroundViewDismissalOrigin;	// 16 = 0x10
    unsigned long long _alertType;	// 32 = 0x20
    id <AXUIAlertStyleProvider> _styleProvider;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000d4e4
@property(retain, nonatomic) id <AXUIAlertStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) unsigned long long alertType; // @synthesize alertType=_alertType;
- (void)_appendParagraphWithText:(id)arg1 withTextColor:(id)arg2 font:(id)arg3 textAlignment:(long long)arg4 lineSpacing:(double)arg5 paragraphSpacingBefore:(double)arg6 toAttributedString:(id)arg7;	// IMP=0x000000000000d178
- (void)addToContainerView:(id)arg1;	// IMP=0x000000000000ce57
- (void)_cancelDismissalWithPanGesture:(id)arg1;	// IMP=0x000000000000cde0
- (void)_endDismissalWithPanGesture:(id)arg1;	// IMP=0x000000000000cac0
- (void)_updateViewForDismissalPercentage:(double)arg1;	// IMP=0x000000000000ca76
- (void)_updateDismissalWithPanGesture:(id)arg1;	// IMP=0x000000000000c9ac
- (void)_handlePanGestureRecognizer:(id)arg1;	// IMP=0x000000000000c8c8
- (void)_handleTapGestureRecognizer:(id)arg1;	// IMP=0x000000000000c6ac
- (id)initWithType:(unsigned long long)arg1 text:(id)arg2 subtitleText:(id)arg3 iconImage:(id)arg4 styleProvider:(id)arg5 userInfo:(id)arg6;	// IMP=0x000000000000ae10

@end
