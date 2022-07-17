//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <SiriUI/SiriUICarDNDContextProviderDelegate-Protocol.h>

@class NSString, SiriUICarDNDContextProvider, UIImageView, UILabel;
@protocol SiriUICarDNDDelegate;

@interface SiriUICarDNDUseSiriHeaderViewController : UIViewController <SiriUICarDNDContextProviderDelegate>
{
    _Bool _localizedSubtitleDisplayedAboveTitle;	// 8 = 0x8
    id <SiriUICarDNDDelegate> _delegate;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_subtitleLabel;	// 32 = 0x20
    NSString *_localizedTitle;	// 40 = 0x28
    NSString *_localizedSubtitle;	// 48 = 0x30
    UIImageView *_siriOrbImageView;	// 56 = 0x38
    SiriUICarDNDContextProvider *_contextProvider;	// 64 = 0x40
}

+ (_Bool)shouldShowCarDNDUseSiriHeaderViewController;	// IMP=0x000000000002b3fe
- (void).cxx_destruct;	// IMP=0x000000000002cec4
@property(retain, nonatomic, getter=_contextProvider, setter=_setContextProvider:) SiriUICarDNDContextProvider *contextProvider; // @synthesize contextProvider=_contextProvider;
@property(retain, nonatomic, getter=_siriOrbImageView, setter=_setSiriOrbImageView:) UIImageView *siriOrbImageView; // @synthesize siriOrbImageView=_siriOrbImageView;
@property(retain, nonatomic, getter=_localizedSubtitle, setter=_setLocalizedSubtitle:) NSString *localizedSubtitle; // @synthesize localizedSubtitle=_localizedSubtitle;
@property(retain, nonatomic, getter=_localizedTitle, setter=_setLocalizedTitle:) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(retain, nonatomic, getter=_subtitleLabel, setter=_setSubtitleLabel:) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic, getter=_titleLabel, setter=_setTitleLabel:) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <SiriUICarDNDDelegate> delegate; // @synthesize delegate=_delegate;
- (void)contextProvided:(id)arg1;	// IMP=0x000000000002cd9f
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000002cd97
- (void)_sendCardAppearedAnalyticsEvent;	// IMP=0x000000000002ccbb
- (void)_removeContextProvider;	// IMP=0x000000000002cc2d
- (id)_hintContext;	// IMP=0x000000000002cae8
- (void)_addContextProvider;	// IMP=0x000000000002c990
- (void)_setupTitleAndSubtitleConstraints;	// IMP=0x000000000002c28a
- (void)_setupSubtitleLabel;	// IMP=0x000000000002c08e
- (void)_setupTitleLabel;	// IMP=0x000000000002be6a
- (void)_setupImageView;	// IMP=0x000000000002ba56
- (void)_setupView;	// IMP=0x000000000002b8de
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000002b89d
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000002b7c2
- (void)viewDidLoad;	// IMP=0x000000000002b745

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
