//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

#import <EventKitUI/EKUIManagedViewController-Protocol.h>

@class NSString;

@interface EKUIManagedNavigationController : UINavigationController <EKUIManagedViewController>
{
}

- (_Bool)canBeDirectlyManaged;	// IMP=0x00000000001550a0
- (_Bool)canManagePresentationStyle;	// IMP=0x0000000000155098
- (_Bool)wantsManagement;	// IMP=0x0000000000155000

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

