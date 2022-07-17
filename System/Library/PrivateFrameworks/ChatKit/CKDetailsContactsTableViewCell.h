//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKAvatarView, CKLabel, CNContact, NSString, UIActivityIndicatorView, UIButton, UILabel;
@protocol CKDetailsContactsTableViewCellDelegate;

@interface CKDetailsContactsTableViewCell
{
    _Bool _tuConversationStatusIsActive;	// 8 = 0x8
    _Bool _showsLocation;	// 9 = 0x9
    _Bool _showMessageButton;	// 10 = 0xa
    _Bool _showPhoneButton;	// 11 = 0xb
    _Bool _showFaceTimeVideoButton;	// 12 = 0xc
    _Bool _showInfoButton;	// 13 = 0xd
    _Bool _showScreenSharingButton;	// 14 = 0xe
    _Bool _showsTUConversationStatus;	// 15 = 0xf
    CKAvatarView *_contactAvatarView;	// 16 = 0x10
    id <CKDetailsContactsTableViewCellDelegate> _delegate;	// 24 = 0x18
    CKLabel *_nameLabel;	// 32 = 0x20
    UILabel *_locationLabel;	// 40 = 0x28
    UILabel *_expanseStatusLabel;	// 48 = 0x30
    NSString *_entityName;	// 56 = 0x38
    NSString *_locationString;	// 64 = 0x40
    long long _callType;	// 72 = 0x48
    UIButton *_messageButton;	// 80 = 0x50
    UIButton *_phoneButton;	// 88 = 0x58
    UIButton *_facetimeVideoButton;	// 96 = 0x60
    UIButton *_screenSharingButton;	// 104 = 0x68
    CNContact *_contact;	// 112 = 0x70
    UIActivityIndicatorView *_updatingParticipantSpinner;	// 120 = 0x78
}

+ (double)marginWidth;	// IMP=0x00000000003cc21b
+ (double)preferredHeight;	// IMP=0x00000000003cc212
+ (double)estimatedHeight;	// IMP=0x00000000003cc209
+ (id)reuseIdentifier;	// IMP=0x00000000003cc1fc
+ (Class)cellClass;	// IMP=0x00000000003cc18b
- (void).cxx_destruct;	// IMP=0x00000000003ce820
@property(retain, nonatomic) UIActivityIndicatorView *updatingParticipantSpinner; // @synthesize updatingParticipantSpinner=_updatingParticipantSpinner;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UIButton *screenSharingButton; // @synthesize screenSharingButton=_screenSharingButton;
@property(retain, nonatomic) UIButton *facetimeVideoButton; // @synthesize facetimeVideoButton=_facetimeVideoButton;
@property(retain, nonatomic) UIButton *phoneButton; // @synthesize phoneButton=_phoneButton;
@property(retain, nonatomic) UIButton *messageButton; // @synthesize messageButton=_messageButton;
@property(nonatomic) _Bool showsTUConversationStatus; // @synthesize showsTUConversationStatus=_showsTUConversationStatus;
@property(nonatomic) _Bool showScreenSharingButton; // @synthesize showScreenSharingButton=_showScreenSharingButton;
@property(nonatomic) _Bool showInfoButton; // @synthesize showInfoButton=_showInfoButton;
@property(nonatomic) _Bool showFaceTimeVideoButton; // @synthesize showFaceTimeVideoButton=_showFaceTimeVideoButton;
@property(nonatomic) _Bool showPhoneButton; // @synthesize showPhoneButton=_showPhoneButton;
@property(nonatomic) _Bool showMessageButton; // @synthesize showMessageButton=_showMessageButton;
@property(nonatomic) _Bool showsLocation; // @synthesize showsLocation=_showsLocation;
@property(nonatomic) long long callType; // @synthesize callType=_callType;
@property(nonatomic) _Bool tuConversationStatusIsActive; // @synthesize tuConversationStatusIsActive=_tuConversationStatusIsActive;
@property(copy, nonatomic) NSString *locationString; // @synthesize locationString=_locationString;
@property(copy, nonatomic) NSString *entityName; // @synthesize entityName=_entityName;
@property(retain, nonatomic) UILabel *expanseStatusLabel; // @synthesize expanseStatusLabel=_expanseStatusLabel;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) CKLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak id <CKDetailsContactsTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CKAvatarView *contactAvatarView; // @synthesize contactAvatarView=_contactAvatarView;
- (void)didHoverOverCell:(id)arg1;	// IMP=0x00000000003ce517
- (void)_configureButtonLayer:(id)arg1;	// IMP=0x00000000003ce42a
- (void)_hideAllButtons;	// IMP=0x00000000003ce424
- (void)_updateVisibleButtons;	// IMP=0x00000000003ce41e
- (void)_handleCommunicationAction:(id)arg1;	// IMP=0x00000000003ce321
- (void)_dismissUpdatingParticipantSpinner;	// IMP=0x00000000003ce233
- (void)_showUpdatingParticipantSpinner;	// IMP=0x00000000003ce163
- (void)_formatExpanseStatusLabel;	// IMP=0x00000000003cddfc
- (void)configureWithViewModel:(id)arg1;	// IMP=0x00000000003cd9a9
- (void)layoutSubviews;	// IMP=0x00000000003cd085
- (id)_imageNamed:(id)arg1;	// IMP=0x00000000003ccfef
- (id)_ckSymbolImageNamed:(id)arg1 preferredContentSizeCategory:(id)arg2 preferredFontTextStyle:(id)arg3;	// IMP=0x00000000003ccef0
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000003cc306
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000003cc27a
- (_Bool)__im_ff_isExpanseEnabled;	// IMP=0x00000000003cc140

@end
