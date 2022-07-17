//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PointerUIServices/NSObject-Protocol.h>

@class NSArray, NSNumber, PSPointerHoverRegion, PSPointerPortalSourceCollection;
@protocol __NSNumber__, __PSMatchMoveSource__;

@protocol PSPointerDefaultServiceClientToServerInterface <NSObject>
- (oneway void)setSystemCursorInteractionContextID:(NSNumber *)arg1;
- (oneway void)setPointerPersistentlyVisibleForReasons:(NSArray<__NSNumber__> *)arg1;
- (oneway void)setPointerPersistentlyHiddenForReasons:(NSArray<__NSNumber__> *)arg1;
- (oneway void)autohidePointerForReason:(NSNumber *)arg1;
- (oneway void)setActiveHoverRegion:(PSPointerHoverRegion *)arg1 transitionCompletion:(void (^)(NSError *))arg2;
- (oneway void)invalidateContentMatchMoveSources:(NSArray<__PSMatchMoveSource__> *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)createContentMatchMoveSourcesWithCountValue:(NSNumber *)arg1 completion:(void (^)(NSArray<__PSMatchMoveSource__> *, NSError *))arg2;
- (oneway void)invalidatePointerPortalSourceCollection:(PSPointerPortalSourceCollection *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)createPointerPortalSourceCollectionWithCompletion:(void (^)(PSPointerPortalSourceCollection *, NSError *))arg1;
@end
