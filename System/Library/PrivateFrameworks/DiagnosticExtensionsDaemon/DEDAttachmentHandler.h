//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_os_log;

@interface DEDAttachmentHandler : NSObject
{
    _Bool _compressOnAttach;	// 8 = 0x8
    NSObject<OS_os_log> *_log;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000c714
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property _Bool compressOnAttach; // @synthesize compressOnAttach=_compressOnAttach;
- (id)directoryForBugSessionWithIdentifier:(id)arg1 extension:(id)arg2 rootDirectory:(id)arg3;	// IMP=0x000000000000c6c5
- (id)directoryForBugSessionWithIdentifier:(id)arg1 extension:(id)arg2 rootDirectory:(id)arg3 createIfNeeded:(_Bool)arg4;	// IMP=0x000000000000c307
- (id)directoryForBugSessionWithIdentifier:(id)arg1 rootDirectory:(id)arg2 createIfNeeded:(_Bool)arg3;	// IMP=0x000000000000bfe2
- (id)dedDirectory;	// IMP=0x000000000000bf8b
- (id)identifierForAdoptingFile:(id)arg1;	// IMP=0x000000000000bf2a
- (unsigned long long)directorySizeForBugSessionIdentifier:(id)arg1;	// IMP=0x000000000000be34
- (void)removeDirectoryForBugSessionIdentifier:(id)arg1;	// IMP=0x000000000000bcb1
- (id)directoryForBugSessionIdentifier:(id)arg1;	// IMP=0x000000000000bbf1
- (id)_createEmptyMessageFileForDE:(id)arg1 extensionName:(id)arg2 withSessionIdentifier:(id)arg3 device:(id)arg4 withRootDir:(id)arg5;	// IMP=0x000000000000b904
- (id)createEmptyMessageFileForDE:(id)arg1 extensionName:(id)arg2 withSessionIdentifier:(id)arg3 device:(id)arg4;	// IMP=0x000000000000b801
- (id)collectedGroupsWithSessionIdentifier:(id)arg1 matchingExtensions:(id)arg2;	// IMP=0x000000000000af0b
- (void)removeDEFiles:(id)arg1 withSessionIdentifier:(id)arg2;	// IMP=0x000000000000ad98
- (id)_processAttachments:(id)arg1 withSessionIdentifier:(id)arg2 extension:(id)arg3 rootDir:(id)arg4;	// IMP=0x000000000000a8a5
- (id)processAttachments:(id)arg1 withSessionIdentifier:(id)arg2 extension:(id)arg3;	// IMP=0x000000000000a7bd
- (id)init;	// IMP=0x000000000000a72e

@end

