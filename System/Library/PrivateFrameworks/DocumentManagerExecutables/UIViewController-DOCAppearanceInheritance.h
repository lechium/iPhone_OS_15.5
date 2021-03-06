//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <DocumentManagerExecutables/DOCAppearanceCustomization-Protocol.h>

@class DOCAppearance, NSString;

@interface UIViewController (DOCAppearanceInheritance) <DOCAppearanceCustomization>
+ (void)load;	// IMP=0x000000000000e30f
- (void)effectiveAppearanceDidChange:(id)arg1;	// IMP=0x000000000000e5de
@property(readonly) DOCAppearance *effectiveAppearance;
- (void)_notifyAppearanceChange:(id)arg1;	// IMP=0x000000000000e41f
- (void)setAppearance:(id)arg1;	// IMP=0x000000000000e3bf
- (id)_appearance;	// IMP=0x000000000000e3ae
- (void)doc_viewDidLoad;	// IMP=0x000000000000e32f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

