//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIDragItem.h>

@class NSURL, WBTabGroup, WebBookmark, _SFTabStateData;

@interface UIDragItem (SafariServicesExtras)
+ (id)_sf_itemWithTabGroup:(id)arg1;	// IMP=0x000000000015ed10
+ (id)_sf_itemWithTabStateData:(id)arg1 userActivity:(id)arg2;	// IMP=0x000000000015eb96
+ (void)_sf_loadObjectsFromDragItems:(id)arg1 usingLocalObjectLoader:(CDUnknownFunctionPointerType)arg2 objectLoader:(CDUnknownFunctionPointerType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000015e4d0
@property(readonly, nonatomic) WBTabGroup *_sf_localTabGroup;
@property(readonly, nonatomic) _SFTabStateData *_sf_tabStateData;
@property(readonly, nonatomic) NSURL *_sf_localURL;
@property(readonly, nonatomic) WebBookmark *_sf_localBookmark;
- (id)_sf_initWithSiriSuggestion:(id)arg1;	// IMP=0x000000000015f02b
- (id)_sf_initWithBookmark:(id)arg1;	// IMP=0x000000000015ee00
@end
