//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PLAssetsdClient;

@interface PLLimitedLibraryPickerDelegate : NSObject
{
    CDUnknownBlockType _dismissalBlock;	// 8 = 0x8
    CDUnknownBlockType _finishedPickingBlock;	// 16 = 0x10
    PLAssetsdClient *_assetsdClient;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002d77ac
@property(retain, nonatomic) PLAssetsdClient *assetsdClient; // @synthesize assetsdClient=_assetsdClient;
@property(copy, nonatomic) CDUnknownBlockType finishedPickingBlock; // @synthesize finishedPickingBlock=_finishedPickingBlock;
@property(copy, nonatomic) CDUnknownBlockType dismissalBlock; // @synthesize dismissalBlock=_dismissalBlock;
- (void)imagePickerControllerDidCancel:(id)arg1;	// IMP=0x00000000002d763d
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;	// IMP=0x00000000002d74f9
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;	// IMP=0x00000000002d7387
- (void)dismissImagePickerController:(id)arg1;	// IMP=0x00000000002d72c5
- (void)_dismissImagePickerController:(id)arg1;	// IMP=0x00000000002d7271

@end

