//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/DAFolderChangeConsumer-Protocol.h>

@class MFConditionLock, MFDAFolderChangeResult;

@interface MFDAFolderChangeConsumer : NSObject <DAFolderChangeConsumer>
{
    MFConditionLock *_conditionLock;	// 8 = 0x8
    MFDAFolderChangeResult *_result;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000ca42c
- (id)waitForResult;	// IMP=0x00000000000ca3c4
- (void)folderChange:(id)arg1 finishedWithStatus:(long long)arg2 error:(id)arg3;	// IMP=0x00000000000ca1aa
- (id)init;	// IMP=0x00000000000ca117

@end

