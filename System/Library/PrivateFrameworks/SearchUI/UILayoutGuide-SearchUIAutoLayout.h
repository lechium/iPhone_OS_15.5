//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILayoutGuide.h>

#import <SearchUI/SearchUIAutoLayoutItem-Protocol.h>

@class NSString;

@interface UILayoutGuide (SearchUIAutoLayout) <SearchUIAutoLayoutItem>
- (_Bool)searchui_isContainedByItem:(id)arg1;	// IMP=0x000000000004fc7a
- (id)searchui_containingView;	// IMP=0x000000000004fc68
- (id)searchui_view;	// IMP=0x000000000004fc60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
