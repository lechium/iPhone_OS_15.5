//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSString;

@interface SBHIconTableViewHeaderFooterView : UITableViewHeaderFooterView
{
    NSString *_title;	// 8 = 0x8
    struct NSDirectionalEdgeInsets _titleLayoutMargins;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000052a8e
@property(nonatomic) struct NSDirectionalEdgeInsets titleLayoutMargins; // @synthesize titleLayoutMargins=_titleLayoutMargins;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)prepareForReuse;	// IMP=0x0000000000052919
- (void)updateConfigurationUsingState:(id)arg1;	// IMP=0x00000000000525af
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x0000000000052544

@end
