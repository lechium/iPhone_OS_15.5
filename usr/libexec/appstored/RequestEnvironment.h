//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSProcessInfo, NSString;
@protocol RequestPresenter;

@interface RequestEnvironment : NSObject
{
    AMSProcessInfo *_clientInfo;	// 8 = 0x8
    NSString *_logKey;	// 16 = 0x10
    CDUnknownBlockType _reconfigureRequestHandler;	// 24 = 0x18
    id <RequestPresenter> _requestPresenter;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000009bf88
@property(retain) id <RequestPresenter> requestPresenter; // @synthesize requestPresenter=_requestPresenter;
@property(copy) CDUnknownBlockType reconfigureRequestHandler; // @synthesize reconfigureRequestHandler=_reconfigureRequestHandler;
@property(copy) NSString *logKey; // @synthesize logKey=_logKey;
@property(copy) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000009be46

@end
