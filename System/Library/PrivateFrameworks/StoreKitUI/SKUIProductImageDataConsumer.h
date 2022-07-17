//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/NSCopying-Protocol.h>

@class SKUIColorScheme, UIColor;

@interface SKUIProductImageDataConsumer <NSCopying>
{
    UIColor *_backgroundColor;	// 8 = 0x8
    struct CGSize _iconSize;	// 16 = 0x10
    SKUIColorScheme *_colorScheme;	// 32 = 0x20
}

+ (id)wishlistConsumer;	// IMP=0x000000000035596a
+ (id)smartBannerConsumer;	// IMP=0x00000000003558d4
+ (id)giftResultConsumer;	// IMP=0x000000000035583e
+ (id)giftThemePosterConsumer;	// IMP=0x0000000000355819
+ (id)giftThemeLetterboxConsumer;	// IMP=0x00000000003557f4
+ (id)giftThemeConsumer;	// IMP=0x00000000003557cf
+ (id)giftComposePosterConsumer;	// IMP=0x0000000000355739
+ (id)giftComposeLetterboxConsumer;	// IMP=0x0000000000355714
+ (id)giftComposeConsumer;	// IMP=0x00000000003556ef
+ (id)swooshConsumer;	// IMP=0x0000000000355659
+ (id)productPageConsumer;	// IMP=0x00000000003555c3
+ (id)purchasedConsumer;	// IMP=0x0000000000355531
+ (id)updatesConsumer;	// IMP=0x000000000035549f
+ (id)chartsConsumer;	// IMP=0x000000000035540d
+ (id)cardConsumer;	// IMP=0x0000000000355377
+ (id)lockupConsumerWithSize:(long long)arg1 itemKind:(long long)arg2;	// IMP=0x000000000035531f
+ (id)gridConsumer;	// IMP=0x00000000003552fa
+ (id)consumerWithSize:(struct CGSize)arg1;	// IMP=0x00000000003552b9
- (void).cxx_destruct;	// IMP=0x0000000000355fb3
@property(readonly, nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000355ed3
- (id)imageForImage:(id)arg1;	// IMP=0x0000000000355d1d
- (id)imageForColor:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000003559cb
- (id)imageForColor:(id)arg1;	// IMP=0x00000000003559a7
@property(readonly, nonatomic) struct CGSize imageSize;

@end
