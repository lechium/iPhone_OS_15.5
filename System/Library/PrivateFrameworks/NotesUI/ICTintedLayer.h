//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class UIColor;

@interface ICTintedLayer : CALayer
{
    UIColor *_tintColor;	// 8 = 0x8
    id _originalContents;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000d2b73
@property(retain, nonatomic) id originalContents; // @synthesize originalContents=_originalContents;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (void)updateContents;	// IMP=0x00000000000d287a
- (void)setContents:(id)arg1;	// IMP=0x00000000000d27ae

@end

