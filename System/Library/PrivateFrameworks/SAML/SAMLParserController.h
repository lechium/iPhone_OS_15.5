//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface SAMLParserController : NSObject
{
    NSData *_schemaData;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x0000000000007874
+ (id)sharedInstance;	// IMP=0x00000000000077e3
- (void).cxx_destruct;	// IMP=0x00000000000083b3
@property(retain, nonatomic) NSData *schemaData; // @synthesize schemaData=_schemaData;
- (id)dataFromString:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000833b
- (id)parseCachedResponse:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000008299
- (id)parseResponse:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000081e0
- (id)newLogoutRequest:(id *)arg1;	// IMP=0x0000000000008143
- (id)newAuthZQuery:(id)arg1 channelId:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000804c
- (id)newAuthNRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000007f82
- (id)newAttributeQuery:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000007eb8
- (id)schema;	// IMP=0x0000000000007eaa
- (id)init;	// IMP=0x0000000000007dd7

@end
