//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUI/SiriUITemplateView-Protocol.h>

@class NSString, UIButton, UIImageView, UILabel;
@protocol SiriUITemplatedView, SiriUITextTemplateModel;

@interface SiriUITextTemplateView <SiriUITemplateView>
{
    UIImageView *_chevronView;	// 8 = 0x8
    UILabel *_detailTextLabel;	// 16 = 0x10
    UIButton *_disclosureButton;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000015383
@property(retain, nonatomic) UIButton *disclosureButton; // @synthesize disclosureButton=_disclosureButton;
@property(retain, nonatomic) UILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(retain, nonatomic) UIImageView *chevronView; // @synthesize chevronView=_chevronView;
- (void)reloadData;	// IMP=0x0000000000015273
- (void)layoutDetailText;	// IMP=0x00000000000150c4
- (void)removeTargetForDisclosure:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000000150a1
- (void)addTargetForDisclosure:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000001507e
- (void)_setupDisclosureButton;	// IMP=0x0000000000014fed
- (void)setupDisclosureIndicator;	// IMP=0x0000000000014eaf
- (void)layoutSubviews;	// IMP=0x0000000000014ddd
- (id)initWithDataSource:(id)arg1;	// IMP=0x0000000000014d94

// Remaining properties
@property __weak id <SiriUITextTemplateModel> dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <SiriUITemplatedView> templatedSuperview;

@end
