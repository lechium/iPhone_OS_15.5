//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

#import <DocumentCamera/DCUnsavedDataDelegate-Protocol.h>

@class NSString;

@interface ICDocCamExtractedDocumentNavigationController : UINavigationController <DCUnsavedDataDelegate>
{
}

- (_Bool)_canShowWhileLocked;	// IMP=0x000000000001bf2a
- (void)prepareForDismissal;	// IMP=0x000000000001be90
- (_Bool)shouldAutorotate;	// IMP=0x000000000001be88
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000001be7d
- (void)didReceiveMemoryWarning;	// IMP=0x000000000001be4e
- (id)initWithDelegate:(id)arg1 documentInfoCollection:(id)arg2 imageCache:(id)arg3 currentIndex:(long long)arg4 mode:(int)arg5;	// IMP=0x000000000001bd60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
