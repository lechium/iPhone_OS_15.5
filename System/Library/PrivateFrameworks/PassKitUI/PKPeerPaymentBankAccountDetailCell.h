//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@interface PKPeerPaymentBankAccountDetailCell : UITableViewCell
{
    _Bool _shouldDrawSeperator;	// 8 = 0x8
    _Bool _shouldDrawFullWidthSeperator;	// 9 = 0x9
    double _minimumTextLabelWidth;	// 16 = 0x10
}

@property(nonatomic) double minimumTextLabelWidth; // @synthesize minimumTextLabelWidth=_minimumTextLabelWidth;
@property(nonatomic) _Bool shouldDrawFullWidthSeperator; // @synthesize shouldDrawFullWidthSeperator=_shouldDrawFullWidthSeperator;
@property(nonatomic) _Bool shouldDrawSeperator; // @synthesize shouldDrawSeperator=_shouldDrawSeperator;
- (struct CGRect)_separatorFrame;	// IMP=0x00000000002fffba
- (void)layoutSubviews;	// IMP=0x00000000002ff985
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000002ff59d

@end

