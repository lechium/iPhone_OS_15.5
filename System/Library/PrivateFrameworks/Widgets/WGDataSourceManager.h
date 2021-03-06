//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Widgets/_WGParentDataSourceManager-Protocol.h>

@class NSMutableDictionary, NSString, WGWidgetDataSourceManager;

@interface WGDataSourceManager : NSObject <_WGParentDataSourceManager>
{
    _Bool _didBegin;	// 8 = 0x8
    NSMutableDictionary *_identifiersToWidgetChangeHandlers;	// 16 = 0x10
    WGWidgetDataSourceManager *_widgetDataSourceManager;	// 24 = 0x18
}

+ (void)requestSharedDataSourceManager:(CDUnknownBlockType)arg1;	// IMP=0x000000000002e84c
+ (id)__sharedInstance;	// IMP=0x000000000002e7f7
- (void).cxx_destruct;	// IMP=0x000000000002edbe
- (void)childDataSourceManagerDataSourcesDidChange:(id)arg1;	// IMP=0x000000000002ec73
- (id)discoverAvailableWidgetsWithError:(id *)arg1;	// IMP=0x000000000002ec5a
- (void)removeChangeHandlersWithIdentifier:(id)arg1;	// IMP=0x000000000002ec3d
- (void)addWidgetDataSourceChangeHandler:(CDUnknownBlockType)arg1 forIdentifier:(id)arg2;	// IMP=0x000000000002eb72
- (void)_stop:(CDUnknownBlockType)arg1;	// IMP=0x000000000002eb60
- (void)_start:(CDUnknownBlockType)arg1;	// IMP=0x000000000002eb4e
- (void)_begin:(CDUnknownBlockType)arg1;	// IMP=0x000000000002e93d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

