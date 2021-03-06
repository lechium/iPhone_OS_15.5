//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface STStorageProgressView : UIView
{
    UIColor *_grayColor;	// 8 = 0x8
    UIColor *_blueColor;	// 16 = 0x10
    double _percent;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000001ab2
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000001a71
@property double percent;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000000017a4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000001706
- (void)updateColors;	// IMP=0x000000000000161a

@end

