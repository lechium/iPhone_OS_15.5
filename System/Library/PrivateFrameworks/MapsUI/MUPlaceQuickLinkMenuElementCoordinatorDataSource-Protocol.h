//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/NSObject-Protocol.h>

@class GEOAppStoreAppClip, GEOQuickLink, MUPlaceQuickLinkMenuElementCoordinator;

@protocol MUPlaceQuickLinkMenuElementCoordinatorDataSource <NSObject>
- (void)quickLinkMenuElementCoordinator:(MUPlaceQuickLinkMenuElementCoordinator *)arg1 didSelectAppClip:(GEOAppStoreAppClip *)arg2;
- (void)quickLinkMenuElementCoordinator:(MUPlaceQuickLinkMenuElementCoordinator *)arg1 didSelectQuickLink:(GEOQuickLink *)arg2;
- (void)fetchQuickLinksForMenuElementCoordinator:(MUPlaceQuickLinkMenuElementCoordinator *)arg1 completion:(void (^)(NSArray *))arg2;
- (_Bool)quickLinkMenuElementCoordinatorShouldLoadQuickLinks:(MUPlaceQuickLinkMenuElementCoordinator *)arg1;
@end

