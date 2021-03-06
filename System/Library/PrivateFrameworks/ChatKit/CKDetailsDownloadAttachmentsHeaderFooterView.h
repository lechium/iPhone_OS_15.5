//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

#import <ChatKit/CKDetailsHeaderFooterView-Protocol.h>

@class NSLayoutConstraint, NSString, UIColor, UIImageView, UITextView;
@protocol CKDetailsDownloadAttachmentsHeaderFooterViewDelegate;

__attribute__((visibility("hidden")))
@interface CKDetailsDownloadAttachmentsHeaderFooterView : UITableViewHeaderFooterView <CKDetailsHeaderFooterView>
{
    _Bool _logoHidden;	// 8 = 0x8
    NSString *_titleText;	// 16 = 0x10
    NSString *_buttonText;	// 24 = 0x18
    id <CKDetailsDownloadAttachmentsHeaderFooterViewDelegate> _delegate;	// 32 = 0x20
    UIColor *_downloadButtonTextColor;	// 40 = 0x28
    UIColor *_titleTextColor;	// 48 = 0x30
    UIImageView *_iCloudImageView;	// 56 = 0x38
    UITextView *_titleTextView;	// 64 = 0x40
    UITextView *_buttonTextView;	// 72 = 0x48
    NSLayoutConstraint *_titleTextTopToLogoConstraint;	// 80 = 0x50
    NSLayoutConstraint *_titleTextTopToViewConstraint;	// 88 = 0x58
}

+ (id)reuseIdentifier;	// IMP=0x00000000001f62fe
- (void).cxx_destruct;	// IMP=0x00000000001f75c3
@property(retain, nonatomic) NSLayoutConstraint *titleTextTopToViewConstraint; // @synthesize titleTextTopToViewConstraint=_titleTextTopToViewConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleTextTopToLogoConstraint; // @synthesize titleTextTopToLogoConstraint=_titleTextTopToLogoConstraint;
@property(retain, nonatomic) UITextView *buttonTextView; // @synthesize buttonTextView=_buttonTextView;
@property(retain, nonatomic) UITextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) UIImageView *iCloudImageView; // @synthesize iCloudImageView=_iCloudImageView;
@property(nonatomic) _Bool logoHidden; // @synthesize logoHidden=_logoHidden;
@property(retain, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@property(retain, nonatomic) UIColor *downloadButtonTextColor; // @synthesize downloadButtonTextColor=_downloadButtonTextColor;
@property(nonatomic) __weak id <CKDetailsDownloadAttachmentsHeaderFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void)handleUserTap:(id)arg1;	// IMP=0x00000000001f724e
- (void)layoutSubviews;	// IMP=0x00000000001f6fe7
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x00000000001f630b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

