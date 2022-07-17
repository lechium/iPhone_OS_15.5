//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlayUIServices/BSInvalidatable-Protocol.h>
#import <CarPlayUIServices/CRSUIDashboardWidgetWindowClient-Protocol.h>

@class NSArray, NSString, NSXPCConnection, UIColor;

@interface CRSUIDashboardWidgetWindow <CRSUIDashboardWidgetWindowClient, BSInvalidatable>
{
    _Bool _useSystemPrimaryFocusColor;	// 8 = 0x8
    NSArray *_widgetSizes;	// 16 = 0x10
    NSXPCConnection *_dashboardWindowServiceConnection;	// 24 = 0x18
    NSArray *_focusableItems;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000a1cd
@property(nonatomic) _Bool useSystemPrimaryFocusColor; // @synthesize useSystemPrimaryFocusColor=_useSystemPrimaryFocusColor;
@property(retain, nonatomic) NSArray *focusableItems; // @synthesize focusableItems=_focusableItems;
@property(retain, nonatomic) NSXPCConnection *dashboardWindowServiceConnection; // @synthesize dashboardWindowServiceConnection=_dashboardWindowServiceConnection;
@property(retain, nonatomic) NSArray *widgetSizes; // @synthesize widgetSizes=_widgetSizes;
- (void)_invalidateConnection;	// IMP=0x000000000000a0e4
- (void)_invalidateCurrentFocusableItems;	// IMP=0x0000000000009ffd
- (id)_clientFocusableItemForItem:(id)arg1;	// IMP=0x0000000000009e35
- (id)_focusableItemForClientItem:(id)arg1;	// IMP=0x0000000000009ce4
- (void)hostSetUseSystemPrimaryFocusColor:(_Bool)arg1;	// IMP=0x0000000000009c04
- (void)hostSetWidgetSizes:(id)arg1;	// IMP=0x0000000000009b4a
- (void)hostSelectedFocusableItem:(id)arg1;	// IMP=0x0000000000009a60
- (void)hostFocusableItem:(id)arg1 pressed:(_Bool)arg2;	// IMP=0x000000000000996c
- (void)hostFocusableItem:(id)arg1 focused:(_Bool)arg2;	// IMP=0x0000000000009878
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000000962e
- (void)_windowDidCreateContext:(id)arg1;	// IMP=0x0000000000009589
- (void)setContentReady;	// IMP=0x000000000000949a
- (void)setNeedsLargeSize:(_Bool)arg1 animationSettings:(id)arg2;	// IMP=0x00000000000093df
@property(readonly, nonatomic) UIColor *focusHighlightColor;
- (void)setFocusableViews:(id)arg1;	// IMP=0x0000000000009119
- (void)dealloc;	// IMP=0x00000000000090db
- (void)invalidate;	// IMP=0x000000000000906f
- (id)initWithWindowScene:(id)arg1;	// IMP=0x0000000000008b54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
