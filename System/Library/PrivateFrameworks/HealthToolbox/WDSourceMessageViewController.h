//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKViewController.h>

@class HKSource, UILabel;

__attribute__((visibility("hidden")))
@interface WDSourceMessageViewController : HKViewController
{
    UILabel *_messageLabel;	// 8 = 0x8
    HKSource *_source;	// 16 = 0x10
    long long _style;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001aac9
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000001a98c
- (void)viewDidLoad;	// IMP=0x000000000001a4ef
- (void)_updateFont;	// IMP=0x000000000001a44f
- (id)initWithStyle:(long long)arg1 source:(id)arg2;	// IMP=0x000000000001a2cc

@end

