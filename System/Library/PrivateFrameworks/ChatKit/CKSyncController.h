//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CKSyncController : NSObject
{
    int _restoreStateChangedToken;	// 8 = 0x8
    int _attachmentRestoredToken;	// 12 = 0xc
    _Bool _restoring;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000000003e7fdf
@property(readonly, nonatomic, getter=isRestoring) _Bool restoring; // @synthesize restoring=_restoring;
- (void)postAttachmentRestored;	// IMP=0x00000000003e8090
- (void)attachmentRestored;	// IMP=0x00000000003e803a
- (void)prioritizeAttachmentAtPath:(id)arg1;	// IMP=0x00000000003e8034

@end

