//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/SBUILegibility-Protocol.h>

@class CNContact, NSString, _UILegibilitySettings, _UILegibilityView;

@interface CSUserPictureView <SBUILegibility>
{
    CNContact *_contact;	// 8 = 0x8
    _UILegibilityView *_monogramLegibilityView;	// 16 = 0x10
    double _legibilityStrength;	// 24 = 0x18
    _UILegibilitySettings *_legibilitySettings;	// 32 = 0x20
    double _diameter;	// 40 = 0x28
}

+ (id)_monogrammerForLegibilitySettings:(id)arg1 diameter:(double)arg2;	// IMP=0x0000000000089f74
- (void).cxx_destruct;	// IMP=0x000000000008a186
@property(nonatomic) double diameter; // @synthesize diameter=_diameter;
@property(nonatomic) double strength; // @synthesize strength=_legibilityStrength;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(copy, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void)_regenerateImage;	// IMP=0x0000000000089fd6
- (id)presentationRegions;	// IMP=0x0000000000089dde
- (void)layoutSubviews;	// IMP=0x0000000000089cc6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000089bd5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

