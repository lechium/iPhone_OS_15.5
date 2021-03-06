//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor, UIFont, UIImage;

@interface CNMonogrammer : NSObject
{
    UIImage *_silhouetteMonogram;	// 8 = 0x8
    UIImage *_questionMarkMonogram;	// 16 = 0x10
    UIImage *_knockoutMaskMonogram;	// 24 = 0x18
    double _innerBorderWidth;	// 32 = 0x20
    NSString *_silhouetteImageName;	// 40 = 0x28
    long long _monogrammerStyle;	// 48 = 0x30
    CNMonogrammer *_subMonogrammer;	// 56 = 0x38
    UIColor *_tintColor;	// 64 = 0x40
    double _scale;	// 72 = 0x48
    _Bool _textKnockout;	// 80 = 0x50
    UIFont *_font;	// 88 = 0x58
    double _diameter;	// 96 = 0x60
    UIColor *_backgroundColor;	// 104 = 0x68
    UIColor *_textColor;	// 112 = 0x70
}

+ (id)requiredKeyDescriptor;	// IMP=0x0000000000137104
+ (id)_initialsForContact:(id)arg1;	// IMP=0x0000000000136f06
+ (long long)monogramTypeForContact:(id)arg1;	// IMP=0x0000000000136d83
+ (id)descriptorForRequiredKeysIncludingImage:(_Bool)arg1;	// IMP=0x0000000000136d24
- (void).cxx_destruct;	// IMP=0x0000000000136c54
@property(nonatomic) _Bool textKnockout; // @synthesize textKnockout=_textKnockout;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double diameter; // @synthesize diameter=_diameter;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(readonly, nonatomic) NSArray *keysToFetch;
- (id)_copyMonogramWithKnockoutMask;	// IMP=0x0000000000136aab
- (id)_copyMonogramWithSilhouette;	// IMP=0x0000000000136910
- (id)_copyMonogramWithInitials:(id)arg1;	// IMP=0x000000000013663e
- (id)_copyMonogramWithImageData:(id)arg1;	// IMP=0x000000000013651d
- (id)_initialsForFirstName:(id)arg1 lastName:(id)arg2;	// IMP=0x0000000000136389
- (void)_clearMonogramCache;	// IMP=0x000000000013632e
@property(readonly, nonatomic) UIImage *knockoutMaskMonogram;
@property(readonly, nonatomic) UIImage *questionMarkMonogram;
@property(readonly, nonatomic) UIImage *silhouetteMonogram;
- (id)monogramForContacts:(id)arg1;	// IMP=0x0000000000135e16
- (id)monogramForPersonWithFirstName:(id)arg1 lastName:(id)arg2;	// IMP=0x0000000000135da1
- (id)monogramForContact:(id)arg1;	// IMP=0x0000000000135d70
- (id)monogramForContact:(id)arg1 isContactImage:(_Bool *)arg2;	// IMP=0x0000000000135b43
- (id)silhouetteImageName;	// IMP=0x0000000000135b35
- (double)innerBorderWidth;	// IMP=0x0000000000135b2a
- (void)monogramsForStark;	// IMP=0x0000000000135981
- (void)monogramsWithTint:(id)arg1;	// IMP=0x000000000013593c
- (void)monogramsAsFlatImages;	// IMP=0x00000000001358de
- (void)dealloc;	// IMP=0x00000000001358a0
- (id)initWithStyle:(long long)arg1 diameter:(double)arg2;	// IMP=0x00000000001353b4
- (id)init;	// IMP=0x00000000001352bf

@end

