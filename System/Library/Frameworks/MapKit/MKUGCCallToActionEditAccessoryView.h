//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <MapKit/MKActivityObserving-Protocol.h>

@class NSString, UIActivityIndicatorView, UIButton;
@protocol UGCCallToActionEditAccessoryViewDelegate;

__attribute__((visibility("hidden")))
@interface MKUGCCallToActionEditAccessoryView : UIView <MKActivityObserving>
{
    UIButton *_editButton;	// 8 = 0x8
    UIActivityIndicatorView *_spinner;	// 16 = 0x10
    id <UGCCallToActionEditAccessoryViewDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a6c24
@property(nonatomic) __weak id <UGCCallToActionEditAccessoryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_contentSizeChanged;	// IMP=0x00000000000a6b52
- (void)endAnimatingActivityIndicatorWithError:(id)arg1;	// IMP=0x00000000000a6b0c
- (void)beginAnimatingActivityIndicator;	// IMP=0x00000000000a6ac9
- (void)_editButtonPressed;	// IMP=0x00000000000a6a7d
- (void)_setupEditButton;	// IMP=0x00000000000a6465
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000a63b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

