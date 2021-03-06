//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel, UIStackView;

__attribute__((visibility("hidden")))
@interface RAPDisplayUserContentTableViewCell : UITableViewCell
{
    UILabel *_userNameLabel;	// 8 = 0x8
    UILabel *_userEmailLabel;	// 16 = 0x10
    UIImageView *_userImageView;	// 24 = 0x18
    UIStackView *_labelsStackView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000ad592d
- (void)userDataDidUpdate;	// IMP=0x0010000000ad591b
@property(retain, nonatomic) NSString *emailString;
@property(retain, nonatomic) NSString *nameString;
- (void)_retrieveUserInformation;	// IMP=0x0010000000ad577a
- (void)_configureViews;	// IMP=0x0010000000ad4f4b
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000ad4eea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

