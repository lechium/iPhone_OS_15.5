//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface ICQCloudStorageDataAndMailBarButtonView : UIView
{
    UILabel *_data;	// 8 = 0x8
    UILabel *_dataSizes;	// 16 = 0x10
    UILabel *_mail;	// 24 = 0x18
    UILabel *_mailSizes;	// 32 = 0x20
}

+ (id)barButtonItemWithData:(id)arg1 andMail:(id)arg2;	// IMP=0x00000000000275ab
- (void).cxx_destruct;	// IMP=0x0000000000028122
- (void)layoutSubviews;	// IMP=0x0000000000027e51
- (void)sizeToFit;	// IMP=0x0000000000027cbe
- (id)initWithData:(id)arg1 andMail:(id)arg2;	// IMP=0x0000000000027676

@end
