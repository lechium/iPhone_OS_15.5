//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MessageSecurity/MSCMSAttributeCoder-Protocol.h>

@class NSData;

@interface MSCMSAppleHashAgilityAttribute : NSObject <MSCMSAttributeCoder>
{
    NSData *_hashAgilityValue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000dec6
@property(readonly, retain) NSData *hashAgilityValue; // @synthesize hashAgilityValue=_hashAgilityValue;
- (id)encodeAttributeWithError:(id *)arg1;	// IMP=0x000000000000dc6d
- (id)initWithHashAgilityValue:(id)arg1;	// IMP=0x000000000000dc02
- (id)initWithAttribute:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000dab0

@end

