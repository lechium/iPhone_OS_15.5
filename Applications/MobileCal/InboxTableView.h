//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableView.h>

@class UIColor, UILabel;
@protocol InboxTableViewDelegate;

@interface InboxTableView : UITableView
{
    UILabel *_noContentView;	// 8 = 0x8
    id <InboxTableViewDelegate> _listViewDelegate;	// 16 = 0x10
    UIColor *_preferredBackgroundColor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000996aa
@property(retain, nonatomic) UIColor *preferredBackgroundColor; // @synthesize preferredBackgroundColor=_preferredBackgroundColor;
@property(nonatomic) __weak id <InboxTableViewDelegate> listViewDelegate; // @synthesize listViewDelegate=_listViewDelegate;
- (void)setShowNoContentString:(_Bool)arg1;	// IMP=0x001000000009904b
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;	// IMP=0x0010000000098fb1

@end
