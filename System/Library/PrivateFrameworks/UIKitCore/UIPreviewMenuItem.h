//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, NSString, UIColor, UIImage;

@interface UIPreviewMenuItem : NSObject <NSCopying>
{
    NSString *identifier;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    CDUnknownBlockType _handler;	// 24 = 0x18
    long long _style;	// 32 = 0x20
    NSArray *__subitems;	// 40 = 0x28
    UIImage *_image;	// 48 = 0x30
    UIColor *_color;	// 56 = 0x38
}

+ (id)itemWithViewControllerPreviewAction:(id)arg1;	// IMP=0x0000000000481296
+ (id)_itemWithTitle:(id)arg1 color:(id)arg2 image:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000000004811ac
+ (id)_itemWithTitle:(id)arg1 style:(long long)arg2 image:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000000004810e4
+ (id)itemWithTitle:(id)arg1 style:(long long)arg2 items:(id)arg3;	// IMP=0x0000000000481049
+ (id)itemWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000480fae
- (void).cxx_destruct;	// IMP=0x00000000004816ab
@property(retain, nonatomic, getter=_color, setter=_setColor:) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic, getter=_subitems, setter=_setSubitems:) NSArray *_subitems; // @synthesize _subitems=__subitems;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004814ab

@end

