//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSData, NSDate, NSUUID;

@protocol MSPRemoteModelAccess <NSObject>
- (void)noteMapstoolChangedFavoritesOnDisk;
- (void)noteMapstoolChangedHistoryOnDisk;
- (void)testByNotingHistoryChangedOnDisk;
- (void)eraseHistorySerializedRepresentationWithCompletion:(void (^)(NSError *))arg1;
- (void)fetchLastKnownHistoryOperationIdentifier:(void (^)(NSUUID *))arg1;
- (void)commitHistorySerializedRepresentation:(NSData *)arg1 reapingTombstones:(_Bool)arg2 earliestKnownSyncDate:(NSDate *)arg3 operationIdentifier:(NSUUID *)arg4 completion:(void (^)(NSError *))arg5;
- (void)fetchHistorySerializedRepresentationWithCompletion:(void (^)(NSData *, NSError *))arg1;
- (void)eraseFavoritesSerializedRepresentationWithCompletion:(void (^)(NSError *))arg1;
- (void)fetchLastKnownFavoritesOperationIdentifier:(void (^)(NSUUID *))arg1;
- (void)commitFavoritesSerializedRepresentation:(NSData *)arg1 reapingTombstones:(_Bool)arg2 operationIdentifier:(NSUUID *)arg3 completion:(void (^)(NSError *))arg4;
- (void)fetchFavoritesSerializedRepresentationWithCompletion:(void (^)(NSData *, NSError *))arg1;
- (void)eraseCollectionsSerializedRepresentationWithCompletion:(void (^)(NSError *))arg1;
- (void)fetchLastKnownCollectionsOperationIdentifier:(void (^)(NSUUID *))arg1;
- (void)commitCollectionsSerializedRepresentation:(NSData *)arg1 operationIdentifier:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (void)fetchCollectionsSerializedRepresentationWithCompletion:(void (^)(NSData *, NSError *))arg1;
- (void)erasePinnedPlacesSerializedRepresentationWithCompletion:(void (^)(NSError *))arg1;
- (void)fetchLastKnownPinnedPlacesOperationIdentifier:(void (^)(NSUUID *))arg1;
- (void)commitPinnedPlacesSerializedRepresentation:(NSData *)arg1 operationIdentifier:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (void)fetchPinnedPlacesSerializedRepresentationWithCompletion:(void (^)(NSData *, NSError *))arg1;
@end
