//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CNContact, UIImageView;

__attribute__((visibility("hidden")))
@interface MeCardShortcutView : UIView
{
    UIImageView *_homeImageview;	// 8 = 0x8
    UIImageView *_workImageview;	// 16 = 0x10
    UIImageView *_schoolImageview;	// 24 = 0x18
    CNContact *_contact;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000007c2523
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void)_createViews;	// IMP=0x00100000007c1322
- (id)initWithContact:(id)arg1;	// IMP=0x00100000007c128d
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000007c1285

@end
