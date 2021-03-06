//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ChatKit/CKBrowserSwitcherFooterViewDataSource-Protocol.h>

@class NSString;

@interface CKBrowserSwitcherFooterViewDataSource : NSObject <CKBrowserSwitcherFooterViewDataSource>
{
}

- (id)pluginManager;	// IMP=0x00000000002ea5fe
- (id)switcherView:(id)arg1 indexPathOfModelWithIdentifier:(id)arg2;	// IMP=0x00000000002ea518
- (id)switcherView:(id)arg1 modelAtIndexPath:(id)arg2 type:(long long *)arg3;	// IMP=0x00000000002ea368
- (unsigned long long)numberOfPluginsInSwitcherView:(id)arg1 forSection:(unsigned long long)arg2;	// IMP=0x00000000002ea28e
- (id)init;	// IMP=0x00000000002ea211

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

