//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MTKView, Renderer;

@interface ReplayerViewController : UIViewController
{
    Renderer *_renderer;	// 8 = 0x8
    _Bool _shouldRotate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000899f8
- (void)setWindowTitle:(id)arg1;	// IMP=0x00100000000899f2
- (void)setContentRect:(struct CGRect)arg1 windowRect:(struct CGRect)arg2 properties:(id)arg3;	// IMP=0x00100000000899ec
- (void)setColorPixelFormat:(unsigned long long)arg1;	// IMP=0x00100000000899a0
- (_Bool)shouldAutorotate;	// IMP=0x0010000000089990
- (void)setOrientation:(long long)arg1;	// IMP=0x0010000000089898
- (void)setDisplayTextureEncoder:(id)arg1;	// IMP=0x00100000000897e0
- (_Bool)prefersHomeIndicatorAutoHidden;	// IMP=0x00100000000897d8
- (void)setDevice:(id)arg1;	// IMP=0x00100000000895e3
- (void)viewDidLoad;	// IMP=0x0010000000089541
- (void)loadView;	// IMP=0x00100000000894c8

// Remaining properties
@property(retain, nonatomic) MTKView *view; // @dynamic view;

@end

