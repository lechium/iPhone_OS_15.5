//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationBar.h>

@class MKViewWithHairline;

__attribute__((visibility("hidden")))
@interface ExtensionNavigationBar : UINavigationBar
{
    _Bool _supressTransition;	// 8 = 0x8
    MKViewWithHairline *_hairlineView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000590570
@property(nonatomic) _Bool supressTransition; // @synthesize supressTransition=_supressTransition;
@property(retain, nonatomic) MKViewWithHairline *hairlineView; // @synthesize hairlineView=_hairlineView;
- (void)layoutSubviews;	// IMP=0x001000000059045c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000005902fc

@end
