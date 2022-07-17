//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoverSheet/SBFActionHandling-Protocol.h>

@class NSString;
@protocol CSItemDestination;

@interface CSAdjunctListActionManager : NSObject <SBFActionHandling>
{
    id <CSItemDestination> _itemDestination;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000100e17
@property(retain, nonatomic) id <CSItemDestination> itemDestination; // @synthesize itemDestination=_itemDestination;
- (_Bool)_handleLockScreenContentAction:(id)arg1;	// IMP=0x0000000000100b10
- (_Bool)_actionIsInRelevantSlot:(id)arg1;	// IMP=0x0000000000100ab7
- (_Bool)handleAction:(id)arg1 forProvider:(id)arg2;	// IMP=0x0000000000100a16
- (_Bool)handlesActionWithClass:(Class)arg1;	// IMP=0x00000000001009e8
- (id)initWithItemDestination:(id)arg1;	// IMP=0x000000000010097d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
