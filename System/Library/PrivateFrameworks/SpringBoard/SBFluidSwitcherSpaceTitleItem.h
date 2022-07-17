//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/NSCopying-Protocol.h>

@class NSString, SBDisplayItem, UIColor, UIImage;

@interface SBFluidSwitcherSpaceTitleItem : NSObject <NSCopying>
{
    _Bool _showsMultiWindowIndicator;	// 8 = 0x8
    SBDisplayItem *_displayItem;	// 16 = 0x10
    NSString *_titleText;	// 24 = 0x18
    NSString *_subtitleText;	// 32 = 0x20
    UIImage *_image;	// 40 = 0x28
    UIColor *_titleTextColor;	// 48 = 0x30
    long long _subtitleInterfaceStyle;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002a6c15
@property(nonatomic) _Bool showsMultiWindowIndicator; // @synthesize showsMultiWindowIndicator=_showsMultiWindowIndicator;
@property(nonatomic) long long subtitleInterfaceStyle; // @synthesize subtitleInterfaceStyle=_subtitleInterfaceStyle;
@property(retain, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(readonly, nonatomic) SBDisplayItem *displayItem; // @synthesize displayItem=_displayItem;
- (unsigned long long)hash;	// IMP=0x00000000002a6aef
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002a691a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002a684e
- (id)initWithDisplayItem:(id)arg1;	// IMP=0x00000000002a6768

@end
