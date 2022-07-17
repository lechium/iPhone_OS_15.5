//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface JXHTTPMultipartPart : NSObject
{
    int _multipartType;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSData *_preData;	// 24 = 0x18
    NSData *_contentData;	// 32 = 0x20
    NSData *_postData;	// 40 = 0x28
}

+ (id)withMultipartType:(int)arg1 key:(id)arg2 data:(id)arg3 contentType:(id)arg4 fileName:(id)arg5 boundary:(id)arg6;	// IMP=0x00000000002804f5
- (void).cxx_destruct;	// IMP=0x00000000002804b7
@property(retain, nonatomic) NSData *postData; // @synthesize postData=_postData;
@property(retain, nonatomic) NSData *contentData; // @synthesize contentData=_contentData;
@property(retain, nonatomic) NSData *preData; // @synthesize preData=_preData;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) int multipartType; // @synthesize multipartType=_multipartType;
- (unsigned long long)loadMutableData:(id)arg1 withDataInRange:(struct _NSRange)arg2;	// IMP=0x000000000027fee3
- (long long)contentLength;	// IMP=0x000000000027fcdd
- (long long)dataLength;	// IMP=0x000000000027fc3e
- (id)filePath;	// IMP=0x000000000027fbbb

@end
