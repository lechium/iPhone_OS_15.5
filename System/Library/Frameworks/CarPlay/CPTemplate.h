//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CarPlay/CPBarButtonDelegate-Protocol.h>
#import <CarPlay/CPBarButtonProviding-Protocol.h>
#import <CarPlay/CPControlDelegate-Protocol.h>
#import <CarPlay/CPTemplateDelegate-Protocol.h>
#import <CarPlay/NSSecureCoding-Protocol.h>

@class CPBarButton, NAFuture, NSArray, NSString, NSUUID, UIImage;
@protocol CPBaseTemplateProviding, CPTemplateDelegate;

@interface CPTemplate : NSObject <CPBarButtonDelegate, CPBarButtonProviding, CPControlDelegate, CPTemplateDelegate, NSSecureCoding>
{
    _Bool _showsTabBadge;	// 8 = 0x8
    _Bool _needsUpdate;	// 9 = 0x9
    CPBarButton *_backButton;	// 16 = 0x10
    id _userInfo;	// 24 = 0x18
    NSString *_tabTitle;	// 32 = 0x20
    UIImage *_tabImage;	// 40 = 0x28
    long long _tabSystemItem;	// 48 = 0x30
    id <CPBaseTemplateProviding> _templateProvider;	// 56 = 0x38
    NAFuture *_templateProviderFuture;	// 64 = 0x40
    NSUUID *_identifier;	// 72 = 0x48
    id <CPTemplateDelegate> _templateDelegate;	// 80 = 0x50
    NSArray *_internalLeadingBarButtons;	// 88 = 0x58
    NSArray *_internalTrailingBarButtons;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000038082
- (void).cxx_destruct;	// IMP=0x000000000003a38f
@property(retain, nonatomic) NSArray *internalTrailingBarButtons; // @synthesize internalTrailingBarButtons=_internalTrailingBarButtons;
@property(retain, nonatomic) NSArray *internalLeadingBarButtons; // @synthesize internalLeadingBarButtons=_internalLeadingBarButtons;
@property(nonatomic) __weak id <CPTemplateDelegate> templateDelegate; // @synthesize templateDelegate=_templateDelegate;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NAFuture *templateProviderFuture; // @synthesize templateProviderFuture=_templateProviderFuture;
@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(retain, nonatomic) id <CPBaseTemplateProviding> templateProvider; // @synthesize templateProvider=_templateProvider;
@property(nonatomic) _Bool showsTabBadge; // @synthesize showsTabBadge=_showsTabBadge;
@property(nonatomic) long long tabSystemItem; // @synthesize tabSystemItem=_tabSystemItem;
@property(retain, nonatomic) UIImage *tabImage; // @synthesize tabImage=_tabImage;
@property(copy, nonatomic) NSString *tabTitle; // @synthesize tabTitle=_tabTitle;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) CPBarButton *backButton; // @synthesize backButton=_backButton;
- (void)performUpdate;	// IMP=0x000000000003a25b
- (void)setNeedsUpdate;	// IMP=0x000000000003a12c
- (_Bool)barButton:(id)arg1 setTitle:(id)arg2;	// IMP=0x0000000000039fc8
- (_Bool)barButton:(id)arg1 setImage:(id)arg2;	// IMP=0x0000000000039e64
- (_Bool)control:(id)arg1 setSelected:(_Bool)arg2;	// IMP=0x0000000000039d1c
- (_Bool)control:(id)arg1 setEnabled:(_Bool)arg2;	// IMP=0x0000000000039bd4
- (void)templateDidDisappearWithIdentifier:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000039a86
- (void)templateDidAppearWithIdentifier:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000039938
- (void)templateWillDisappearWithIdentifier:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000397ea
- (void)templateWillAppearWithIdentifier:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000003969c
- (void)handleActionForControlIdentifier:(id)arg1;	// IMP=0x000000000003922c
@property(retain, nonatomic) NSArray *trailingNavigationBarButtons;
@property(retain, nonatomic) NSArray *leadingNavigationBarButtons;
- (void)invalidateTemplateProvider;	// IMP=0x0000000000038848
- (void)connectTemplateProvider:(id)arg1;	// IMP=0x00000000000387cf
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000386d5
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000383a9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003813d
- (id)init;	// IMP=0x000000000003808a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
