//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CarPlayUI/CPUITableCellConfigurationProtocol-Protocol.h>

@class CPUITableCellAccessory, NSString, UIImage;

@interface CPUITableCellConfiguration : NSObject <CPUITableCellConfigurationProtocol>
{
    _Bool _showExplicit;	// 8 = 0x8
    _Bool _shouldShowPlaybackProgress;	// 9 = 0x9
    _Bool _showActivityIndicator;	// 10 = 0xa
    _Bool _playingIndicatorLeadingSide;	// 11 = 0xb
    _Bool _enabled;	// 12 = 0xc
    NSString *_text;	// 16 = 0x10
    NSString *_detailText;	// 24 = 0x18
    CPUITableCellAccessory *_accessory;	// 32 = 0x20
    UIImage *_image;	// 40 = 0x28
    double _playbackProgress;	// 48 = 0x30
    long long _playbackState;	// 56 = 0x38
}

+ (id)configurationWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3 showExplicit:(_Bool)arg4 accessory:(id)arg5 showActivityIndicator:(_Bool)arg6 showPlaybackProgress:(_Bool)arg7 playbackProgress:(double)arg8 currentlyPlaying:(_Bool)arg9;	// IMP=0x000000000000c05d
+ (id)configurationWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3 showExplicit:(_Bool)arg4 accessory:(id)arg5 showActivityIndicator:(_Bool)arg6 showPlaybackProgress:(_Bool)arg7 playbackProgress:(double)arg8 currentlyPlaying:(_Bool)arg9 playingIndicatorLeadingSide:(_Bool)arg10;	// IMP=0x000000000000c01e
+ (id)configurationWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3 showExplicit:(_Bool)arg4 accessory:(id)arg5 showActivityIndicator:(_Bool)arg6 showPlaybackProgress:(_Bool)arg7 playbackProgress:(double)arg8 currentlyPlaying:(_Bool)arg9 playingIndicatorLeadingSide:(_Bool)arg10 isEnabled:(_Bool)arg11;	// IMP=0x000000000000bfd0
+ (id)configurationWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3 showExplicit:(_Bool)arg4 accessory:(id)arg5 showActivityIndicator:(_Bool)arg6 showPlaybackProgress:(_Bool)arg7 playbackProgress:(double)arg8 playbackState:(long long)arg9 playingIndicatorLeadingSide:(_Bool)arg10 isEnabled:(_Bool)arg11;	// IMP=0x000000000000be56
- (void).cxx_destruct;	// IMP=0x000000000000c19f
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool playingIndicatorLeadingSide; // @synthesize playingIndicatorLeadingSide=_playingIndicatorLeadingSide;
@property(nonatomic) _Bool showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
@property(nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property(nonatomic) _Bool shouldShowPlaybackProgress; // @synthesize shouldShowPlaybackProgress=_shouldShowPlaybackProgress;
@property(nonatomic) double playbackProgress; // @synthesize playbackProgress=_playbackProgress;
@property(nonatomic) _Bool showExplicit; // @synthesize showExplicit=_showExplicit;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) CPUITableCellAccessory *accessory; // @synthesize accessory=_accessory;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (_Bool)currentlyPlaying;	// IMP=0x000000000000c096

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

