//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLResourceDataStoreKey-Protocol.h>

@class NSString;

@interface PLResourceDataStoreKey : NSObject <PLResourceDataStoreKey>
{
}

+ (_Bool)refreshSandboxExtensionForURL:(id)arg1 libraryID:(id)arg2 assetUUID:(id)arg3 error:(id *)arg4;	// IMP=0x00000000002b47ed
+ (_Bool)refreshSandboxExtensionForURL:(id)arg1 assetID:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002b472e
- (id)uniformTypeIdentifier;	// IMP=0x00000000002b52c0
- (id)keyData;	// IMP=0x00000000002b525d
- (_Bool)isEqualToKey:(id)arg1;	// IMP=0x00000000002b51fa
- (id)initWithKeyStruct:(const void *)arg1;	// IMP=0x00000000002b518b
- (id)fileURLForAssetID:(id)arg1;	// IMP=0x00000000002b5128
- (id)descriptionForAssetID:(id)arg1;	// IMP=0x00000000002b50c5
- (id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2;	// IMP=0x00000000002b505d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

