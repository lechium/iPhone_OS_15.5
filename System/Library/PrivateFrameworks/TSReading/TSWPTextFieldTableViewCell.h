//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <TSReading/UITextFieldDelegate-Protocol.h>

@class NSString, UITextField;

@interface TSWPTextFieldTableViewCell : UITableViewCell <UITextFieldDelegate>
{
    UITextField *_textField;	// 8 = 0x8
}

@property(readonly, retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void)p_endEditingOnExit;	// IMP=0x0000000000269d5a
- (void)dealloc;	// IMP=0x0000000000269cf8
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000269b7a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

