//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SSSDebugAssetManager : NSObject
{
}

+ (id)newTestScreenshot;	// IMP=0x00200000000287c7
- (void)removeEntryWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0020000000028990
- (void)saveImageToTemporaryLocation:(id)arg1 withName:(id)arg2 imageDescription:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000002897e
- (void)updateImageData:(id)arg1 withModificationData:(id)arg2 forEntryWithIdentifier:(id)arg3 registrationOptions:(id)arg4 imageDescription:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000028968
- (void)imageForPreviouslyRegisteredIdentifier:(id)arg1 imageHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000028906
- (void)registerEntryWithImage:(id)arg1 options:(id)arg2 identifierHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000288ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

