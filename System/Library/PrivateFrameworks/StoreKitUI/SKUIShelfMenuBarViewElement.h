//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIMenuBarViewElement-Protocol.h>
#import <StoreKitUI/_SKUIMenuBarViewElementConfigurationReloadDelegate-Protocol.h>

@class NSArray, NSString, SKUIMenuBarViewElementConfiguration;

__attribute__((visibility("hidden")))
@interface SKUIShelfMenuBarViewElement <_SKUIMenuBarViewElementConfigurationReloadDelegate, SKUIMenuBarViewElement>
{
    NSArray *_focusedViewElements;	// 8 = 0x8
    NSArray *_regularViewElements;	// 16 = 0x10
    SKUIMenuBarViewElementConfiguration *_configuration;	// 24 = 0x18
}

+ (id)supportedFeatures;	// IMP=0x000000000010ec52
- (void).cxx_destruct;	// IMP=0x000000000010f6b9
@property(retain, nonatomic) SKUIMenuBarViewElementConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)_reloadMenuItems;	// IMP=0x000000000010ef93
- (id)focusedViewElementForMenuItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000010ef76
- (id)regularViewElementForMenuItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000010ef59
- (void)_menuBarViewElementConfigurationRequestsReload:(id)arg1;	// IMP=0x000000000010ef38
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000010edee
- (unsigned long long)elementType;	// IMP=0x000000000010ede3
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x000000000010ed38
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x000000000010ea8a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

