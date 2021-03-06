//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class KeyboardAvoidingView, NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface SearchNoResultsTableViewCell : UITableViewCell
{
    KeyboardAvoidingView *_keyboardAvoidingView;	// 8 = 0x8
    NSLayoutConstraint *_heightConstraint;	// 16 = 0x10
}

+ (id)identifier;	// IMP=0x00400000002cc59a
- (void).cxx_destruct;	// IMP=0x00200000002cc98e
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) KeyboardAvoidingView *keyboardAvoidingView; // @synthesize keyboardAvoidingView=_keyboardAvoidingView;
- (void)layoutSubviews;	// IMP=0x00100000002cc8da
- (void)setHeightConstraint:(double)arg1 withPriority:(float)arg2;	// IMP=0x00100000002cc608
- (void)clearHeightConstraint;	// IMP=0x00100000002cc5ac
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000002cbfcb

@end

