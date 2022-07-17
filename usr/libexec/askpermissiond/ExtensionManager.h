//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ExtensionManager : NSObject
{
}

+ (id)sharedExtensionManager;	// IMP=0x004000000000e5d4
- (_Bool)_requestExtension:(id)arg1 withItem:(id)arg2 error:(id *)arg3;	// IMP=0x004000000000ee70
- (id)_extensionPassingTest:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x001000000000eb28
- (id)_extensionToNotifyWithResult:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000e9c7
- (id)_extensionToCheckDownloadQueueWithContentType:(long long)arg1 error:(id *)arg2;	// IMP=0x001000000000e8ab
- (_Bool)notifyWithResult:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000e746
- (_Bool)checkDownloadQueueWithContentType:(long long)arg1 error:(id *)arg2;	// IMP=0x001000000000e629

@end
