//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafari/SFNavigationBarItemObserver-Protocol.h>
#import <MobileSafari/SFTabHoverPreviewItem-Protocol.h>

@class NSDate, NSString, NSUUID, SFNavigationBarItem, SFUnifiedTabBarItemView, SFWebExtensionButtonConfiguration, UIImage, _SFFluidProgressView;

@interface SFUnifiedTabBarItem <SFNavigationBarItemObserver, SFTabHoverPreviewItem>
{
    _Bool _isPlaceholder;	// 8 = 0x8
    _Bool _showsBadgeOnExtensionsButton;	// 9 = 0x9
    SFNavigationBarItem *_navigationBarItem;	// 16 = 0x10
    UIImage *_icon;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    NSDate *_lastReloadDate;	// 40 = 0x28
    unsigned long long _mediaStateIcon;	// 48 = 0x30
    _SFFluidProgressView *_progressView;	// 56 = 0x38
    NSUUID *_UUID;	// 64 = 0x40
    double _downloadProgress;	// 72 = 0x48
    SFWebExtensionButtonConfiguration *_extensionButtonConfiguration;	// 80 = 0x50
    unsigned long long _menuButtonBadges;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000002b40
@property(nonatomic) _Bool showsBadgeOnExtensionsButton; // @synthesize showsBadgeOnExtensionsButton=_showsBadgeOnExtensionsButton;
@property(nonatomic) unsigned long long menuButtonBadges; // @synthesize menuButtonBadges=_menuButtonBadges;
@property(retain, nonatomic) SFWebExtensionButtonConfiguration *extensionButtonConfiguration; // @synthesize extensionButtonConfiguration=_extensionButtonConfiguration;
@property(nonatomic) double downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(retain, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(retain, nonatomic) _SFFluidProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) unsigned long long mediaStateIcon; // @synthesize mediaStateIcon=_mediaStateIcon;
@property(retain, nonatomic) NSDate *lastReloadDate; // @synthesize lastReloadDate=_lastReloadDate;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) SFNavigationBarItem *navigationBarItem; // @synthesize navigationBarItem=_navigationBarItem;
- (void)navigationBarItemDidUpdateShowsVoiceSearchButton:(id)arg1;	// IMP=0x00000000000029f2
- (void)navigationBarItemDidUpdateShowsTranslationButton:(id)arg1;	// IMP=0x0000000000002967
- (void)navigationBarItemDidUpdateShowsTranslationIcon:(id)arg1;	// IMP=0x00000000000028b0
- (void)navigationBarItemDidUpdateProgressView:(id)arg1;	// IMP=0x0000000000002861
- (void)navigationBarItemDidUpdateSecurityAnnotation:(id)arg1;	// IMP=0x000000000000279d
- (void)navigationBarItemDidUpdateShowsReaderButton:(id)arg1;	// IMP=0x0000000000002701
- (void)navigationBarItemDidUpdateFormatButtonSelected:(id)arg1;	// IMP=0x0000000000002669
- (void)navigationBarItemDidUpdateStopReloadButtonShowsStop:(id)arg1;	// IMP=0x000000000000260a
- (void)navigationBarItemDidUpdateShowsStopReloadButtons:(id)arg1;	// IMP=0x00000000000025ab
- (void)navigationBarItemDidUpdateShowsLockIcon:(id)arg1;	// IMP=0x000000000000254c
- (void)navigationBarItemDidUpdateShowsSearchIndicator:(id)arg1;	// IMP=0x00000000000024ed
- (void)navigationBarItemDidUpdateText:(id)arg1;	// IMP=0x000000000000240f
@property(readonly, nonatomic) SFUnifiedTabBarItemView *itemView;
- (void)configureItemView:(id)arg1;	// IMP=0x0000000000002178
- (void)setReusableView:(id)arg1;	// IMP=0x00000000000020b7
- (void)dismissAvailabilityOverlays;	// IMP=0x000000000000207a
- (void)toggleExtensionBadge;	// IMP=0x0000000000001ffd
- (void)setDownloadProgress:(double)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000001ec9
- (id)init;	// IMP=0x0000000000001b50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
