//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <NotesUI/LPAudioPlayer-Protocol.h>
#import <NotesUI/LPLinkViewDelegate-Protocol.h>

@class ICAddAttachmentsManagerAttachmentInfo, ICAttachment, LPLinkView, NSHashTable, NSLayoutConstraint, NSRegularExpression, NSString, UIColor;

@interface ICAttachmentBrickViewLP : UIView <LPLinkViewDelegate, LPAudioPlayer>
{
    _Bool _selected;	// 8 = 0x8
    _Bool _insideSystemPaper;	// 9 = 0x9
    _Bool _didSendResizeNotification;	// 10 = 0xa
    _Bool _waitingForMetadata;	// 11 = 0xb
    float _playbackProgress;	// 12 = 0xc
    NSRegularExpression *_highlightPatternRegex;	// 16 = 0x10
    ICAttachment *_attachment;	// 24 = 0x18
    ICAddAttachmentsManagerAttachmentInfo *_shareExtensionAttachmentInfo;	// 32 = 0x20
    UIColor *_highlightColor;	// 40 = 0x28
    LPLinkView *_lpLinkView;	// 48 = 0x30
    unsigned long long _type;	// 56 = 0x38
    NSLayoutConstraint *_widthConstraint;	// 64 = 0x40
    NSLayoutConstraint *_heightConstraint;	// 72 = 0x48
    NSHashTable *_audioPlayerClients;	// 80 = 0x50
    unsigned long long _playerState;	// 88 = 0x58
}

+ (struct CGSize)sizeForAttachment:(id)arg1 usesSmallSize:(_Bool)arg2;	// IMP=0x000000000011674a
+ (_Bool)usesSmallSizeForAttachment:(id)arg1 withMetadata:(id)arg2 type:(unsigned long long)arg3 insideSystemPaper:(_Bool)arg4;	// IMP=0x00000000001165f2
+ (struct CGSize)defaultBrickSize;	// IMP=0x00000000001165dc
- (void).cxx_destruct;	// IMP=0x000000000011a6c7
@property(nonatomic) _Bool waitingForMetadata; // @synthesize waitingForMetadata=_waitingForMetadata;
@property(nonatomic) _Bool didSendResizeNotification; // @synthesize didSendResizeNotification=_didSendResizeNotification;
@property(nonatomic) float playbackProgress; // @synthesize playbackProgress=_playbackProgress;
@property(nonatomic) unsigned long long playerState; // @synthesize playerState=_playerState;
@property(retain, nonatomic) NSHashTable *audioPlayerClients; // @synthesize audioPlayerClients=_audioPlayerClients;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) LPLinkView *lpLinkView; // @synthesize lpLinkView=_lpLinkView;
@property(copy, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(nonatomic, getter=isInsideSystemPaper) _Bool insideSystemPaper; // @synthesize insideSystemPaper=_insideSystemPaper;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) __weak ICAddAttachmentsManagerAttachmentInfo *shareExtensionAttachmentInfo; // @synthesize shareExtensionAttachmentInfo=_shareExtensionAttachmentInfo;
@property(nonatomic) __weak ICAttachment *attachment; // @synthesize attachment=_attachment;
@property(retain, nonatomic) NSRegularExpression *highlightPatternRegex; // @synthesize highlightPatternRegex=_highlightPatternRegex;
@property(readonly, nonatomic) _Bool isMetadataComplete;
- (void)updateSearchResutBackgroundColorIfNecessary;	// IMP=0x000000000011a335
- (void)constrainViews;	// IMP=0x0000000000119e5f
- (void)notifyClientsAboutSizeChagesIfNecessary;	// IMP=0x0000000000119d10
- (void)adjustSizeIfNecessary;	// IMP=0x0000000000119b59
- (void)updateUIWithMetadata:(id)arg1;	// IMP=0x0000000000119a21
- (void)displayUnsupportedAttachmentPreview;	// IMP=0x00000000001197d9
- (void)displayScannedDocumentsPreview;	// IMP=0x000000000011976a
- (void)displayFilePreview;	// IMP=0x0000000000119634
- (void)displayGenericURLPreview;	// IMP=0x00000000001195c5
- (void)displayRemoteAttachmentPreview;	// IMP=0x00000000001193b3
- (void)displaySynapseAttachmentPreview;	// IMP=0x000000000011933b
- (void)updateAudioClientsProgress:(float)arg1;	// IMP=0x000000000011918c
- (void)updateAudioClientsState:(unsigned long long)arg1;	// IMP=0x0000000000118fe0
- (void)resetPlaybackProgressAndState;	// IMP=0x0000000000118fad
- (void)progressChangedNotification:(id)arg1;	// IMP=0x0000000000118e77
- (void)playbackStoppedNotification:(id)arg1;	// IMP=0x0000000000118e65
- (void)playbackPausedNotification:(id)arg1;	// IMP=0x0000000000118e4e
- (void)playbackStartedNotification:(id)arg1;	// IMP=0x0000000000118dc6
- (id)_linkView:(id)arg1 playerForAudio:(id)arg2;	// IMP=0x0000000000118d60
- (void)removeClient:(id)arg1;	// IMP=0x0000000000118cbe
- (void)addClient:(id)arg1;	// IMP=0x0000000000118a1b
- (void)reset;	// IMP=0x0000000000118990
- (void)pause;	// IMP=0x0000000000118905
@property(readonly, nonatomic) float progress;
- (void)play;	// IMP=0x00000000001187d1
@property(readonly, nonatomic) unsigned long long state;
- (void)applicationDidBecomeActive;	// IMP=0x00000000001186c9
- (void)didFailFetchingMetadataNotification:(id)arg1;	// IMP=0x000000000011855f
- (void)mediaDidLoadNotification:(id)arg1;	// IMP=0x00000000001184f8
- (void)initialAttachmentPreviewDidLoad:(id)arg1;	// IMP=0x00000000001184b1
- (void)attachmentPreviewImagesDidUpdateNotification:(id)arg1;	// IMP=0x00000000001182dc
- (void)attachmentDidLoadNotification:(id)arg1;	// IMP=0x00000000001182a5
- (id)_linkView:(id)arg1 contextMenuConfigurationForSuggestedConfiguration:(id)arg2;	// IMP=0x000000000011829d
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000011825c
- (id)typeDescriptionForAccessibility;	// IMP=0x0000000000117ee9
- (id)accessibilityValue;	// IMP=0x0000000000117e99
- (id)accessibilityLabel;	// IMP=0x0000000000117de6
- (id)accessibilityElements;	// IMP=0x0000000000117dde
- (_Bool)isAccessibilityElement;	// IMP=0x0000000000117dd6
- (id)quickLookTransitionView;	// IMP=0x0000000000117d86
@property(readonly, nonatomic) struct CGSize computedSize;
@property(readonly, nonatomic) double effectiveLayoutCornerRadius;
- (void)prepareForReuse;	// IMP=0x0000000000117a22
- (void)updateTitle;	// IMP=0x0000000000117701
- (void)reloadData;	// IMP=0x00000000001173f6
- (void)dealloc;	// IMP=0x00000000001169f4
- (id)initWithType:(unsigned long long)arg1;	// IMP=0x00000000001167dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
