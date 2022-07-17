//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNUIGeminiDataSourceDelegate-Protocol.h>

@class CNContact, CNContactGeminiView, CNGeminiResult, CNUIGeminiDataSource, NSArray, NSLayoutYAxisAnchor, NSString, UILabel, UIStackView;

__attribute__((visibility("hidden")))
@interface CNStarkContactInfoViewController : UIViewController <CNUIGeminiDataSourceDelegate>
{
    NSLayoutYAxisAnchor *_firstBaselineAnchor;	// 8 = 0x8
    UILabel *_primaryLabel;	// 16 = 0x10
    UILabel *_secondaryLabel;	// 24 = 0x18
    UIStackView *_stackView;	// 32 = 0x20
    NSArray *_layoutConstraints;	// 40 = 0x28
    CNContact *_contact;	// 48 = 0x30
    CNContactGeminiView *_contactGeminiView;	// 56 = 0x38
    CNUIGeminiDataSource *_geminiDataSource;	// 64 = 0x40
    CNGeminiResult *_geminiResult;	// 72 = 0x48
}

+ (id)descriptorForRequiredKeys;	// IMP=0x00000000000ff27b
- (void).cxx_destruct;	// IMP=0x00000000000ff1d3
@property(retain, nonatomic) CNGeminiResult *geminiResult; // @synthesize geminiResult=_geminiResult;
@property(retain, nonatomic) CNUIGeminiDataSource *geminiDataSource; // @synthesize geminiDataSource=_geminiDataSource;
@property(retain, nonatomic) CNContactGeminiView *contactGeminiView; // @synthesize contactGeminiView=_contactGeminiView;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(readonly, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *firstBaselineAnchor; // @synthesize firstBaselineAnchor=_firstBaselineAnchor;
- (void)geminiDataSourceDidUpdate:(id)arg1;	// IMP=0x00000000000fefd7
- (_Bool)shouldShowGemini;	// IMP=0x00000000000fef59
- (void)setupLayoutConstraints;	// IMP=0x00000000000feb7a
- (void)updateViewConstraints;	// IMP=0x00000000000feaf1
- (void)resetLayoutConstraints;	// IMP=0x00000000000fea3f
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000fe943
- (void)updateViews;	// IMP=0x00000000000fe5fc
- (void)setupViews;	// IMP=0x00000000000fde8f
- (void)viewDidLoad;	// IMP=0x00000000000fde39
- (id)initWithContact:(id)arg1;	// IMP=0x00000000000fdc28
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000fdbce
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000fdb7d
- (id)init;	// IMP=0x00000000000fdb40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
