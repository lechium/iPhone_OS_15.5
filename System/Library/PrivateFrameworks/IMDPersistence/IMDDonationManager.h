//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileManager;

@interface IMDDonationManager : NSObject
{
    NSFileManager *_fileManager;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000000005f27e
- (void).cxx_destruct;	// IMP=0x000000000005f6c1
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (void)copyGroupPhotoToExternalPathIfNecessary:(id)arg1 chatGUID:(id)arg2 attachmentFilepath:(id)arg3;	// IMP=0x000000000005f37c
- (void)dealloc;	// IMP=0x000000000005f339
- (id)init;	// IMP=0x000000000005f2d3

@end

