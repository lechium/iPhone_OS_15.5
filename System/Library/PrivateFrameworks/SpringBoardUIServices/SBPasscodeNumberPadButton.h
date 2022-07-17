//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUI/TPNumberPadDarkStyleButton.h>

#import <SpringBoardUIServices/SBUIPasscodeNumberPadButton-Protocol.h>

@class NSString, UIColor;

@interface SBPasscodeNumberPadButton : TPNumberPadDarkStyleButton <SBUIPasscodeNumberPadButton>
{
    UIColor *_reduceTransparencyButtonColor;	// 8 = 0x8
}

+ (double)highlightedCircleViewAlpha;	// IMP=0x0000000000038b38
+ (double)unhighlightedCircleViewAlpha;	// IMP=0x0000000000038b0f
+ (_Bool)_shouldUseAlternativeCirlceViewAlphas;	// IMP=0x0000000000038b05
+ (double)_numberPadButtonOuterCircleDiameter;	// IMP=0x0000000000038a87
+ (struct UIEdgeInsets)paddingOutsideRing;	// IMP=0x0000000000038a27
+ (double)outerCircleDiameter;	// IMP=0x0000000000038a0e
+ (struct CGSize)defaultSize;	// IMP=0x000000000003899f
+ (id)_stringCharacterForCharacter:(long long)arg1;	// IMP=0x0000000000038613
+ (int)_characterTypeForCharacter:(long long)arg1;	// IMP=0x00000000000385b0
- (void).cxx_destruct;	// IMP=0x0000000000038b72
@property(retain, nonatomic) UIColor *reduceTransparencyButtonColor; // @synthesize reduceTransparencyButtonColor=_reduceTransparencyButtonColor;
- (id)stringCharacter;	// IMP=0x000000000003895a
- (int)characterType;	// IMP=0x00000000000385ce
- (void)conformsToSBUIPasscodeNumberPadButton;	// IMP=0x00000000000385c8
- (id)initForCharacter:(long long)arg1;	// IMP=0x00000000000383e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
