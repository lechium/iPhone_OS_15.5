//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFIncrementalStateControlItem;

@interface HUQuickControlIncrementalStateViewController
{
}

+ (Class)controlItemClass;	// IMP=0x0000000000092048
- (id)controlToViewValueTransformer;	// IMP=0x0000000000092417
- (id)createViewProfile;	// IMP=0x000000000009224c
- (id)createInteractionCoordinator;	// IMP=0x00000000000921e1
- (id)_createControlView;	// IMP=0x000000000009210b
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000092059

// Remaining properties
@property(readonly, nonatomic) HFIncrementalStateControlItem *controlItem; // @dynamic controlItem;

@end
