//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIHoverGestureRecognizer, WBSDispatchSourceTimer;
@protocol SFTabHoverPreviewControllerDelegate, SFTabHoverPreviewItem;

@interface SFTabHoverPreviewController : NSObject
{
    id <SFTabHoverPreviewItem> _itemShowingPreview;	// 8 = 0x8
    WBSDispatchSourceTimer *_tabHoverPreviewShowTimer;	// 16 = 0x10
    WBSDispatchSourceTimer *_disableHoverTimer;	// 24 = 0x18
    double _lastTimeHoverPreviewWasDismissed;	// 32 = 0x20
    _Bool _enabled;	// 40 = 0x28
    id <SFTabHoverPreviewControllerDelegate> _delegate;	// 48 = 0x30
    UIHoverGestureRecognizer *_hoverRecognizer;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000008ec30
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) UIHoverGestureRecognizer *hoverRecognizer; // @synthesize hoverRecognizer=_hoverRecognizer;
@property __weak id <SFTabHoverPreviewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_temporarilyDisableHover;	// IMP=0x000000000008ea7c
- (void)_cancelOrCloseHoverPreviewWithGracePeriod:(_Bool)arg1;	// IMP=0x000000000008e9e9
- (void)_showHoverPreviewForItem:(id)arg1;	// IMP=0x000000000008e94c
- (void)setNeedsSnapshotUpdate;	// IMP=0x000000000008e916
- (void)cancel;	// IMP=0x000000000008e902
- (void)dismiss;	// IMP=0x000000000008e8d2
- (void)updateWithItem:(id)arg1;	// IMP=0x000000000008e725
- (id)init;	// IMP=0x000000000008e6b8

@end
