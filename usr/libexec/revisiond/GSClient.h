//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface GSClient : NSObject
{
    NSMutableDictionary *_storageVolPaths;	// 8 = 0x8
    NSMutableSet *_stagingPrefixes;	// 16 = 0x10
    struct GSCredential _creds;	// 24 = 0x18
    id _openHandleTx;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000001765b
- (void)removeAdditionsInStorage:(long long)arg1 removalSpec:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000016a30
- (void)createAdditionInStorage:(long long)arg1 stagedFileDescriptor:(id)arg2 creationInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000161e2
- (void)setAdditionNameSpaceInStorage:(long long)arg1 nameSpace:(id)arg2 additionName:(id)arg3 value:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000015bc6
- (void)setAdditionDisplayNameInStorage:(long long)arg1 nameSpace:(id)arg2 additionName:(id)arg3 value:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00100000000154f4
- (void)mergeAdditionInfoValueInStorage:(long long)arg1 nameSpace:(id)arg2 additionName:(id)arg3 value:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000014c65
- (void)setAdditionOptionsInStorage:(long long)arg1 nameSpace:(id)arg2 additionName:(id)arg3 value:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00100000000144b4
- (void)checkItemAtURLValidInsidePermanentStorage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014391
- (void)listAdditionsOfStorage:(long long)arg1 nameSpace:(id)arg2 withOptions:(unsigned long long)arg3 withoutOptions:(unsigned long long)arg4 andEnumerationState:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000139b1
- (void)getAdditionsInStorage:(long long)arg1 andNameSpace:(id)arg2 named:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000013124
- (void)getAdditionInStorage:(long long)arg1 andNameSpace:(id)arg2 named:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000012a77
- (oneway void)permanentStorageClose:(unsigned long long)arg1;	// IMP=0x0010000000012991
- (void)permanentStorageOpenForHandle:(id)arg1 withRemoteID:(unsigned long long)arg2 andDocumentID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000012221
- (void)permanentStorageIDForHandle:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011fdb
- (void)permanentStoragePrefixForHandle:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011bf1
- (oneway void)stagingPrefixRelinquish:(id)arg1;	// IMP=0x0010000000011b4f
- (void)_stagingPrefixCleanup:(id)arg1;	// IMP=0x00100000000119c5
- (void)stagingPrefixForDevice:(int)arg1 volumeUUID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000011314
- (void)isPermanentStorageSupportedForHandle:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011065
- (void)hintDocIDCreationForFileHandle:(id)arg1;	// IMP=0x0010000000010efd
- (void)getFileIdForDocumentId:(unsigned long long)arg1 onDevice:(int)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000010d59
- (void)requestFreeSpace:(unsigned long long)arg1 forVolume:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001087a
- (id)_getCachedVolPath:(unsigned long long)arg1 error:(out id *)arg2;	// IMP=0x0010000000010747
- (id)description;	// IMP=0x001000000001071f
- (void)dealloc;	// IMP=0x00100000000106e1
- (void)invalidate;	// IMP=0x00100000000104de
- (id)initWithConnection:(id)arg1;	// IMP=0x00100000000103be

@end

