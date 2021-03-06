//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MFMailSignatureController : NSObject
{
}

- (id)_getSignatureStringForSender:(id)arg1;	// IMP=0x00000000000cd3ad
- (void)finalizeSignatureForBodyField:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cd325
- (void)updateSignatureForSender:(id)arg1 bodyField:(id)arg2;	// IMP=0x00000000000cd269
- (void)removeSignatureForSender:(id)arg1 bodyField:(id)arg2;	// IMP=0x00000000000cd215
- (void)addSignatureForSender:(id)arg1 bodyField:(id)arg2 prepend:(_Bool)arg3;	// IMP=0x00000000000cd14b
- (_Bool)isDefaultSignatureForSender:(id)arg1;	// IMP=0x00000000000cd054
- (id)_signatureStringForSender:(id)arg1;	// IMP=0x00000000000ccf8e

@end

