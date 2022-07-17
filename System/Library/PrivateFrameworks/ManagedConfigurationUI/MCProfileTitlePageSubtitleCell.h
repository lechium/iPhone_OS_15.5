//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <ManagedConfigurationUI/MCUIScrollAnimationResponder-Protocol.h>

@class NSString, UILabel;

@interface MCProfileTitlePageSubtitleCell : UITableViewCell <MCUIScrollAnimationResponder>
{
    UILabel *_titleLabel;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000029922
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateProgressWithTranslationDistance:(double)arg1 referenceDistance:(double)arg2 isScrolling:(_Bool)arg3;	// IMP=0x0000000000029851
- (void)_updateConstraintsWithLabel:(id)arg1;	// IMP=0x0000000000029694
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000294e9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
