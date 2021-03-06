//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MessageSecurity/MSCMSAttributeCoder-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface MSCMSMessageDigestAttribute : NSObject <MSCMSAttributeCoder>
{
    NSData *_messageDigest;	// 8 = 0x8
}

+ (id)messageDigestAttributeWithDigest:(id)arg1;	// IMP=0x000000000000ae71
- (void).cxx_destruct;	// IMP=0x000000000000aedd
@property(retain) NSData *messageDigest; // @synthesize messageDigest=_messageDigest;
- (id)initWithDigest:(id)arg1;	// IMP=0x000000000000ac8c
- (id)encodeAttributeWithError:(id *)arg1;	// IMP=0x000000000000aa47
- (id)initWithAttribute:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a782

@end

