//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class IKColor, NSString;

__attribute__((visibility("hidden")))
@interface SKUIButtonBorderStyle : NSObject <NSCopying>
{
    IKColor *_borderColor;	// 8 = 0x8
    double _borderWidth;	// 16 = 0x10
    struct UIEdgeInsets _contentInset;	// 24 = 0x18
    struct IKCornerRadii _cornerRadii;	// 56 = 0x38
    IKColor *_fillColor;	// 88 = 0x58
    NSString *_namedCornerStyle;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000ecb1e
@property(copy, nonatomic) NSString *namedCornerStyle; // @synthesize namedCornerStyle=_namedCornerStyle;
@property(copy, nonatomic) IKColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) struct IKCornerRadii cornerRadii; // @synthesize cornerRadii=_cornerRadii;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(copy, nonatomic) IKColor *borderColor; // @synthesize borderColor=_borderColor;
- (_Bool)_usesBackgroundWithAlpha:(id)arg1;	// IMP=0x00000000000ec9fe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ec922
- (id)bezierPathWithBounds:(struct CGRect)arg1;	// IMP=0x00000000000ec4a4
- (id)initWithElementStyle:(id)arg1;	// IMP=0x00000000000ec0cd

@end

