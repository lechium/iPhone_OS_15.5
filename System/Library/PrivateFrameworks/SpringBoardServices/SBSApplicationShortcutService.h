//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SBSApplicationShortcutService
{
}

- (void)updateDynamicApplicationShortcutItems:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x000000000002dec5
- (void)fetchDynamicApplicationShortcutItemsForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002dde8
- (void)updateDynamicApplicationShortcutItems:(id)arg1;	// IMP=0x000000000002ddd4
- (void)fetchDynamicApplicationShortcutItemsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002dcff
- (void)updateDynamicApplicationShortcutItems:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000002dc79
- (id)applicationShortcutItemsOfTypes:(unsigned long long)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000002dbf0
- (void)fetchApplicationShortcutItemsOfTypes:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002da14

@end

