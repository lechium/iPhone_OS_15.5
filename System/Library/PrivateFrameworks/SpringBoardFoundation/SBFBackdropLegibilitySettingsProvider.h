//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/SBFLegibilitySettingsProvider-Protocol.h>
#import <SpringBoardFoundation/_UIBackdropViewObserver-Protocol.h>

@class NSString, _UIBackdropView, _UILegibilitySettings;
@protocol SBFLegibilitySettingsProviderDelegate;

@interface SBFBackdropLegibilitySettingsProvider : NSObject <_UIBackdropViewObserver, SBFLegibilitySettingsProvider>
{
    _UIBackdropView *_backdropView;	// 8 = 0x8
    _UILegibilitySettings *_legibilitySettings;	// 16 = 0x10
    id <SBFLegibilitySettingsProviderDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000052247
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) __weak id <SBFLegibilitySettingsProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)backdropViewDidChange:(id)arg1;	// IMP=0x0000000000052149
- (void)dealloc;	// IMP=0x0000000000052074
- (id)initWithBackdropView:(id)arg1;	// IMP=0x0000000000051fec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

