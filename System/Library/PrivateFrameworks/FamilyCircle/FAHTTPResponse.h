//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHTTPURLResponse;

@interface FAHTTPResponse : NSObject
{
    NSHTTPURLResponse *_HTTPResponse;	// 8 = 0x8
    id _body;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000f4ef
@property(readonly, nonatomic) id body; // @synthesize body=_body;
@property(readonly, nonatomic) NSHTTPURLResponse *HTTPResponse; // @synthesize HTTPResponse=_HTTPResponse;
- (id)initWithHTTPResponse:(id)arg1 body:(id)arg2;	// IMP=0x000000000000f423

@end

