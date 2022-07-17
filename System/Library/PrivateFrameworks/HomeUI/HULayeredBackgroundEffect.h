//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIBlurEffect, UIColor;

@interface HULayeredBackgroundEffect : NSObject
{
    UIBlurEffect *_blurEffect;	// 8 = 0x8
    UIColor *_fillColor;	// 16 = 0x10
}

+ (id)backgroundWithBlurEffect:(id)arg1;	// IMP=0x00000000001431ee
+ (id)backgroundWithFillColor:(id)arg1;	// IMP=0x0000000000143198
- (void).cxx_destruct;	// IMP=0x000000000014327a
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIBlurEffect *blurEffect; // @synthesize blurEffect=_blurEffect;

@end
