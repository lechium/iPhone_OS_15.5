//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreKit/ASOOverlay-Protocol.h>
#import <StoreKit/ASOOverlayDelegate-Protocol.h>

@class NSString, SKOverlayConfiguration;
@protocol ASOOverlayConfiguration, ASOOverlayDelegate, SKOverlayDelegate;

@interface SKOverlay : NSObject <ASOOverlay, ASOOverlayDelegate>
{
    id <SKOverlayDelegate> _delegate;	// 8 = 0x8
    SKOverlayConfiguration *_configuration;	// 16 = 0x10
}

+ (id)unsupportedPlatformErrorWithAPIName:(id)arg1;	// IMP=0x000000000003aa44
+ (void)dismissOverlayInScene:(id)arg1;	// IMP=0x000000000003a1ab
- (void).cxx_destruct;	// IMP=0x000000000003ab7c
@property(readonly, copy) SKOverlayConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <SKOverlayDelegate> delegate; // @synthesize delegate=_delegate;
- (id)tranformToPublicError:(id)arg1;	// IMP=0x000000000003a714
- (void)storeOverlay:(id)arg1 didFailToLoadWithError:(id)arg2;	// IMP=0x000000000003a634
- (void)storeOverlay:(id)arg1 didFinishDismissal:(id)arg2;	// IMP=0x000000000003a560
- (void)storeOverlay:(id)arg1 willStartDismissal:(id)arg2;	// IMP=0x000000000003a48c
- (void)storeOverlay:(id)arg1 didFinishPresentation:(id)arg2;	// IMP=0x000000000003a3b8
- (void)storeOverlay:(id)arg1 willStartPresentation:(id)arg2;	// IMP=0x000000000003a2e4
@property(readonly, copy) id <ASOOverlayConfiguration> overlayConfiguration;
@property(readonly, nonatomic) __weak id <ASOOverlayDelegate> overlayDelegate;
- (_Bool)isReadyToPresentInScene:(id)arg1;	// IMP=0x000000000003a1eb
- (void)presentInScene:(id)arg1;	// IMP=0x000000000003a0e7
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000000003a07c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

