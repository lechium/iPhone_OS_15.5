//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/JXHTTPRequestBody-Protocol.h>

@class NSString;

@interface JXHTTPFileBody : NSObject <JXHTTPRequestBody>
{
    NSString *_filePath;	// 8 = 0x8
    NSString *_httpContentType;	// 16 = 0x10
}

+ (id)withFilePath:(id)arg1;	// IMP=0x000000000018de54
+ (id)withFilePath:(id)arg1 contentType:(id)arg2;	// IMP=0x000000000018dde8
- (void).cxx_destruct;	// IMP=0x000000000018ddc0
@property(copy, nonatomic) NSString *httpContentType; // @synthesize httpContentType=_httpContentType;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (long long)httpContentLength;	// IMP=0x000000000018dbb6
- (id)httpInputStream;	// IMP=0x000000000018db4d
- (id)initWithFilePath:(id)arg1 contentType:(id)arg2;	// IMP=0x000000000018daaf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

