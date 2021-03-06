//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServicesCore/PLAssetsdPhotoKitChangesRequestClient-Protocol.h>

@interface PLAssetsdPhotoKitClient <PLAssetsdPhotoKitChangesRequestClient>
{
}

+ (_Bool)sendChangesRequest:(id)arg1 usingProxyFactory:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000019604
+ (void)sendChangesRequest:(id)arg1 usingProxyFactory:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000001926f
+ (void)setInTransactionProxy:(_Bool)arg1 queue:(id)arg2;	// IMP=0x0000000000019249
+ (_Bool)inTransactionProxy;	// IMP=0x0000000000019231
- (id)getUUIDsForCloudIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000018c6f
- (_Bool)sendChangesRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000018beb
- (void)sendChangesRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000018b5e
- (id)clientName;	// IMP=0x0000000000018b51

@end

