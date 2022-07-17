//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface CKAppIconView : UIView
{
    UIView *_contactItemView;	// 8 = 0x8
    long long _appName;	// 16 = 0x10
    UIView *_activityItemView;	// 24 = 0x18
    NSMutableArray *_constraints;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002d5f0d
@property(retain, nonatomic) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UIView *activityItemView; // @synthesize activityItemView=_activityItemView;
@property(nonatomic) long long appName; // @synthesize appName=_appName;
@property(retain, nonatomic) UIView *contactItemView; // @synthesize contactItemView=_contactItemView;
- (void)updateConstraints;	// IMP=0x00000000002d4438
- (void)setUpSubviews;	// IMP=0x00000000002d408b
- (id)initWithFrame:(struct CGRect)arg1 withAppName:(long long)arg2;	// IMP=0x00000000002d4000

@end
