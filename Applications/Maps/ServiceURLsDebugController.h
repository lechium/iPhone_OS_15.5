//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;
@protocol MapsDebugViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface ServiceURLsDebugController
{
    NSArray *_serviceURLs;	// 8 = 0x8
    id <MapsDebugViewControllerDelegate> _delegate;	// 16 = 0x10
}

+ (id)navigationDestinationTitle;	// IMP=0x00200000005761b4
- (void).cxx_destruct;	// IMP=0x0020000000576da6
- (void)setDelegate:(id)arg1;	// IMP=0x0010000000576d92
- (id)delegate;	// IMP=0x0010000000576d79
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000576993
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000057650f
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x0010000000576502
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00100000005764a4
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000576450
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000576433
- (id)title;	// IMP=0x0010000000576426
- (void)dealloc;	// IMP=0x00100000005763f0
- (id)init;	// IMP=0x00100000005761fe
- (void)valueChangedForGEOConfigKey:(CDStruct_065526f1)arg1;	// IMP=0x00100000005761c1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

