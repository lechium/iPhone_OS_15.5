//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILabel.h>

@protocol ReservationLabelLayoutDelegate;

__attribute__((visibility("hidden")))
@interface ReservationLabel : UILabel
{
    id <ReservationLabelLayoutDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000056dd7c
@property(nonatomic) __weak id <ReservationLabelLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool textFits;
- (void)layoutSubviews;	// IMP=0x001000000056dab3

@end

