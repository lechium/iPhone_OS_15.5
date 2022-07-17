//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccount/AAOBInheritanceSetupCompleteModel.h>

#import <AppleAccountUI/AAUIOBWelcomeControllerViewModelProtocol-Protocol.h>

@class AACustodianshipInfo, NSString, UIImage, UIView;

@interface AAUIOBInheritanceSetupCompleteViewModel : AAOBInheritanceSetupCompleteModel <AAUIOBWelcomeControllerViewModelProtocol>
{
    UIImage *_image;	// 8 = 0x8
    UIView *_contentView;	// 16 = 0x10
    UIView *_secondaryView;	// 24 = 0x18
    long long _contentViewLayout;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000406db
@property(nonatomic) long long contentViewLayout; // @synthesize contentViewLayout=_contentViewLayout;
@property(copy, nonatomic) UIView *secondaryView; // @synthesize secondaryView=_secondaryView;
@property(copy, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)initWithBeneficiaryName:(id)arg1 accessKeyShareType:(unsigned long long)arg2;	// IMP=0x0000000000040610

// Remaining properties
@property(copy, nonatomic) AACustodianshipInfo *custodianshipInfo;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *detailText;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *helpLinkTitle;
@property(copy, nonatomic) NSString *helpLinkURL;
@property(copy, nonatomic) NSString *imageName;
@property(copy, nonatomic) NSString *leftBarButton;
@property(copy, nonatomic) NSString *ownerHandle;
@property(copy, nonatomic) NSString *primaryButton;
@property(copy, nonatomic) NSString *recipientHandle;
@property(copy, nonatomic) NSString *secondaryButton;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *title;

@end
