//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMTransferEncryptionController : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x0000000000008158
- (void)decryptURL:(id)arg1 key:(id)arg2 outputFileName:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000008257
- (void)encryptURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000081ad

@end
