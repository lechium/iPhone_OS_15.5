//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _BCUCoverEffectsShadow : NSObject
{
    struct CGImage *_image;	// 8 = 0x8
    NSString *_blendMode;	// 16 = 0x10
    struct UIEdgeInsets _insets;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000003cde
@property(readonly, nonatomic) NSString *blendMode; // @synthesize blendMode=_blendMode;
@property(readonly, nonatomic) struct CGImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
- (struct UIEdgeInsets)roundedInsetsWithSize:(struct CGSize)arg1;	// IMP=0x0000000000003bc9
- (struct CGRect)contentsCenter;	// IMP=0x0000000000003b4b
- (struct CGSize)size;	// IMP=0x0000000000003aeb
- (id)initWithImage:(struct CGImage *)arg1 insets:(struct UIEdgeInsets)arg2;	// IMP=0x0000000000003ad7
- (id)initWithImage:(struct CGImage *)arg1 insets:(struct UIEdgeInsets)arg2 blendMode:(id)arg3;	// IMP=0x0000000000003a3f

@end
