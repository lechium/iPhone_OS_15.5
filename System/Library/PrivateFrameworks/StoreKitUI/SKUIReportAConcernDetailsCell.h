//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <StoreKitUI/UITextViewDelegate-Protocol.h>

@class NSString, UITextView;

__attribute__((visibility("hidden")))
@interface SKUIReportAConcernDetailsCell : UITableViewCell <UITextViewDelegate>
{
    NSString *_placeholderText;	// 8 = 0x8
    UITextView *_textView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000181fec
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
- (void)updatePlaceholderText:(_Bool)arg1;	// IMP=0x0000000000181d75
- (void)textViewDidEndEditing:(id)arg1;	// IMP=0x0000000000181d61
- (void)textViewDidBeginEditing:(id)arg1;	// IMP=0x0000000000181d4a
@property(readonly, copy, nonatomic) NSString *text;
- (void)layoutSubviews;	// IMP=0x0000000000181874
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000181755

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
